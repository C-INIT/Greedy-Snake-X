#include "map.h"
MapView::MapView(QWidget *parent):QLabel(parent){
    //初始化地图方块图片
    for(int i = 0; i < BLOCK_NUM; i++){
        block_img[i].load(QString("Block/") + LevelToBlock[i] + QString(".png"));
    }
    this->setStyleSheet("border:1px solid black;"); //设置边框
}

MapEditor::MapEditor(QWidget *parent):MapView(parent){
    editing_block = BlockType::SnakeHead; //为空气
}

void MapView::paintEvent(QPaintEvent *e){
    QPainter painter(this);
    for(int i = 0; i < COL; i++){
        for(int j = 0; j < ROW; j++){
            if(game_map.block[i][j].level > BlockType::Air){
                painter.drawImage(QRect(i*MAP_BLOCK_SIZE,j*MAP_BLOCK_SIZE,MAP_BLOCK_SIZE,MAP_BLOCK_SIZE), block_img[game_map.block[i][j].level]);
            }else if(game_map.block[i][j].level == BlockType::Elixir){
                painter.drawImage(QRect(i*MAP_BLOCK_SIZE,j*MAP_BLOCK_SIZE,MAP_BLOCK_SIZE,MAP_BLOCK_SIZE), QImage(":/Image/elixir.png"));
            }
        }
    }
    //画出头，身，尾
    painter.drawText(QRect(game_map.birth[0].getX()*MAP_BLOCK_SIZE,game_map.birth[0].getY()*MAP_BLOCK_SIZE,MAP_BLOCK_SIZE,MAP_BLOCK_SIZE),Qt::AlignCenter, QString("H"));
    painter.drawText(QRect(game_map.birth[1].getX()*MAP_BLOCK_SIZE,game_map.birth[1].getY()*MAP_BLOCK_SIZE,MAP_BLOCK_SIZE,MAP_BLOCK_SIZE),Qt::AlignCenter, QString("B"));
    painter.drawText(QRect(game_map.birth[2].getX()*MAP_BLOCK_SIZE,game_map.birth[2].getY()*MAP_BLOCK_SIZE,MAP_BLOCK_SIZE,MAP_BLOCK_SIZE),Qt::AlignCenter, QString("T"));
}

void MapEditor::paintEvent(QPaintEvent *e){
    int i,j;
    QPainter painter(this);
    QPen pen(QColor(0,0,0,100));
    //绘制虚线
    painter.setPen(pen);
    for(i = 1; i < COL; i++){
        painter.drawLine(i*MAP_BLOCK_SIZE,0,i*MAP_BLOCK_SIZE,MAP_SIZE);
    }
    for(j = 0; j < ROW; j++){
        painter.drawLine(0,j*MAP_BLOCK_SIZE,MAP_SIZE,j*MAP_BLOCK_SIZE);
    }

    for(i = 0; i < COL; i++){
        for(j = 0; j < ROW; j++){
            if(game_map.block[i][j].level > BlockType::Air){
                painter.drawImage(QRect(i*MAP_BLOCK_SIZE,j*MAP_BLOCK_SIZE,MAP_BLOCK_SIZE,MAP_BLOCK_SIZE), block_img[game_map.block[i][j].level]);
            }else if(game_map.block[i][j].level == BlockType::Elixir){
                painter.drawImage(QRect(i*MAP_BLOCK_SIZE,j*MAP_BLOCK_SIZE,MAP_BLOCK_SIZE,MAP_BLOCK_SIZE), QImage(":/Image/elixir.png"));
            }

        }
    }
    //画出头，身，尾
    painter.drawText(QRect(game_map.birth[0].getX()*MAP_BLOCK_SIZE,game_map.birth[0].getY()*MAP_BLOCK_SIZE,MAP_BLOCK_SIZE,MAP_BLOCK_SIZE),Qt::AlignCenter, QString("H"));
    painter.drawText(QRect(game_map.birth[1].getX()*MAP_BLOCK_SIZE,game_map.birth[1].getY()*MAP_BLOCK_SIZE,MAP_BLOCK_SIZE,MAP_BLOCK_SIZE),Qt::AlignCenter, QString("B"));
    painter.drawText(QRect(game_map.birth[2].getX()*MAP_BLOCK_SIZE,game_map.birth[2].getY()*MAP_BLOCK_SIZE,MAP_BLOCK_SIZE,MAP_BLOCK_SIZE),Qt::AlignCenter, QString("T"));
}

void MapEditor::mousePressEvent(QMouseEvent *e){
    int x = e->x()/MAP_BLOCK_SIZE;
    int y = e->y()/MAP_BLOCK_SIZE;
    if(e->button() == Qt::LeftButton){
        switch(editing_block){
        case BlockType::SnakeHead:
        {
            game_map.birth[0] = SnakeNode(x,y);
            break;
        }
        case BlockType::SnakeBody:
        {
            game_map.birth[1] = SnakeNode(x,y);
            break;
        }
        case BlockType::SnakeTail:
        {
            game_map.birth[2] = SnakeNode(x,y);
            break;
        }
        default:
        {
            game_map.block[x][y].level = editing_block;
            break;
        }
        }
    }else{
        game_map.block[x][y].level = BlockType::Air;
    }
    this->update();
}
