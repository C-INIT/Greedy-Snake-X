#ifndef GAME_LIST_H
#define GAME_LIST_H

#include <QWidget>
#include "classcal_game.h"
#include "map_list.h"

namespace Ui {
class Game_List;
}

class Game_List : public BaseWidget
{
    Q_OBJECT

public:
    explicit Game_List(QWidget *parent = nullptr);
    ~Game_List();

private slots:
    void on_BackButton_clicked();

    void on_ClasscalMode_clicked();

    void on_PassMode_clicked();

private:
    Ui::Game_List *ui;
    Classcal_Game* classcal_game;
    Map_List * map_list;
};

#endif // GAME_LIST_H
