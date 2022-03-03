#include "help.h"
#include "ui_help.h"

Help::Help(int index, QWidget *parent) :
    BaseWidget(this,parent),
    ui(new Ui::Help)
{
    ui->setupUi(this);
    QLabel* l1 = new QLabel;
    QLabel* l2 = new QLabel;
    ui->BlockView->setItem(0,0,new QTableWidgetItem("0")); //序号
    l1->setPixmap(QPixmap(QString(":/Image/") + LevelToImage[0] + QString(".png")).scaled(40,40));
    l2->setPixmap(QPixmap(QString(":/Image/elixir.png")).scaled(40,40));
    l1->setAlignment(Qt::AlignCenter);
    l2->setAlignment(Qt::AlignCenter);
    ui->BlockView->setCellWidget(0,1,l1);
    ui->BlockView->setCellWidget(0,2,l2);
    for(int i = 1; i <= BLOCK_NUM; i++){
        l1 = new QLabel;
        l2 = new QLabel;
        ui->BlockView->setItem(i,0,new QTableWidgetItem(QString::number(i-1))); //序号
        l1->setPixmap(QPixmap(QString(":/Image/") + LevelToImage[i - 1] + QString(".png")).scaled(40,40));
        l2->setPixmap(QPixmap(QString(":/Block/") + LevelToBlock[i - 1] + QString(".png")).scaled(40,40));
        l1->setAlignment(Qt::AlignCenter);
        l2->setAlignment(Qt::AlignCenter);
        ui->BlockView->setCellWidget(i,1,l1);
        ui->BlockView->setCellWidget(i,2,l2);
    }

    ui->tabWidget->setCurrentIndex(index);
    init();

/*
    ui->BlockView->setItem(0,0,new QTableWidgetItem("0")); //序号
    img[0][0].setPixmap(QPixmap(QString(":/Image/") + LevelToImage[0] + QString(".png")).scaled(30,30));
    img[1][0].setPixmap(QPixmap(QString(":/Image/elixir.png")).scaled(30,30));
    img[0][0].setAlignment(Qt::AlignCenter);
    img[1][0].setAlignment(Qt::AlignCenter);
    ui->BlockView->setCellWidget(0,1,&img[0][0]);
    ui->BlockView->setCellWidget(0,2,&img[1][0]);
    for(int i = 1; i <= BLOCK_NUM; i++){
        ui->BlockView->setItem(i,0,new QTableWidgetItem(QString::number(i))); //序号
        //img[0][i]->setPixmap(QPixmap(QString(":/Image/") + LevelToImage[i - 1] + QString(".png")).scaled(30,30));
        //img[1][i].setPixmap(QPixmap(QString(":/Block/") + LevelToBlock[i - 1] + QString(".png")).scaled(30,30));
        //img[0][i]->setAlignment(Qt::AlignCenter);
        //img[1][i].setAlignment(Qt::AlignCenter);
        //ui->BlockView->setCellWidget(i,1,&img[0][i]);
        //ui->BlockView->setCellWidget(i,2,&img[1][i]);
        //ui->BlockView->setItem(i,0,new QTableWidgetItem(QIcon(QString(":/Image/") + LevelToImage[i - 1] + QString(".png")),""));
        //ui->BlockView->setItem(i,0,new QTableWidgetItem(QIcon(QString(":/Image/") + LevelToBlock[i - 1] + QString(".png")),""));
    }
*/
}

Help::~Help()
{
    delete ui;
}

void Help::on_BackButton_clicked()
{
    delete this;
}
