#pragma once
#ifndef STATISTICS_H
#define STATISTICS_H
#include <QWidget>
#include <User.h>

namespace Ui {
class Statistics;
}

class Statistics : public QWidget
{
    Q_OBJECT

public:
    explicit Statistics(QWidget *parent = 0);
    void output_statistics();
    Statistics_ stat_user();
    ~Statistics();
signals:
void g_login();
void statisticsW();
private slots:
void on_Back_clicked();

private:
    Ui::Statistics *ui;

};
#endif // STATISTICS_H
