#ifndef AUTHORIZATION_H
#define AUTHORIZATION_H
#include <QWidget>
#include <menu.h>

namespace Ui {
class Authorization;
}

class Authorization : public QWidget
{
    Q_OBJECT

public:
    explicit Authorization(QWidget *parent = 0);
     std::vector<User> all_inf_users();
    bool check_user();
    ~Authorization();
signals:
    void firstWindow();// Сигнал для первого окна на открытие
private slots:
    void on_LogIn_clicked();
    void on_Back_clicked();
private:
    Ui::Authorization *ui;
    Menu *menu;
};

#endif // AUTHORIZATION_H
