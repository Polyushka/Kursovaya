#ifndef REGISTRATION_H
#define REGISTRATION_H
#include <QWidget>
#include <menu.h>

namespace Ui {
class Registration;
}

class Registration : public QWidget
{
    Q_OBJECT

public:
    explicit Registration(QWidget *parent = 0);
    void Reg();
    void input_file(std::string log,std::string pas);
    ~Registration();
signals:
    void menuWindow();
    void firstWindow();

private slots:

    void on_LogIn_clicked();

    void on_Back_clicked();

private:
    Ui::Registration *ui;
    Menu *menu;
};
#endif // REGISTRATION_H
