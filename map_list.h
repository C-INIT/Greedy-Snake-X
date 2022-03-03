#ifndef MAP_LIST_H
#define MAP_LIST_H

#include <QWidget>
#include "base.h"
#include "map_design.h"
#include "pass_game.h"
#include "help.h"

namespace Ui {
class Map_List;
}

class Map_List : public BaseWidget
{
    Q_OBJECT

public:
    explicit Map_List(QWidget *parent = nullptr);
    ~Map_List();


public slots:
    void active();
    void mapListUpdata();
private slots:
    void on_BackButton_clicked();

    void on_CreateButton_clicked();

    void on_DesignButton_clicked();

    void on_StartButton_clicked();

    void on_MapList_currentTextChanged(const QString &currentText);

    void on_RemoveButton_clicked();

    void on_HelpButton_clicked();

private:
    Ui::Map_List *ui;
    Map_Design* map_design;
    Pass_Game* pass_game;
    GameMap* map;
    Help* help_widget;
};

#endif // MAP_LIST_H
