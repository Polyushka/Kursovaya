#ifndef MENU_H
#define MENU_H
#pragma once

#include <QWidget>
#include <information.h>
#include <game_capital.h>
#include <map.h>

namespace Ui {
class Menu;
}
class Menu : public QWidget
{
    Q_OBJECT

public:
    explicit Menu(QWidget *parent = 0);
    ~Menu();
signals:
    void firstWindow();
    void menuWindow();
private slots:
    void on_back_clicked();

    void on_all_inform_clicked();

    void on_game_capital_clicked();

    void on_Map_clicked();

private:
    Ui::Menu *ui;
    Information *inform;
    Game_capital *g_capital;
    Map *map;
};
#endif // MENU_H
