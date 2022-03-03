#ifndef PLAYER_RANK_H
#define PLAYER_RANK_H

#include <QWidget>
#include "base.h"


namespace Ui {
class Player_Rank;
}

class Player_Rank : public BaseWidget
{
    Q_OBJECT

public:
    explicit Player_Rank(GameWidget* game, const QString& _game_name = "", QWidget *parent = nullptr);
    ~Player_Rank();
    void closeEvent(QCloseEvent *event);

    bool load();
    void save();

private:
    Ui::Player_Rank *ui;
    QList<PlayerRecord> player_rank_list;
    QString game_name;

signals:
    void restart();
    //void backToGame();直接删除该窗体即可
    void backToMeun();
private slots:
    void on_BackToGameButton_clicked();
    void on_BackToMenuButton_clicked();
    void on_RestartButton_clicked();
};

#endif // PLAYER_RANK_H
