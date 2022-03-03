#ifndef CLASSCAL_GAME_SETTING_H
#define CLASSCAL_GAME_SETTING_H
class Classcal_Game;
#include <QWidget>
#include <QColorDialog>
#include "classcal_game.h"
namespace Ui {
class Classcal_Game_Setting;
}

class Classcal_Game_Setting : public BaseWidget
{
    Q_OBJECT

public:
    explicit Classcal_Game_Setting(Classcal_Game* game);
    ~Classcal_Game_Setting();
    void closeEvent(QCloseEvent *event);
    void back();
    void setting();

private slots:
    void on_BackButton_clicked();

    void on_setColor_1_clicked();

    void on_setColor_2_clicked();

    void on_SaveButton_clicked();

    void on_setSpeed_valueChanged(int value);

    void on_setFoodnum_valueChanged(int value);

private:
    Ui::Classcal_Game_Setting *ui;
    Classcal_Game* game;
};

#endif // CLASSCAL_GAME_SETTING_H
