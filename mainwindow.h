#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QWidget>
#include "game_list.h"
#include "classcal_game.h"
#include "base.h"
#include "help.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public BaseWidget
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_StartButton_clicked();

    void on_ExitButton_clicked();

    void on_HelpButton_clicked();

private:
    Ui::MainWindow *ui;
    Game_List* game_list;
    Help* help_widget;
};
#endif // MAINWINDOW_H
