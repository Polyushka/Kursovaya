#include "registration.h"
#include "ui_registration.h"
#include "text_file.h"
Registration::Registration(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Registration)
{
    ui->setupUi(this);
    menu=new Menu();
    connect(menu,&Menu::firstWindow,this,&Registration::show);
}

Registration::~Registration()
{
    delete ui;
}


void Registration::on_LogIn_clicked()
{   Reg();
    ui->Enter_login->clear();
    ui->Enter_password->clear();
    menu->show();
    this->close();
}

void Registration::on_Back_clicked()
{
    this->close();
    emit firstWindow();
}
void Registration::Reg(){
    QString log=ui->Enter_login->text();
    QString pas=ui->Enter_password->text();
    std::string l=log.toStdString();
    std::string p=pas.toStdString();
    input_file(l,p);
}
