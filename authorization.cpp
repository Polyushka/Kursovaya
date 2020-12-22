#include "authorization.h"
#include "ui_authorization.h"
#include "User.h"
Authorization::Authorization(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Authorization)
{
    ui->setupUi(this);
    menu = new Menu();
    connect(menu,&Menu::firstWindow, this, &Authorization::show);

}
Authorization::~Authorization()
{
    delete ui;
}

void Authorization::on_LogIn_clicked()
{   if(check_user()==true)
    { QString login_;
        login_=ui->Enter_login->text();
        ui->Enter_login->clear();
        ui->Enter_password->clear();
        menu->show();
    this->close();}
}

void Authorization::on_Back_clicked()
{
    this->close();
    emit firstWindow();
}

bool Authorization::check_user(){
    std::vector<User>Us=all_inf_users();
    QString log=ui->Enter_login->text();
    QString pas=ui->Enter_password->text();
    for(int i=0;i<Us.size();i++){
        if(log==Us[i].get_login())
            if(pas==Us[i].get_password())
                {return true;}
            else {QMessageBox msgBox;
                msgBox.setWindowTitle("Ошибка");
                msgBox.setText("Неправильный пароль!");
                msgBox.exec();return false;}
         }{QMessageBox msgBox;
        msgBox.setWindowTitle("Ошибка");
        msgBox.setText("Такого пользователя не существует!");
        msgBox.exec();
        return false;}
}
