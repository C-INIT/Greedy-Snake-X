#include "pass_game.h"
#include "ui_pass_game.h"

Pass_Game::Pass_Game(QWidget *parent, const QString& MapName):
    GameWidget(this, parent),
    ui(new Ui::Pass_Game),
    data(MapName)
{
    if(data.map.name.isEmpty()){
        QMessageBox::information(this,QStringLiteral("提示"),QStringLiteral("地图载入失败，请重新尝试"));
        delete this;
    }
    ui->setupUi(this);
    this->resize(WIN_WIDTH, WIN_HEIGHT);
    this->setAutoFillBackground(true);
    this->setFocusPolicy(Qt::StrongFocus);
    connect(data.timer,SIGNAL(timeout()),this,SLOT(timerSlot()));
    connect(data.timekeeper, SIGNAL(timeout()), this, SLOT(showInfo()));
    connect(&data, SIGNAL(gameover()), this, SLOT(gameover()));

    ui->showScore->setText(QString::number(data.getScore()));
    ui->showStep->setText(QString::number(data.getStep()));
    ui->showTime->setText(data.getTime().toString(QStringLiteral("hh:mm:ss")));

    for(int i = 0; i < BLOCK_NUM; i++){
        block_img[i].load(QString("Block/") + LevelToBlock[i] + QString(".png"));
    }

    init();
}

Pass_Game::~Pass_Game()
{
    delete ui;
}

void Pass_Game:: paintEvent(QPaintEvent *event){
    Q_UNUSED(event);
    QStyleOption opt;
    opt.init(this);
    QPainter painter(this);
    style()->drawPrimitive(QStyle::PE_Widget, &opt, &painter, this);


    painter.drawRect(QRect(SMALL_BLANK,SMALL_BLANK,MAP_SIZE,MAP_SIZE));

    for(int i = 0; i < COL; i++){
        for(int j = 0; j < ROW; j++){
            //大于空气的方块是实体方块
            if(data.map.block[i][j].level > BlockType::Air){
                painter.drawImage(QRect(i*MAP_BLOCK_SIZE + SMALL_BLANK,j*MAP_BLOCK_SIZE + SMALL_BLANK,MAP_BLOCK_SIZE,MAP_BLOCK_SIZE), block_img[data.map.block[i][j].level]);
            }else if(data.map.block[i][j].level == BlockType::Elixir){
                painter.drawImage(QRect(i*MAP_BLOCK_SIZE + SMALL_BLANK,j*MAP_BLOCK_SIZE + SMALL_BLANK,MAP_BLOCK_SIZE,MAP_BLOCK_SIZE), QImage(":/Image/elixir.png"));
            }
        }
    }
    QImage img(QString(":/Image/") + LevelToImage[data.level] + QString(".png"));
    QList<SnakeNode>::iterator sn;
    //画出蛇身
    for(sn = data.snake.body.begin(); sn!=data.snake.body.end(); sn++){
        painter.drawImage(data.toQRect(*sn), img);
    }
    painter.drawImage(data.toQRect(data.food),QImage(QString().sprintf("Food/food_%d.png", data.food.id)));
}

void Pass_Game::keyReleaseEvent(QKeyEvent *event){
    if(data.timer->isActive()){
        switch (event->key()) {
        case Qt::Key_Up:
        case Qt::Key_W:
        {
            if(data.snake.getDirection() != DOWN && data.snake.body[0].getY()!=data.snake.body[1].getY() + 1){
                data.snake.setDirection(UP);
            }
            break;
        }
        case Qt::Key_Down:
        case Qt::Key_S:
        {
            if(data.snake.getDirection() != UP && data.snake.body[0].getY()!=data.snake.body[1].getY() - 1){
                data.snake.setDirection(DOWN);
            }
            break;
        }
        case Qt::Key_Right:
        case Qt::Key_D:
        {
            if(data.snake.getDirection() != LEFT &&  data.snake.body[0].getX()!=data.snake.body[1].getX() - 1){
                data.snake.setDirection(RIGHT);
            }
            break;
        }
        case Qt::Key_Left:
        case Qt::Key_A:
        {
            if(data.snake.getDirection() != RIGHT &&  data.snake.body[0].getX()!=data.snake.body[1].getX() + 1){
                data.snake.setDirection(LEFT);
            }
            break;
        }
        }
    }
    data.addStep();
}

//撞墙后的处理
//结束游戏返回true
bool PassGameData::hit(){
    SnakeNode& head = snake.body[0];
    if(head.getX()<0){
        return true;
    }
    else if(head.getX() > col -1){
        return true;
    }
    if(head.getY()<0){
        return true;
    }
    else if(head.getY() > row - 1){
        return true;
    }
    for(int i = 1; i < snake.length(); i++){
        if(head==snake.body[i]){
            return true;
        }
    }
    if(map.block[head.getX()][head.getY()].level > level){
        return true;
    }else{
        map.block[head.getX()][head.getY()].level = BlockType::Air;
    }
    return false;
}

void PassGameData::eat(const SnakeNode& sn){
    if(snake.body[0] == food){
        snake.body.append(sn);
        food_update();
        score++;
    }else if(map.block[snake.body[0].getX()][snake.body[0].getY()].level == BlockType::Elixir){
        //level从0开始
        if(level < BLOCK_NUM - 1){
            level++;
        }
        score+=3;
    }
}

void PassGameData::food_update(){
    while(1){
        food = Food(randInt(1,FOOD_NUM),Point(0,COL - 1,0, row - 1));
        if(map.block[food.getX()][food.getY()].level <= level){ //生成的食物的位置不能是蛇不能破坏的方块
            break;
        }
    }
}

void PassGameData::reload(){
    food_update(); //刷新食物
    map.load(); //刷新地图
    //蛇重生
    snake.body.clear();
    snake.body.append(map.birth[0]);
    snake.body.append(map.birth[1]);
    snake.body.append(map.birth[2]);
    snake.setDirection(map.direction);

    score = 0;
    time.setHMS(0,0,0);
    step = 0;
    level = 0;
}

void PassGameData::update(QWidget *QW){
    SnakeNode sn(snake.body.last()); //获取最后一个节点的坐标
    snake.move();
    eat(sn); //再刚才尾结点的位置长出尾巴，食物更新写在了eat里面
    //就算是timer.stop()了还是会执行完整个函数，包括后面的刷新，这样蛇头会越界
    //因为如果确定越界就不刷新图像
    if(!hit()){ //检测碰撞
        QW->update();
    }else{
        emit gameover();
    }
}

bool PassGameData::load(){
    QFile f(QString("Save/PassGameSetting.dat"));
    if(f.open(QIODevice::ReadOnly|QIODevice::Truncate)){
        QDataStream in(&f);
        in >> speed ;
        f.close();
        return true;
    }else{
        return false;
    }
}

void PassGameData::save(){
    QFile f(QString("Save/PassGameSetting.dat"));
    f.open(QIODevice::WriteOnly|QIODevice::Truncate);
    QDataStream out(&f);
    out << speed;
    f.close();
}
void Pass_Game::timerSlot(){
    data.update(this);
}

void Pass_Game::showInfo(){
    data.addTime();
    ui->showScore->setText(QString::number(data.getScore()));
    ui->showStep->setText(QString::number(data.getStep()));
    ui->showTime->setText(data.getTime().toString(QStringLiteral("hh:mm:ss")));
    ui->showLevel->setText(QString::number(data.level));
}

void Pass_Game::gameover(){
    //游戏结束，结算分数，点击开始按钮后才重新开始
    ui->StartButton->setText(QStringLiteral("开始"));
    data.time_stop();
    ui->StartButton->setEnabled(false);
    if(data.map.fixed){
        QString file_name("PassGame_");
        file_name += data.map.name;
        player_rank_widget = new Player_Rank(this,file_name);
    }else{
        player_rank_widget = new Player_Rank(this);
        QMessageBox::information(this, QStringLiteral("提示"),QStringLiteral("由于该地图没有定型，因此游戏成就将不会被记录。"));
    }
    player_rank_widget->show();
    connect(player_rank_widget, SIGNAL(restart()), this, SLOT(restart()));
    connect(player_rank_widget, SIGNAL(backToMeun()), this, SLOT(on_BackButton_clicked()));
}

void Pass_Game::on_BackButton_clicked()
{
    delete this;
}

void Pass_Game::on_StartButton_clicked()
{
    if(ui->StartButton->text() == QStringLiteral("开始")){
        data.time_move(data.speed);
        ui->StartButton->setText(QStringLiteral("暂停"));
    }else if(ui->StartButton->text() == QStringLiteral("暂停")){
        data.time_stop();
        ui->StartButton->setText(QStringLiteral("继续"));
    }else{
        data.time_move(data.speed);
        ui->StartButton->setText(QStringLiteral("暂停"));
    }
}
void Pass_Game::restart(){
    ui->StartButton->setText(QStringLiteral("开始"));
    data.time_stop();
    if(QMessageBox::Yes == QMessageBox::question(this,QStringLiteral("提示"),QStringLiteral("你确定要重新开始吗？"),QMessageBox::Yes|QMessageBox::No)){
        data.reload();
        this->update();
    }
    //如游戏结束后点击重新开始按钮，要把开始按钮设为激活状态
    ui->StartButton->setEnabled(true);
}

void Pass_Game::on_RestartButton_clicked()
{
    if(ui->StartButton->isEnabled()){
        gameover();
    }else{
        restart();
    }
}

void Pass_Game::on_HelpButton_clicked()
{
    if(ui->StartButton->text() == QStringLiteral("暂停")){
        data.time_stop();
        ui->StartButton->setText(QStringLiteral("继续"));
    }
    help_widget = new Help(2);
    help_widget->show();
}

void Pass_Game::on_SettingButton_clicked()
{
    data.time_stop();
    ui->StartButton->setText(QStringLiteral("继续"));
    this->setEnabled(false);
    pass_game_setting = new Pass_Game_Setting(this);
    pass_game_setting->show();
}
