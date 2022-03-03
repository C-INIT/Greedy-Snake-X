#include "game_list.h"
#include "ui_game_list.h"

Game_List::Game_List(QWidget *parent) :
    BaseWidget(this, parent),
    ui(new Ui::Game_List)
{
    ui->setupUi(this);
    this->setAutoFillBackground(true);
    this->setLayout(ui->HeadContainer);

    init();
}

Game_List::~Game_List()
{
    delete ui;
}

void Game_List::on_BackButton_clicked()
{
    delete this;
}

void Game_List::on_ClasscalMode_clicked()
{
    classcal_game = new Classcal_Game(this);
    classcal_game->show();
}

void Game_List::on_PassMode_clicked()
{
    map_list = new Map_List(this);
    map_list->show();
}
