#ifndef MAPEDITOR_H
#define MAPEDITOR_H
#include <QLabel>
#include "base.h"
#include <QPainter>
#include <QKeyEvent>
#include <QMouseEvent>
class MapView:public QLabel
{
public:
    MapView(QWidget *parent = nullptr);
    virtual void paintEvent(QPaintEvent *e);

    QImage block_img[BLOCK_NUM]; //储存方块的图片，避免重复加载
    GameMap game_map; //都是初始化为0
};

class MapEditor:public MapView
{
public:
    MapEditor(QWidget *parent = nullptr);
    void paintEvent(QPaintEvent *e);
    void mousePressEvent(QMouseEvent *ev);

    //控件接口
    void setBlock(int x){
        if(x < BLOCK_NUM){
            editing_block = x;
        }
    }
private:
    int editing_block; //外部指定的准备要录入的方块序号
};

#endif // MAPEDITOR_H
