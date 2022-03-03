#include "mainwindow.h"
#include "base.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    //变量初始化
    for(int i = 0; i < BLOCK_NUM; i++){
        BlockToLevel[LevelToBlock[i]] = i;
    }
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    return a.exec();
}
