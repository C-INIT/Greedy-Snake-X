#ifndef PASS_GAME_SETTING_H
#define PASS_GAME_SETTING_H
class Pass_Game;
#include <QWidget>
#include "base.h"
#include "pass_game.h"

namespace Ui {
class Pass_Game_Setting;
}

class Pass_Game_Setting : public BaseWidget
{
    Q_OBJECT

public:
    explicit Pass_Game_Setting(Pass_Game* game);
    ~Pass_Game_Setting();
    void closeEvent(QCloseEvent *event);

private slots:
    void on_setSpeed_valueChanged(int value);

    void on_BackButton_clicked();

    void on_SaveButton_clicked();

private:
    Ui::Pass_Game_Setting *ui;
    Pass_Game* game;
};

#endif // PASS_GAME_SETTING_H
