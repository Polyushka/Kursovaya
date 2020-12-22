#include "menu.h"
#include "ui_menu.h"

Menu::Menu(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Menu)
{
    ui->setupUi(this);
    inform=new Information();
    connect(inform,&Information::menuWindow,this,&Menu::show);
    g_capital=new Game_capital();
    connect(g_capital,&Game_capital::menuWindow,this,&Menu::show);
    map=new Map();
    connect(map,&Map::mapW,this,&Menu::show);
}

Menu::~Menu()
{
    delete ui;
}

void Menu::on_back_clicked()
{
    this->close();
    emit firstWindow();
}

void Menu::on_all_inform_clicked()
{
    inform->show();
    this->close();
}

void Menu::on_game_capital_clicked()
{
    g_capital->show();
    this->close();
}

void Menu::on_Map_clicked()
{
    map->show();
    this->close();
}
