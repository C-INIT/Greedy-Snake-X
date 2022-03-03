#include "map_design.h"
#include "ui_map_design.h"

Map_Design::Map_Design(QWidget *parent, QString Filename) :
    BaseWidget(this, parent),
    ui(new Ui::Map_Design)
{
    ui->setupUi(this);
    //ui->Map->setBlock(BlockType::SnakeHead); //设置放置方块为蛇头，与组合框的首选项一致
    //ui->Map->setStyleSheet("border:1px solid black;"); //设置边框
    ui->Map->game_map.name = Filename;
    if(Filename!=""){
        ui->Map->game_map.load();
        ui->setName->setText(ui->Map->game_map.name);
        ui->setDirection->setCurrentIndex(ui->Map->game_map.direction);
        //检测地图是否已经定型
        if(ui->Map->game_map.fixed){
            MessageBox::info(this, QStringLiteral("该地图已定型，如需编辑并保存该地图，请更改地图名"));
        }
    }
    for(int i = 0; i < BLOCK_NUM; i++){
        ui->BlockType->addItem(LevelToBlock[i]);
    }

    init();
}

Map_Design::~Map_Design()
{
    delete ui;
}

void Map_Design::closeEvent(QCloseEvent *event){
    back();
}

void Map_Design::on_BackButton_clicked()
{
    back();
    delete this;
}

void Map_Design::on_SaveButton_clicked()
{
    if(ui->setName->text().isEmpty()){
        MessageBox::info(this,QStringLiteral("文件名不能为空！"));
    }else{
        GameMap temp(ui->setName->text());
        temp.load();
        if(temp.fixed){
            MessageBox::info(this, QStringLiteral("重名文件的地图已定型，如需编辑并保存现在正在编辑的地图，请更改地图名"));
        }else{
            if(ui->setFixed->isChecked()){
                if(QMessageBox::No == QMessageBox::question(this,QStringLiteral("提示"),QStringLiteral("地图定型后将不可再次修改，你确定要定型吗？"),QMessageBox::Yes|QMessageBox::No)){
                    ui->setFixed->setChecked(false);
                }
            }
            ui->Map->game_map.fixed = ui->setFixed->isChecked();
            ui->Map->game_map.name = ui->setName->text();
            //方向的序号按照宏定义中方向代表的数字
            ui->Map->game_map.direction = ui->setDirection->currentIndex();
            ui->Map->game_map.save();
            MessageBox::info(this,QStringLiteral("保存成功!"));
        }
    }
}

void Map_Design::on_BlockType_currentTextChanged(const QString &text)
{
    if(text == QStringLiteral("蛇头")){
        ui->Map->setBlock(BlockType::SnakeHead);
    }else if(text == QStringLiteral("蛇身")){
        ui->Map->setBlock(BlockType::SnakeBody);
    }else if(text == QStringLiteral("蛇尾")){
        ui->Map->setBlock(BlockType::SnakeTail);
    }else if(text == QStringLiteral("特殊食物")){
        ui->Map->setBlock(BlockType::Elixir);
    }else{
        ui->Map->setBlock(BlockToLevel[text]);
    }
}

void Map_Design::on_HelpButton_clicked()
{
    help_widget = new Help(4);
    help_widget->show();
}
