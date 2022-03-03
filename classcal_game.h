#ifndef CLASSCAL_GAME_H
#define CLASSCAL_GAME_H
#include <QKeyEvent>
#include "base.h"
class Classcal_Game_Setting;
#include "classcal_game_setting.h"
#include "player_rank.h"
#include "help.h"

enum class hit_myself_mode{None,Hurt,Die};
namespace Ui {
class Classcal_Game;
}

//游戏数据和函数
class ClasscalGameData:virtual public GameData{
public:
    ClasscalGameData(){
        if(!load()){
            //行列父类自动初始化
            speed = 100;
            through_wall = false;
            food_num = 1;
            hit_myself = hit_myself_mode::Die;
            color_1 = Qt::yellow;
            color_2 = Qt::blue;
            save();
        }
        else {
            snake.reborn(col, row); //不按默认方式重生
        }
        food_update();
    }

    void food_update();
    bool hit();
    void eat(const SnakeNode&);
    void reload(); //参数不变
    void reload(int _col, int _row); //变参数

    //文件操作函数
    bool load();
    void save();

    bool through_wall;
    hit_myself_mode hit_myself;
    int food_num; //食物的数量
    int speed; //为移动一格所需要的毫秒数
    QList<Food> food;
    QColor color_1;
    QColor color_2;
};

//窗体
class Classcal_Game : public GameWidget
{
    Q_OBJECT

public:
    friend class Classcal_Game_Setting;
    explicit Classcal_Game(QWidget *parent = nullptr);
    void paintEvent(QPaintEvent *event);
    void keyReleaseEvent(QKeyEvent *event);
    ~Classcal_Game();

    ClasscalGameData data;

    GameData& getData(){
        return data;
    }

private:
    //组件
    Ui::Classcal_Game *ui;
    Classcal_Game_Setting* setting_widget;
    Player_Rank* player_rank_widget;
    Help* help_widget;
    //数据
    QLinearGradient* LG;
    QBrush* B;


public slots:
    void timerSlot();
    void showInfo();
    void gameover();
    void restart();

private slots:
    void on_StartButton_clicked();
    void on_BackButton_clicked();
    void on_SettingButton_clicked();
    void on_HelpButton_clicked();
    void on_RestartButton_clicked();
};

#endif // CLASSCAL_GAME_H
