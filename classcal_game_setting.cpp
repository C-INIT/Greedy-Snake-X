#include "classcal_game_setting.h"
#include "ui_classcal_game_setting.h"

Classcal_Game_Setting::Classcal_Game_Setting(Classcal_Game* game) :
    BaseWidget(this, nullptr),
    ui(new Ui::Classcal_Game_Setting)
{
    ui->setupUi(this);
    this->setWindowTitle(QStringLiteral("贪吃蛇设置"));
    this->game = game;
    this->setLayout(ui->HeadContainer);
    //本来想用按钮来储存颜色的，但按钮只能通过qss设置，故用label
    ui->showColor_1->setAutoFillBackground(true); //允许改变Label背景色
    ui->showColor_2->setAutoFillBackground(true);
    //设置控件默认值
    ui->showSpeed->setNum(game->data.speed);
    ui->setSpeed->setValue(game->data.speed);
    ui->showFoodnum->setNum(game->data.food_num);
    ui->setFoodnum->setValue(game->data.food_num);
    ui->setRow->setCurrentText(QString::number(game->data.getRow()));
    ui->setCol->setCurrentText(QString::number(game->data.getCol()));
    switch (game->data.hit_myself) {
    case hit_myself_mode::None:
    {
        ui->setMode->setCurrentIndex(0);
        break;
    }
    case hit_myself_mode::Hurt:
    {
        ui->setMode->setCurrentIndex(1);
        break;
    }
    case hit_myself_mode::Die:
    {
        ui->setMode->setCurrentIndex(2);
        break;
    }
    }
    if(game->data.through_wall){
        ui->throughWall->setCurrentIndex(0);
    }else{
        ui->throughWall->setCurrentIndex(1);
    }
    QPalette pal = ui->showColor_1->palette();
    pal.setColor(QPalette::Background, game->data.color_1);
    ui->showColor_1->setPalette(pal);
    pal = ui->showColor_2->palette();
    pal.setColor(QPalette::Background, game->data.color_2);
    ui->showColor_2->setPalette(pal);

    init();
}

Classcal_Game_Setting::~Classcal_Game_Setting()
{
    delete ui;
}

void Classcal_Game_Setting::back(){
    auto r = QMessageBox::question(this,QStringLiteral("提示"),QStringLiteral("准备退出，你需要保存你的更改吗"),QMessageBox::Yes|QMessageBox::No|QMessageBox::Cancel);
    if(r == QMessageBox::Yes){
        setting();
        game->setEnabled(true);
        delete this;
    }else if(r == QMessageBox::No){
        game->setEnabled(true);
        delete this;
    }
}
void Classcal_Game_Setting::closeEvent(QCloseEvent *event)
{
    auto r = QMessageBox::question(this,QStringLiteral("提示"),QStringLiteral("准备退出，你需要保存你的更改吗"),QMessageBox::Yes|QMessageBox::No|QMessageBox::Cancel);
    if(r == QMessageBox::Yes){
        setting();
        game->setEnabled(true);
        event->accept();
    }else if(r == QMessageBox::No){
        game->setEnabled(true);
        event->accept();
    }else{
        event->ignore();
    }
}

void Classcal_Game_Setting::on_BackButton_clicked()
{
    back();
}

void Classcal_Game_Setting::on_setColor_1_clicked()
{
    QPalette pal = ui->showColor_1->palette();
    pal.setColor(QPalette::Background, QColorDialog::getColor());
    ui->showColor_1->setPalette(pal);
}

void Classcal_Game_Setting::on_setColor_2_clicked()
{
    QPalette pal = ui->showColor_2->palette();
    pal.setColor(QPalette::Background, QColorDialog::getColor());
    ui->showColor_2->setPalette(pal);
}

void Classcal_Game_Setting::setting()
{
    if(MessageBox::yesOrNo(this,QStringLiteral("更改游戏设置会失去现在的进度，你确定要更改吗？"))){
        game->data.speed = ui->setSpeed->value();
        game->data.food_num = ui->setFoodnum->value();
        game->data.reload(ui->setRow->currentText().toInt(),ui->setCol->currentText().toUInt()); //修改参数
        //先改变方块大小再来确定渐变色
        game->data.color_1 = ui->showColor_1->palette().color(QPalette::Background); //获取控件背景色
        game->data.color_2 = ui->showColor_2->palette().color(QPalette::Background);
        delete game->LG;
        delete game->B;
        game->LG = new QLinearGradient(QPointF(0, 0), QPointF(MAP_SIZE / game->data.getCol(), MAP_SIZE / game->data.getRow()));
        game->LG->setSpread(QGradient::RepeatSpread);
        game->LG->setColorAt(0, game->data.color_1);
        game->LG->setColorAt(1, game->data.color_2);
        game->B = new QBrush(*(game->LG));
        switch (ui->setMode->currentIndex()) {
        case 0:
        {
            game->data.hit_myself = hit_myself_mode::None;
            break;
        }
        case 1:
        {
            game->data.hit_myself = hit_myself_mode::Hurt;
            break;
        }
        case 2:
        {
            game->data.hit_myself = hit_myself_mode::Die;
            break;
        }
        }
        switch (ui->throughWall->currentIndex()) {
        case 0:
        {
            game->data.through_wall = true;
            break;
        }
        case 1:
        {
            game->data.through_wall = false;
            break;
        }
        }
        if(game->data.food_num!=1||game->data.through_wall==true||game->data.hit_myself!=hit_myself_mode::Die){
            MessageBox::info(this,QStringLiteral("为了公平，食物数量不为1，蛇撞到墙不死亡或撞到自身不死亡的游戏模式下，你的得分将不会计入排行榜。"));
        }
        //保存游戏更改
        game->data.save();
        //更新画面
        game->update();
    }
}

void Classcal_Game_Setting::on_SaveButton_clicked()
{
    setting();
    MessageBox::info(this, QStringLiteral("保存成功！"));
}

void Classcal_Game_Setting::on_setSpeed_valueChanged(int value)
{
    ui->showSpeed->setNum(value);
}

void Classcal_Game_Setting::on_setFoodnum_valueChanged(int value)
{
    ui->showFoodnum->setNum(value);
}
