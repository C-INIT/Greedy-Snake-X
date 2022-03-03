#include "map_list.h"
#include "ui_map_list.h"
#include <QDir>

Map_List::Map_List(QWidget *parent) :
    BaseWidget(this, parent),
    ui(new Ui::Map_List)
{
    ui->setupUi(this);
    this->setAutoFillBackground(true);
    //里面包含了"."和".."
    QDir dir(QString("Map/"),"*.dat");
    QFileInfoList l = dir.entryInfoList();
    foreach(auto i, l){
        ui->MapList->addItem(i.baseName()); //没有拓展名
    }
    if(ui->MapList->count()!=0){
        ui->MapList->setCurrentRow(0); //选择列表中的第一项
        ui->Map->game_map.name = ui->MapList->currentItem()->text();
        ui->Map->game_map.load();
        ui->Map->update();
    }
    ui->isFixed->setChecked(ui->Map->game_map.fixed);

    init();
}

Map_List::~Map_List()
{
    delete ui;
}

void Map_List::mapListUpdata(){
    ui->MapList->clear();
    QDir dir(QString("Map/"),"*.dat");
    QFileInfoList l = dir.entryInfoList();
    foreach(auto i, l){
        ui->MapList->addItem(i.baseName()); //没有拓展名
    }
    ui->MapList->setCurrentRow(0); //选择列表中的第一项
    if(ui->MapList->count()!=0){
        ui->Map->game_map.name = ui->MapList->currentItem()->text();
        ui->Map->game_map.load();
        ui->Map->update();
    }
    ui->isFixed->setChecked(ui->Map->game_map.fixed);
}

void Map_List::active(){
    this->setEnabled(true);
    ui->Map->game_map.load();
    ui->Map->update(); //更新地图
    ui->isFixed->setChecked(ui->Map->game_map.fixed);
}

void Map_List::on_BackButton_clicked()
{
    delete this;
}

void Map_List::on_CreateButton_clicked()
{
    map_design = new Map_Design(); //不覆盖原窗体，设计者可以根据原窗体的地图进行编辑
    this->setEnabled(false);
    map_design->show();
    connect(map_design,SIGNAL(back()),this,SLOT(active()));
    connect(map_design,SIGNAL(back()),this,SLOT(mapListUpdata()));
}

void Map_List::on_DesignButton_clicked()
{
    if(ui->MapList->count() > 0){
        map_design = new Map_Design(nullptr, ui->MapList->currentItem()->text()); //不覆盖原窗体，设计者可以根据原窗体的地图进行编辑
        this->setEnabled(false);
        map_design->show();
        connect(map_design,SIGNAL(back()),this,SLOT(active()));
        connect(map_design,SIGNAL(back()),this,SLOT(mapListUpdata()));
    }
}

void Map_List::on_StartButton_clicked()
{
    pass_game = new Pass_Game(this, ui->MapList->currentItem()->text()); //类里面会自动初始化地图
    pass_game->show();
}

//改变列表选择项，更新地图显示
void Map_List::on_MapList_currentTextChanged(const QString &currentText)
{
    ui->Map->game_map.name = currentText;
    ui->Map->game_map.load();
    ui->Map->update();
    ui->isFixed->setChecked(ui->Map->game_map.fixed);
}

void Map_List::on_RemoveButton_clicked()
{
    if(ui->MapList->count() > 0 && QMessageBox::Yes == QMessageBox::question(this,QStringLiteral("提示"),QStringLiteral("你确定要删除该地图吗？"),QMessageBox::Yes|QMessageBox::No)){
        QFile f(QString("Map/")+ ui->MapList->currentItem()->text() + QString(".dat"));
        if(f.remove()){
            QMessageBox::information(this, QStringLiteral("提示"),QStringLiteral("地图已删除。"));
        }else{
            QMessageBox::information(this, QStringLiteral("提示"),QStringLiteral("该地图不存在，删除失败。"));
        }
        ui->MapList->removeItemWidget(ui->MapList->takeItem(ui->MapList->currentRow()));
        //刷新
        if(ui->MapList->count()!=0){
            ui->MapList->setCurrentRow(0); //选择列表中的第一项
            ui->Map->game_map.name = ui->MapList->currentItem()->text();
            ui->Map->game_map.load();
        }else{
            ui->Map->clear();
        }
        ui->Map->update();
    }
}

void Map_List::on_HelpButton_clicked()
{
    help_widget = new Help(3);
    help_widget->show();
}
