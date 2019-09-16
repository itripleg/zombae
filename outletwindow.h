#ifndef OUTLETWINDOW_H
#define OUTLETWINDOW_H
#pragma once

#include <QWidget>
#include "ui_mainwindow.h"
//#include <mainwindow.h>
#include <outlet.h>
#include <QListWidgetItem>


namespace Ui {
class OutletWindow;
}

class OutletWindow : public QWidget
{
    Q_OBJECT

public:
    explicit OutletWindow(QWidget *parent = nullptr);
    ~OutletWindow();
    QMainWindow * pmain;

private slots:
    void on_pushButton_clicked();

    void on_pushButton_3_clicked();

    void on_listWidget_itemEntered(QListWidgetItem *item);

    void on_listWidget_itemActivated(QListWidgetItem *item);

    void on_listWidget_2_itemActivated(QListWidgetItem *item);

    void on_listWidget_3_itemActivated(QListWidgetItem *item);

    void on_listWidget_4_itemActivated(QListWidgetItem *item);

private:
    Ui::OutletWindow *ui;
    Outlet *gas = new Outlet(Qt::green);
    Outlet *electric = new Outlet(Qt::yellow);
    Outlet *fire = new Outlet(Qt::red);
    Outlet *water = new Outlet(Qt::blue);
};

#endif // OUTLETWINDOW_H
