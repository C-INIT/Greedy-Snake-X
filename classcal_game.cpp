#include "classcal_game.h"
#include "ui_classcal_game.h"

Classcal_Game::Classcal_Game(QWidget *parent) :
    GameWidget(this, parent),
    ui(new Ui::Classcal_Game)
{
    ui->setupUi(this);
    this->resize(WIN_WIDTH, WIN_HEIGHT);
    this->setAutoFillBackground(true);
    this->setFocusPolicy(Qt::StrongFocus);
    //设置画刷
    LG = new QLinearGradient(QPointF(0,0),QPointF(MAP_SIZE / data.getCol(),MAP_SIZE / data.getRow()));
    LG->setSpread(QGradient::RepeatSpread);
    LG->setColorAt(0,data.color_1);
    LG->setColorAt(1,data.color_2);
    B = new QBrush(*LG);
    //连接数据
    connect(data.timer,SIGNAL(timeout()), this, SLOT(timerSlot()));
    connect(data.timekeeper, SIGNAL(timeout()), this, SLOT(showInfo()));
    connect(&data, SIGNAL(gameover()), this, SLOT(gameover()));

    ui->showScore->setText(QString::number(data.getScore()));
    ui->showStep->setText(QString::number(data.getStep()));
    ui->showTime->setText(data.getTime().toString(QStringLiteral("hh:mm:ss")));

    init();
}

Classcal_Game::~Classcal_Game()
{
    delete LG;
    delete B;
    delete ui;
}
void Classcal_Game:: paintEvent(QPaintEvent *event){
    Q_UNUSED(event);
    QStyleOption opt;
    opt.init(this);
    QPainter painter(this);
    style()->drawPrimitive(QStyle::PE_Widget, &opt, &painter, this);
    painter.drawRect(QRect(SMALL_BLANK,SMALL_BLANK,MAP_SIZE,MAP_SIZE));
    QList<SnakeNode>::iterator sn;
    //画出蛇身
    painter.setBrush(*B);
    for(sn = data.snake.body.begin(); sn!=data.snake.body.end(); sn++){
        painter.drawRect(data.toQRect(*sn));
    }
    QList<Food>::iterator f;
    //画出食物
    for(f = data.food.begin(); f!= data.food.end(); f++){
        painter.drawImage(data.toQRect(*f),QImage(QString().sprintf("Food/food_%d.png", f->id)));
    }
}

void Classcal_Game:: keyReleaseEvent(QKeyEvent *event){
    if(data.timer->isActive()){
        switch (event->key()) {
        case Qt::Key_Up:
        case Qt::Key_W:
        {
            if (data.snake.getDirection() != DOWN && data.snake.body[0].getY() != data.snake.body[1].getY() + 1) {
                data.snake.setDirection(UP);
            }
            break;
        }
        case Qt::Key_Down:
        case Qt::Key_S:
        {
            if (data.snake.getDirection() != UP && data.snake.body[0].getY() != data.snake.body[1].getY() - 1) {
                data.snake.setDirection(DOWN);
            }
            break;
        }
        case Qt::Key_Right:
        case Qt::Key_D:
        {
            if (data.snake.getDirection() != LEFT && data.snake.body[0].getX() != data.snake.body[1].getX() - 1) {
                data.snake.setDirection(RIGHT);
            }
            break;
        }
        case Qt::Key_Left:
        case Qt::Key_A:
        {
            if (data.snake.getDirection() != RIGHT && data.snake.body[0].getX() != data.snake.body[1].getX() + 1) {
                data.snake.setDirection(LEFT);
            }
            break;
        }
        }
        data.addStep(); //增加步骤
    }

}

void Classcal_Game::timerSlot(){
    data.update(this);
}

void Classcal_Game::showInfo(){
    data.addTime();
    ui->showScore->setText(QString::number(data.getScore()));
    ui->showStep->setText(QString::number(data.getStep()));
    ui->showTime->setText(data.getTime().toString(QStringLiteral("hh:mm:ss")));
}

void Classcal_Game::on_StartButton_clicked()
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

//撞墙后的处理
//结束游戏返回true
bool ClasscalGameData::hit(){
    SnakeNode& head = snake.body[0];
    if(head.getX()<0){
        if(through_wall){
            head.setX(col - 1);
        }else{
            return true;
        }
    }
    else if(head.getX() > col -1){
        if(through_wall){
            head.setX(0);
        }else{
            return true;
        }
    }
    if(head.getY()<0){
        if(through_wall){
            head.setY(row - 1);
        }else{
            return true;
        }
    }
    else if(head.getY() > row - 1){
        if(through_wall){
            head.setY(0);
        }else{
            return true;
        }
    }
    for(int i = 1; i < snake.length(); i++){
        if(head==snake.body[i]){
            switch (hit_myself) {
            case hit_myself_mode::None:
            {
                break;
            }case hit_myself_mode::Hurt:
            {
                //删除最后一个节点
                snake.body.removeLast();
                score--; //扣分
                break;
            }
            case hit_myself_mode::Die:
            {
                return true;
                break;
            }
            }
        }
    }
    return false;
}

void ClasscalGameData::eat(const SnakeNode& sn){
    for(int i = 0; i < food.length(); i++){
        if(snake.body[0] == food[i]){
            //删掉吃掉的食物
            food.removeAt(i);
            //增加一个节点，与尾结点坐标相同
            snake.body.append(sn);
            score++; //加分
        }
    }
}

void ClasscalGameData::food_update(){
    //食物数量为0则生成
    Food* f;
    if(food.length() == 0){
        for(int i = 0; i < food_num; i++){
            f = new Food(randInt(1,FOOD_NUM),Point(0,col - 1,0, row - 1));
            food.append(*f);
        }
    }

}

void ClasscalGameData::reload(){
    snake.reborn(col,row);
    food.clear();
    food_update();
    score = 0;
    time.setHMS(0,0,0);
    step = 0;
}
void ClasscalGameData::reload(int _col, int _row){
    row = _row;
    col = _col;
    snake.reborn(col,row);
    food.clear();
    food_update();
    score = 0;
    time.setHMS(0,0,0);
    step = 0;
}

bool ClasscalGameData::load(){
    QFile f(QString("Save/ClasscalGameSetting.dat"));
    if(f.open(QIODevice::ReadOnly|QIODevice::Truncate)){
        QDataStream in(&f);
        in >> col >> row >> through_wall >> food_num  >> hit_myself >> speed >> color_1 >> color_2;
        f.close();
        return true;
    }else{
        return false;
    }
}

void ClasscalGameData::save(){
    QFile f(QString("Save/ClasscalGameSetting.dat"));
    f.open(QIODevice::WriteOnly|QIODevice::Truncate);
    QDataStream out(&f);
    out << col << row << through_wall << food_num  << hit_myself << speed << color_1 << color_2;
    f.close();
}

void Classcal_Game::gameover(){
    //游戏结束，结算分数，点击开始按钮后才重新开始
    ui->StartButton->setText(QStringLiteral("开始"));
    data.time_stop();
    ui->StartButton->setEnabled(false);
    if(data.food_num!=1||data.through_wall==true||data.hit_myself!=hit_myself_mode::Die){
        player_rank_widget = new Player_Rank(this);
    }else{
        player_rank_widget = new Player_Rank(this, "ClasscalGame");
    }
    connect(player_rank_widget, SIGNAL(restart()), this, SLOT(restart()));
    connect(player_rank_widget, SIGNAL(backToMeun()), this, SLOT(on_BackButton_clicked()));
    player_rank_widget->show();
}

void Classcal_Game::on_BackButton_clicked()
{
    if(ui->StartButton->text()!=QStringLiteral("开始")){
        ui->StartButton->setText(QStringLiteral("继续"));
        data.time_stop();
    }
    if(QMessageBox::Yes == QMessageBox::question(this,QStringLiteral("提示"),QStringLiteral("你确定要返回吗？"),QMessageBox::Yes|QMessageBox::No)){
        delete this;
    }
}

void Classcal_Game::on_SettingButton_clicked()
{
    data.time_stop();
    ui->StartButton->setText(QStringLiteral("继续"));
    this->setEnabled(false);
    setting_widget = new Classcal_Game_Setting(this);
    setting_widget->show();
}

void Classcal_Game::on_HelpButton_clicked()
{
    if(ui->StartButton->text() == QStringLiteral("暂停")){
        data.time_stop();
        ui->StartButton->setText(QStringLiteral("继续"));
    }
    help_widget = new Help(1);
    help_widget->show();
}
void Classcal_Game::restart(){
    ui->StartButton->setText(QStringLiteral("开始"));
    data.time_stop();
    if(QMessageBox::Yes == QMessageBox::question(this,QStringLiteral("提示"),QStringLiteral("你确定要重新开始吗？"),QMessageBox::Yes|QMessageBox::No)){
        data.reload();
        this->update();
    }
    //如游戏结束后点击重新开始按钮，要把开始按钮设为激活状态
    ui->StartButton->setEnabled(true);
}
void Classcal_Game::on_RestartButton_clicked()
{
    if(ui->StartButton->isEnabled()){
        gameover();
    }else{
        restart();
    }
}
