#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "base.h"
MainWindow::MainWindow(QWidget *parent)
    : BaseWidget(this, parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this->setFixedSize(WIN_WIDTH,WIN_HEIGHT);
    this->setWindowTitle(QStringLiteral("贪吃蛇"));
    this->setLayout(ui->HeadContainer);

    init();

}
MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_StartButton_clicked()
{
    game_list = new Game_List(this);
    game_list->show();
}

void MainWindow::on_ExitButton_clicked()
{
    if(QMessageBox::Yes == QMessageBox::question(this,QStringLiteral("提示"),QStringLiteral("你确定要退出吗？"),QMessageBox::Yes|QMessageBox::No)){
        exit(0);
    }
}

void MainWindow::on_HelpButton_clicked()
{
    help_widget = new Help(0);
    help_widget->show();
}
