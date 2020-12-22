#include "map.h"
#include "ui_map.h"
Map::Map(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Map)
{
    ui->setupUi(this);
    ui->label->setStyleSheet("border-image: url(E:/Kursovaya/Kursovaya/map1.jpg);");

}

Map::~Map()
{
    delete ui;
}

void Map::on_Back_clicked()
{
    this->close();
    emit mapW();
}
//void Map::Output(){
    //ui->label->
//}

