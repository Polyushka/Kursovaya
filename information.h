#ifndef INFORMATION_H
#define INFORMATION_H
#include <QWidget>
#include <QMainWindow>
#include <QStandardItemModel>
#include <text_file.h>
#include <Country.h>
#include <QLabel>

namespace Ui {
class Information;
}

class Information : public QWidget
{
    Q_OBJECT

public:
    explicit Information(QWidget *parent = 0);
    ~Information();
   std::vector<Country> all_inf();
    void  output_inform();
    void output_country(int number);
signals:
void menuWindow();
private slots:

void on_Back_clicked();

void on_tableView_clicked(const QModelIndex &index);

private:
    Ui::Information *ui;
    QStandardItemModel *model;


};
#endif // INFORMATION_H
