#include "game_capital.h"
#include "ui_game_capital.h"
#include "text_file.h"
#include<thread>

Game_capital::Game_capital(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Game_capital)
{
    ui->setupUi(this);
    game_mode();
}

Game_capital::~Game_capital()
{
    delete ui;
}

void Game_capital::on_Back_clicked()
{
    this->close();
    emit menuWindow();
}
void Game_capital::game_mode(){
    number=0;
    w=0;
    r=0;
Countries=all_inf_();
r_a=game(Countries);
}
int Game_capital::game(std::vector<Country>Countries){
    int random1,random2,random3,random4,pos;
    QString answ;
        random1=std::rand()%Countries.size();
        do{
        random2=std::rand()%Countries.size();
        }while(random1==random2);
        do{
        random3=std::rand()%Countries.size();
        }while(random3==random1||random3==random2);
        do{
        random4=std::rand()%Countries.size();
        }while(random4==random1||random4==random2||random4==random3);
        ui->country->setText(Countries[random1].country_name);
        pos=std::rand()%4+1;
        switch(pos){
        case 1: {
            ui->capital1->setText(Countries[random1].capital_name);
            ui->capital2->setText(Countries[random2].capital_name);
            ui->capital3->setText(Countries[random3].capital_name);
            ui->capital4->setText(Countries[random4].capital_name);
            break;
        }
        case 2: {
            ui->capital2->setText(Countries[random1].capital_name);
            ui->capital1->setText(Countries[random2].capital_name);
            ui->capital3->setText(Countries[random3].capital_name);
            ui->capital4->setText(Countries[random4].capital_name);
            break;
        }
        case 3: {
            ui->capital3->setText(Countries[random1].capital_name);
            ui->capital2->setText(Countries[random2].capital_name);
            ui->capital1->setText(Countries[random3].capital_name);
            ui->capital4->setText(Countries[random4].capital_name);
            break;
        }
        case 4: {
            ui->capital4->setText(Countries[random1].capital_name);
            ui->capital2->setText(Countries[random2].capital_name);
            ui->capital3->setText(Countries[random3].capital_name);
            ui->capital1->setText(Countries[random4].capital_name);
            break;
        }
            }
    return random1;}

void Game_capital::on_capital1_clicked()
{if (number!=10)
    {if(Countries[r_a].capital_name==ui->capital1->text())
    {r++;number++;r_a=game(Countries);}
    else {w++;number++;
        QMessageBox msg_wrong;
        msg_wrong.setText("Неправильно!");
        msg_wrong.exec();}
    r_a=game(Countries);}
    if(number==10)
    {QString w_a=QString::number(w);
        QString r_a=QString::number(r);
        QMessageBox msgBox;
    msgBox.setText("Результаты!");
    msgBox.setInformativeText("Правильных ответов - "+r_a+"\nНеправильных ответов - "+w_a);
    msgBox.setStandardButtons(QMessageBox::Retry | QMessageBox::Close);
    msgBox.setDefaultButton(QMessageBox::Retry);
    int res = msgBox.exec();
    if (res == QMessageBox::Retry) //нажата кнопка Заново
           game_mode();
    else ui->Back->click();}
}

void Game_capital::on_capital2_clicked()
{
    if (number!=10)
        {if(Countries[r_a].capital_name==ui->capital2->text())
        {r++;number++;r_a=game(Countries);}
        else {w++;number++;
            QMessageBox msg_wrong;
            msg_wrong.setText("Неправильно!");
            msg_wrong.exec();}
          r_a=game(Countries);}
    if(number==10)
    {QString w_a=QString::number(w);
        QString r_a=QString::number(r);
        QMessageBox msgBox;
    msgBox.setText("Результаты!");
    msgBox.setInformativeText("Правильных ответов - "+r_a+"\nНеправильных ответов - "+w_a);
    msgBox.setStandardButtons(QMessageBox::Retry | QMessageBox::Close);
    msgBox.setDefaultButton(QMessageBox::Retry);
    int res = msgBox.exec();
    if (res == QMessageBox::Retry) //нажата кнопка Заново
           game_mode();
    else ui->Back->click();}
}

void Game_capital::on_capital3_clicked()
{
    if (number!=10)
        {if(Countries[r_a].capital_name==ui->capital3->text())
        {r++;number++;r_a=game(Countries);}
        else {w++;number++;
            QMessageBox msg_wrong;
            msg_wrong.setText("Неправильно!");
            msg_wrong.exec();}
        r_a=game(Countries);}
    if(number==10)
    {QString w_a=QString::number(w);
        QString r_a=QString::number(r);
        QMessageBox msgBox;
    msgBox.setText("Результаты!");
    msgBox.setInformativeText("Правильных ответов - "+r_a+"\nНеправильных ответов - "+w_a);
    msgBox.setStandardButtons(QMessageBox::Retry | QMessageBox::Close);
    msgBox.setDefaultButton(QMessageBox::Retry);
    int res = msgBox.exec();
    if (res == QMessageBox::Retry) //нажата кнопка Заново
           game_mode();
    else ui->Back->click();}
}

void Game_capital::on_capital4_clicked()
{
    if (number!=10)
        {if(Countries[r_a].capital_name==ui->capital4->text())
        {r++;number++;r_a=game(Countries);}
        else {w++;number++;
            QMessageBox msg_wrong;
            msg_wrong.setText("Неправильно!");
            msg_wrong.exec();}
       r_a=game(Countries);}
    if(number==10)
    {QString w_a=QString::number(w);
        QString r_a=QString::number(r);
        QMessageBox msgBox;
    msgBox.setText("Результаты!");
    msgBox.setInformativeText("Правильных ответов - "+r_a+"\nНеправильных ответов - "+w_a);
    msgBox.setStandardButtons(QMessageBox::Retry | QMessageBox::Close);
    msgBox.setDefaultButton(QMessageBox::Retry);
    int res = msgBox.exec();
    if (res == QMessageBox::Retry) //нажата кнопка Заново
           game_mode();
    else ui->Back->click();}
}
