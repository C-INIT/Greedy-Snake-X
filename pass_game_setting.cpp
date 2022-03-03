#include "pass_game_setting.h"
#include "ui_pass_game_setting.h"

Pass_Game_Setting::Pass_Game_Setting(Pass_Game *game) :
    BaseWidget(this, nullptr),
    ui(new Ui::Pass_Game_Setting)
{
    ui->setupUi(this);
    init();
    this->game = game;
    ui->setSpeed->setValue(game->data.speed);
    ui->showSpeed->setNum(game->data.speed);
}

Pass_Game_Setting::~Pass_Game_Setting()
{
    delete ui;
}

void Pass_Game_Setting::on_setSpeed_valueChanged(int value)
{
    ui->showSpeed->setNum(value);
}

void Pass_Game_Setting::closeEvent(QCloseEvent *event)
{
    auto r = QMessageBox::question(this,QStringLiteral("提示"),QStringLiteral("准备退出，你需要保存你的更改吗"),QMessageBox::Yes|QMessageBox::No|QMessageBox::Cancel);
    if(r == QMessageBox::Yes){
        game->data.speed = ui->setSpeed->value();
        game->data.timer->setInterval(game->data.speed);
        game->data.save();
        game->setEnabled(true);
        event->accept();
    }else if(r == QMessageBox::No){
        game->setEnabled(true);
        event->accept();
    }else{
        event->ignore();
    }
}

void Pass_Game_Setting::on_BackButton_clicked()
{
    auto r = QMessageBox::question(this,QStringLiteral("提示"),QStringLiteral("准备退出，你需要保存你的更改吗"),QMessageBox::Yes|QMessageBox::No|QMessageBox::Cancel);
    if(r == QMessageBox::Yes){
        game->data.speed = ui->setSpeed->value();
        game->data.timer->setInterval(game->data.speed);
        game->data.save();
        game->setEnabled(true);
        delete this;
    }else if(r == QMessageBox::No){
        game->setEnabled(true);
        delete this;
    }
}

void Pass_Game_Setting::on_SaveButton_clicked()
{
    game->data.speed = ui->setSpeed->value();
    game->data.timer->setInterval(game->data.speed);
    game->data.save();
    MessageBox::info(this,QStringLiteral("保存成功！"));
}
