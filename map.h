#pragma once
#ifndef MAP_H
#define MAP_H
#include <QWidget>

namespace Ui {
class Map;
}

class Map : public QWidget
{
    Q_OBJECT

public:
    explicit Map(QWidget *parent = 0);
    ~Map();
    void Output();
signals:
void mapW();
private slots:

void on_Back_clicked();

private:
    Ui::Map *ui;
};

#endif // MAP_H
