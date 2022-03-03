#ifndef PASS_GAME_H
#define PASS_GAME_H
class Pass_Game_Setting;
#include <QKeyEvent>
#include "base.h"
#include "player_rank.h"
#include "pass_game_setting.h"
#include "help.h"

class PassGameData: virtual public GameData{
public:
    PassGameData(const QString& MapName = ""):map(MapName){
        level = 0;
        if(!load()){
            //行列父类自动初始化
            speed = SPEED;
        }
        else {
            snake.reborn(col, row); //不按默认方式重生
        }
        if(!map.load()){
            map.name = "";
        }else{
            //加载蛇的出生点，如没能读取地图，蛇的出生位置居中
            snake.body[0] = map.birth[0];
            snake.body[1] = map.birth[1];
            snake.body[2] = map.birth[2];
            snake.setDirection(map.direction);
        }
        food_update(); //设置食物
    }
    void update(QWidget *QW);
    void food_update();
    bool hit();
    void eat(const SnakeNode&);
    void reload(); //参数不变
    bool load();
    void save();

    GameMap map;
    int level;
    int speed; //为移动一格所需要的毫秒数
};

namespace Ui {
class Pass_Game;
}

class Pass_Game : public GameWidget
{
    Q_OBJECT


public:
    explicit Pass_Game(QWidget *parent = nullptr, const QString& MapName = "");
    ~Pass_Game();
    void paintEvent(QPaintEvent *event);
    void keyReleaseEvent(QKeyEvent *event);

    PassGameData data;

    GameData& getData(){
        return data;
    }

private:
    Ui::Pass_Game *ui;
    QTimer* timer;
    QImage block_img[BLOCK_NUM]; //储存方块的图片，避免重复加载
    Pass_Game_Setting* pass_game_setting;
    Player_Rank* player_rank_widget;
    Help* help_widget;

public slots:
    void timerSlot();
    void showInfo();
    void gameover();
    void restart();

private slots:
    void on_BackButton_clicked();

    void on_StartButton_clicked();
    void on_RestartButton_clicked();
    void on_HelpButton_clicked();
    void on_SettingButton_clicked();
};

#endif // PASS_GAME_H
