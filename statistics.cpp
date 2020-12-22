#include "statistics.h"
#include "ui_statistics.h"
#include "authorization.h"
Statistics::Statistics(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Statistics)
{
    ui->setupUi(this);
    output_statistics();
}

Statistics::~Statistics()
{
    delete ui;
}


void Statistics::on_Back_clicked()
{
    this->close();
    emit statisticsW();
}
void Statistics::output_statistics(){
   std::vector<Statistics_> Users=Authorization::all_inf_users();


}
