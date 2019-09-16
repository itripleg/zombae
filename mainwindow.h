#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QDebug>
#include <QPainter>
#include <clockwidget.h>
#include <QFontDatabase>
#include <outlet.h>
#include <outletwindow.h>


namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    Ui::MainWindow *ui;
    ClockWidget* pclock1 = new ClockWidget;
    ClockWidget* pclock2 = new ClockWidget;
    ClockWidget* pclock3 = new ClockWidget;
    ClockWidget* pclock4 = new ClockWidget;

    ClockWidget *engineRight = new ClockWidget;
    ClockWidget *engineLeft = new ClockWidget;
    ClockWidget *whitePoop = new ClockWidget;
    ClockWidget *redPoop = new ClockWidget;

    //creates outlet window
    OutletWindow *outWindow = new OutletWindow();
private:
protected:
private slots:

    void on_whitePoopHour_valueChanged(int arg1);
    void on_whitePoopMinute_valueChanged(int arg1);
    void on_erRightHour_valueChanged(int arg1);
    void on_erRightMinute_valueChanged(int arg1);
    void on_redPoopHour_valueChanged(int arg1);
    void on_redPoopMinute_valueChanged(int arg1);
    void on_erLeftHour_valueChanged(int arg1);
    void on_erLeftMinute_valueChanged(int arg1);
    void on_titleBtn_clicked();
};

#endif // MAINWINDOW_H
