#ifndef BASE_H
#define BASE_H

#define WIN_WIDTH 820
#define WIN_HEIGHT 620
#define SMALL_BLANK 10 //地图里窗体左上角的距离
#define MAP_SIZE 600 //地图像素
//坐标以MAP_BLOCK_SIZE为单位，范围是0~ROW-1，0~COL-1
#define MAP_BLOCK_SIZE 30 //方格大小
#define BLOCK_NUM 8 //实体方块种类数量
#define FOOD_NUM 38
#define ROW 20
#define COL 20
#define SPEED 200 //蛇行进一格所需要的时间
#define SHOW_INFO_SPEED 200 //更新游戏信息的毫秒间隔
//本来打算用enum class来定义方向，不过这样就需要转换类型，不太方便
//蛇的方向
#define UP 0
#define RIGHT 1
#define DOWN 2
#define LEFT 3

#include <QWidget>
#include <QList>
#include <QHBoxLayout>
#include <QVBoxLayout>
#include <QPainter>
#include <QTime>
#include <QTimer>
#include <QMessageBox>
#include <QInputDialog>
#include <QMap>
#include <QFile>
#include <QDataStream>
#include <QStyleOption>

#include <QDebug>

//公共变量部分
extern QString LevelToBlock[];
extern QMap<QString,int> BlockToLevel;
extern QString LevelToImage[];
//函数声明部分
int randInt(int xx, int sx);

namespace BlockType {
const int Air = -1;
const int SnakeHead = -2;
const int SnakeBody = -3;
const int SnakeTail = -4;
const int Elixir = -5;
}
//类声明部分
class Point{ //虽然有QPoint，但它太复杂了
public:
    //文件读写
    friend QDataStream& operator<<(QDataStream& out, const Point& p);
    friend QDataStream& operator>>(QDataStream& in, Point& p);
    Point():x{0},y{0}{}
    Point(int _x,int _y):x{_x},y{_y}{}
    Point(const Point& p){
        x = p.x;
        y = p.y;
    }
    //减1是因为不减坐标可能越界,生成随机坐标的点
    Point(int x1, int x2, int y1, int y2){
        x = randInt(x1,x2);
        y = randInt(y1, y2);
    }
    virtual ~Point(){}
    inline int getX() const{
        return x;
    }
    inline int getY() const{
        return y;
    }
    inline void setX(int _x){
        x = _x;
    }
    inline void setY(int _y){
        y = _y;
    }
    Point& move(int dx,int dy){
        x+=dx;
        y+=dy;
        return *this;
    }

    virtual Point toPoint(){
        return Point(x,y); //返回一个副本
    }

    //因为多态性，继承了Point类的类都可以使用这些运算符
    bool operator==(const Point& p){
        return x==p.x&&y==p.y;
    }

    void operator=(const Point& p){
        x = p.x;
        y = p.y;
    }
protected:
    int x;
    int y;
};

class Food:public Point{
public:
    friend QDataStream& operator<<(QDataStream& out, const Food& f);
    friend QDataStream& operator>>(QDataStream &in, Food& f);
    Food(){id = 0;}
    Food(int _id, const Point& _point):id{_id},Point(_point){}
    Food(const Food& f):id{f.id}{
        //这些不能放在初始化列表
        x = f.x;
        y = f.y;
    }
    int id;
};

class Block{
public:
    friend QDataStream& operator<<(QDataStream& out, const Block& b);
    friend QDataStream& operator>>(QDataStream &in, Block& b);
    Block(){
        level = BlockType::Air;
    }
    int level;
};

class SnakeNode:public Point{
public:
    SnakeNode(){}
    SnakeNode(int x,int y):Point(x,y){}
    SnakeNode(int x1, int x2, int y1, int y2):Point(x1,x2,y1,y2){}
    SnakeNode(const Point& p):Point(p){}
    SnakeNode(const SnakeNode& sn){
        x = sn.x;
        y = sn.y;
    }
};

class Snake{
public:
    QList<SnakeNode> body;
    Snake(int col = COL, int row = ROW){
        //初始化蛇的位置
        reborn(col, row);
    }
    inline int length(){
        return body.size();
    }
    SnakeNode& movePoint(SnakeNode& sn, bool op = false); //按方向移动点
    void setDirection(int d){
        if(d>=0&&d<=3){
            direction = d;
        }
    }
    inline int getDirection(){
        return direction;
    }
    void move(){
        int tail = body.length() - 1;
        for(int i = tail;i > 0; i--){
            body[i] = body[i-1];
        }
        movePoint(body[0]); //移动头结点
    }
    void reborn(int col = COL, int row = ROW) { //重生
        body.clear();
        body.append(SnakeNode(col / 2, row / 2));
        direction = randInt(0, 3);
        SnakeNode p(body[0]);
        //头后面新增两个节点
        for (int i = 1; i <= 2; i++) {
            body.append(movePoint(p, true));
        }
    }
protected:
    int direction;
};

//玩家的游戏记录
class PlayerRecord{
public:
    friend QDataStream& operator<<(QDataStream& out, const PlayerRecord& f);
    friend QDataStream& operator>>(QDataStream &in, PlayerRecord& f);
    PlayerRecord(const QString& _name = "", int _score = 0, const QTime& _time = QTime(0,0,0), int _step = 0){
        if(_name.isEmpty()){
            name = QStringLiteral("无名氏");
        }
        else {
            name = _name;
        }
        score = _score;
        time = _time;
        step = _step;
    }

    //用于排序的比较函数
    static bool compare(const PlayerRecord &p1, const PlayerRecord &p2)
    {
        //按分数，时间，操作步数顺序排序
        if(p1.score > p2.score){
            return true;
        }else if(p1.score == p2.score){
            //时间和步数越少越好
            if(p1.time < p2.time){
                return true;
            }else if(p1.time == p2.time){
                if(p1.step <= p2.step){
                    return true;
                }else{
                    return false;
                }
            }else{
                return false;
            }
        }else{
            return false;
        }
    }


    QString name;
    int score;
    QTime time;
    int step;
};


class GameMap{
public:
    //新建地图的初始化
    GameMap(){
        name = "";
        //以零为起点，因此减1
        birth[0] = SnakeNode(COL / 2 - 1, ROW / 2 - 1);
        birth[1] = SnakeNode(COL / 2, ROW / 2 - 1);
        birth[2] = SnakeNode(COL / 2 + 1, ROW / 2 - 1);
        fixed = false;
    }
    //有载入地图的操作
    GameMap(const QString& MapName):GameMap(){
        name = MapName;
    }
    QString name{}; //地图名称
    Block block[COL][ROW]; //Block能自动初始化
    int direction;
    SnakeNode birth[3]; //蛇的出生点，0元素表示蛇头
    bool fixed; //是否不可更改

    void save(){
        QFile f(QString("Map/")+name+QString(".dat"));
        f.open(QIODevice::WriteOnly|QIODevice::Truncate);
        QDataStream out(&f);
        out << name << direction << fixed;
        for(int i = 0; i < COL; i++){
            for(int j = 0; j < ROW; j++){
                out << block[i][j];
            }
        }
        for(int i = 0; i < 3; i++){
            out << birth[i];
        }
        f.close();
    }
    bool load(){
        QFile f(QString("Map/")+name+QString(".dat"));
        if(f.open(QIODevice::ReadOnly|QIODevice::Truncate)){
            QDataStream in(&f);
            in >> name >> direction >> fixed;
            for(int i = 0; i < COL; i++){
                for(int j = 0; j < ROW; j++){
                    in >> block[i][j];
                }
            }
            for(int i = 0; i < 3; i++){
                in >> birth[i];
            }
            f.close();
            return true;
        }else{
            return false;
        }
    }
    void clear(){
        name = "";
        //以零为起点，因此减1
        birth[0] = SnakeNode(COL / 2 - 1, ROW / 2 - 1);
        birth[1] = SnakeNode(COL / 2, ROW / 2 - 1);
        birth[2] = SnakeNode(COL / 2 + 1, ROW / 2 - 1);
        fixed = false;
        for(int i = 0; i < COL; i++){
            for(int j = 0; j < ROW; j++){
                block[i][j].level = BlockType::Air;
            }
        }
    }
};

class GameData: public QObject{ //基本游戏数据结构
    Q_OBJECT
public:
    QTimer* timer;
    QTimer* timekeeper; //固定时刻
    Food food;
    Snake snake;

    GameData(int _col = COL, int _row = ROW):col{_col}, row{_row}{
        timer = new QTimer;
        timekeeper = new QTimer;
        score = 0;
        step = 0;
        time.setHMS(0,0,0);
    }
    virtual ~GameData(){
        delete timer;
    }
    inline int getRow() const{
        return row;
    }
    inline int getCol() const{
        return col;
    }
    inline int getScore() const{
        return score;
    }
    inline int getStep() const{
        return step;
    }
    inline void addStep(){
        step++;
    }
    inline const QTime& getTime() const{
        return time;
    }
    inline void addTime(){
        time = time.addMSecs(SHOW_INFO_SPEED);
    }
    //加了const就不能转换了
    QRect toQRect(const Point& p){
        int w = MAP_SIZE / col;
        int h = MAP_SIZE / row;
        return QRect(p.getX()*w + SMALL_BLANK,p.getY()*h + SMALL_BLANK,w,h);
    }
    virtual bool hit() = 0; //碰撞检测
    virtual void food_update() = 0; //更新食物位置
    virtual void eat(const SnakeNode&) = 0; //吃到食物发生的事 //参数代表长出的尾巴的结点
    //控制计时器
    virtual void time_move(int sec = SPEED){
        timer->start(sec);
        timekeeper->start(SHOW_INFO_SPEED);
    }
    virtual void time_stop(){
        timer->stop();
        timekeeper->stop();
    }
    //数据更新
    virtual void update(QWidget* QW){
        SnakeNode sn(snake.body.last()); //获取最后一个节点的坐标
        snake.move();
        eat(sn); //再刚才尾结点的位置长出尾巴
        food_update();
        //就算是timer.stop()了还是会执行完整个函数，包括后面的刷新，这样蛇头会越界
        //因为如果确定越界就不刷新图像
        if(!hit()){ //检测碰撞
            QW->update();
        }else{
            emit gameover();
        }
    }

    //数据重新初始化
    virtual void reload(){
        //行和列不会变
        snake.reborn(col,row);
        score = 0;
        step = 0;
        time.setHMS(0,0,0);
        //更新食物
    }

//我想过用函数指针，不过函数指针必须指向静态函数，把类的函数设为静态，则不能调用非静态的数据
signals:
    void gameover(); //对外接口，游戏结束后的操作

protected:
    //确定了后就不能随意更改
    int row;
    int col;

    int score;
    int step;
    QTime time;
};

namespace MessageBox{
    void info(QWidget* parent, const QString& text = "", const QString& title = QStringLiteral("提示"));
    bool yesOrNo(QWidget* parent, const QString& text = "", const QString& title = QStringLiteral("提示"));
};


class BaseWidget : public QWidget{
    Q_OBJECT
public:
    explicit BaseWidget(BaseWidget* paintWidget, QWidget *parent = nullptr);
    virtual void paintEvent(QPaintEvent *event);

    void init();
protected:
    QWidget* paintWidget;
};

class GameWidget : public BaseWidget
{
    Q_OBJECT
public:
    explicit GameWidget(BaseWidget* paintWidget, QWidget *parent = nullptr);

    virtual GameData& getData() = 0;

signals:

};

#endif // BASE_H
