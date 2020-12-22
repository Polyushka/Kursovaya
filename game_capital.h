#ifndef GAME_CAPITAL_H
#define GAME_CAPITAL_H
#include <QWidget>
#include <Country.h>
namespace Ui {
class Game_capital;
}

class Game_capital : public QWidget
{
    Q_OBJECT

public:
    explicit Game_capital(QWidget *parent = 0);
    std::vector<Country> all_inf_();
    int game(std::vector<Country>);
    void game_mode();
    ~Game_capital();
signals:
void menuWindow();
private slots:

void on_Back_clicked();

void on_capital1_clicked();

void on_capital2_clicked();

void on_capital3_clicked();

void on_capital4_clicked();

private:
    Ui::Game_capital *ui;
    std::vector<Country> Countries;
    int r_a;
    int w;
    int r;
    int number;
};
#endif // GAME_CAPITAL_H
