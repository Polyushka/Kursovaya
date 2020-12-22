#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    Login = new Authorization();
    connect(Login, &Authorization::firstWindow, this, &MainWindow::show);
    registr=new Registration();
    connect(registr,&Registration::firstWindow,this,&MainWindow::show);

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_Authorization_clicked()
{
    Login->show();  // Показываем второе окно
    this->close();    // Закрываем основное окно
}


void MainWindow::on_Registration_clicked()
{
    registr->show();
    this->close();
}
