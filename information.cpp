#include "information.h"
#include "ui_information.h"
#include "QMessageBox"
#include <QTableWidgetItem>

Information::Information(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Information)
{
    ui->setupUi(this);
    this->setWindowTitle("Страны");
    output_inform();
}

Information::~Information()
{
    delete ui;
}

void Information::output_inform(){
std::vector<Country>Countries=all_inf();
model=new QStandardItemModel (Countries.size(),1,this);
ui->tableView->setModel(model);
QModelIndex index;
for(int row=0,col=0;row<model->rowCount(); ++row)
{index=model->index(row,col);
   model->setData(index,Countries[row].country_name);
}
model->setHeaderData(0,Qt::Horizontal,"Страны");
           this->resize(this->sizeHint());
}
void Information::on_Back_clicked()
{
    this->close();
    emit menuWindow();
}


void Information::on_tableView_clicked(const QModelIndex &index)
{
    int number=index.row();
    output_country(number);
}

void Information::output_country(int number){
    std::vector<Country>Countries=all_inf();
    ui->country_label->setText(Countries[number].country_name);
    ui->capital_label->setText(Countries[number].capital_name);
    QString S=QString::number(Countries[number].country_area);
    ui->area_label->setText(S+" км2");
    S=QString::number(Countries[number].country_population);
    ui->population_label->setText(S+" тыс. чел.");
    ui->government_label->setText(Countries[number].type_of_government);
    ui->language_label->setText(Countries[number].languages);
    ui->continent_label->setText(Countries[number].continent);
}

