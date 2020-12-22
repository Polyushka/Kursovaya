#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <authorization.h>
#include <menu.h>
#include <registration.h>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:

    void on_Authorization_clicked();

    void on_Registration_clicked();

private:
    Ui::MainWindow *ui;
    Authorization *Login;
    Registration *registr;

};

#endif // MAINWINDOW_H
