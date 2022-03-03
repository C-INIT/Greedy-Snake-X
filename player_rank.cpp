#include "player_rank.h"
#include "ui_player_rank.h"


Player_Rank::Player_Rank(GameWidget* game, const QString& _game_name, QWidget *parent) :
    BaseWidget(this, parent),
    ui(new Ui::Player_Rank)
{
    ui->setupUi(this);
    game_name = _game_name;
    if(!game_name.isEmpty()){
        load();
        QString m1 = QStringLiteral("你的得分为") + QString::number(game->getData().getScore());
        QString m2 = QStringLiteral("\n请输入你的大名,计入排行榜");
        bool isOk;
        QString name = QInputDialog::getText(nullptr, QStringLiteral("提示"),m1 + m2,QLineEdit::Normal,"", &isOk);
        //加入记录并排序
        if(isOk){
            player_rank_list.append(PlayerRecord(name, game->getData().getScore(), game->getData().getTime(), game->getData().getStep()));
            qSort(player_rank_list.begin(),player_rank_list.end(), PlayerRecord::compare);
        }
        //超过10则删减
        int length = player_rank_list.length();
        if(length > 10){
            player_rank_list.removeLast();
            length--;
        }
        for(int i = 0; i < length; i++){
            ui->RankView->setItem(i, 0, new QTableWidgetItem(player_rank_list[i].name));
            ui->RankView->setItem(i, 1, new QTableWidgetItem(QString::number(player_rank_list[i].score)));          //sssssssssssssssssssssssssssssssssssssssss
            ui->RankView->setItem(i, 2, new QTableWidgetItem(player_rank_list[i].time.toString(QStringLiteral("hh:mm:ss"))));
            ui->RankView->setItem(i, 3, new QTableWidgetItem(QString::number(player_rank_list[i].step)));
        }
    }else{
        QString m1 = QStringLiteral("你的得分为") + QString::number(game->getData().getScore());
        MessageBox::info(this, m1);
    }
    init();
}

Player_Rank::~Player_Rank()
{
    delete ui;
}

void Player_Rank::closeEvent(QCloseEvent *event){
    //保存排行榜
    save();
}

void Player_Rank::save(){
    if(!game_name.isEmpty()){
        QFile f(QString("Save/")+game_name+QString("Rank.dat"));
        f.open(QIODevice::WriteOnly|QIODevice::Truncate);
        QDataStream out(&f);
        out << player_rank_list;
        f.close();
    }

}
bool Player_Rank::load(){
    QFile f(QString("Save/")+game_name+QString("Rank.dat"));
    if(f.open(QIODevice::ReadOnly|QIODevice::Truncate)){
        QDataStream in(&f);
        in >> player_rank_list;
        f.close();
        return true;
    }else{
        return false;
    }
}

void Player_Rank::on_BackToGameButton_clicked()
{
    save();
    delete this;
}

void Player_Rank::on_BackToMenuButton_clicked()
{
    save();
    emit restart();
    delete this;
}

void Player_Rank::on_RestartButton_clicked()
{
    save();
    emit backToMeun();
    delete this;
}
