#include<QTime>
#include"base.h"

QString LevelToBlock[] = { //方块等级到方块名称的映射
    QStringLiteral("树叶"),
    QStringLiteral("沙子"),
    QStringLiteral("草块"),
    QStringLiteral("木头"),
    QStringLiteral("砖块"),
    QStringLiteral("石头"),
    QStringLiteral("铁块"),
    QStringLiteral("钻石块")
};

QString LevelToImage[] = {
    QString("white"),
    QString("red"),
    QString("orange"),
    QString("yellow"),
    QString("green"),
    QString("cyan"),
    QString("blue"),
    QString("purple")
};
//main函数初始化
QMap<QString,int> BlockToLevel; //方块名称到方块等级的映射

int randInt(int xx, int sx){
    //如果qsrand的参数相同，那么生成的随机数相同
    //下面这条语句每秒改变一次种子，而程序运行速度过快，只会生成一次随机数
    //qsrand(QTime(0,0,0).secsTo(QTime::currentTime()));
    return qrand()%(sx-xx+1)+xx;
}

//按方向移动,op为true，则往相反方向,op在声明时默认为false
SnakeNode& Snake::movePoint(SnakeNode & sn, bool op){
    int d;
    if(op){
        d = -1;
    }else{
        d = 1;
    }
    switch (direction) {
    case UP:
    {
        sn.move(0,-d);
        break;
    }
    case DOWN:
    {
        sn.move(0,d);
        break;
    }
    case RIGHT:
    {
        sn.move(d,0);
        break;
    }
    case LEFT:
    {
        sn.move(-d,0);
        break;
    }
    default:
        break;
    }
    return sn;
}

//Point文件读写
QDataStream& operator<<(QDataStream& out, const Point& p){
    out << p.x << p.y;
    return out;
}

QDataStream& operator>>(QDataStream &in, Point& p){
    in >> p.x >> p.y;
    return in;
}

//Food文件读写
QDataStream& operator<<(QDataStream& out, const Food& f){
    out << f.x << f.y << f.id;
    return out;
}

QDataStream& operator>>(QDataStream &in, Food& f){
    in >> f.x >> f.y >> f.id;
    return in;
}

//Block文件读写
QDataStream& operator<<(QDataStream& out, const Block& b){
    out << b.level;
    return out;
}

QDataStream& operator>>(QDataStream &in, Block& b){
    in >> b.level;
    return in;
}

QDataStream& operator<<(QDataStream& out, const PlayerRecord& pr){
    out << pr.name << pr.score << pr.time << pr.step;
    return out;
}

QDataStream& operator>>(QDataStream &in, PlayerRecord& pr){
    in >> pr.name >> pr.score >> pr.time >> pr.step;
    return in;
}

void MessageBox::info(QWidget* parent, const QString& text, const QString& title){
    QMessageBox::information(parent, title, text);
}

bool MessageBox::yesOrNo(QWidget* parent, const QString& text, const QString& title){
    if(QMessageBox::Yes == QMessageBox::question(parent,title,text,QMessageBox::Yes|QMessageBox::No)){
        return true;
    }else{
        return false;
    }
}

BaseWidget::BaseWidget(BaseWidget* _paintWidget, QWidget *parent) : QWidget(parent)
{
    paintWidget = _paintWidget;
    //在这里直接设置背景无效
}

void BaseWidget::paintEvent(QPaintEvent *event){
    Q_UNUSED(event);
    QStyleOption opt;
    opt.init(this);
    QPainter painter(this);
    style()->drawPrimitive(QStyle::PE_Widget, &opt, &painter, this);
}

void BaseWidget::init(){
    int i = 1;
    paintWidget->setWindowFlags(paintWidget->windowFlags()&~Qt::WindowMaximizeButtonHint);
    paintWidget->setWindowIcon(QIcon(":/Icon/icon.ico"));
    paintWidget->setStyleSheet(QString("BaseWidget{background-image: url(:/Background/" + QString::number(randInt(1,4)) + QString(".jpg);}")));
}

GameWidget::GameWidget(BaseWidget* paintWidget, QWidget *parent) : BaseWidget(paintWidget, parent)
{

}
