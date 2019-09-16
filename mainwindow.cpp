#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <outletwindow.h>
#include <outlet.h>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
//    this->setStyleSheet("background-color: gray;");

    //set symbol pix
    QPixmap upLine = QPixmap(":/pics/1_upLine_whitePoop.png");
    QPixmap downTri = QPixmap(":/pics/2_downTri_engineRight.png");
    QPixmap downLine = QPixmap(":/pics/3_downLine_RedPoop.png");
    QPixmap upTri= QPixmap(":/pics/4_upTri_engineLeft.png");
    ui->symbol1->setPixmap(upLine);
    ui->symbol2->setPixmap(downTri);
    ui->symbol3->setPixmap(downLine);
    ui->symbol4->setPixmap(upTri);

    //place clocks into a parent widget in ui
    ui->clock1widget->layout()->addWidget(pclock1);
    ui->clock2widget->layout()->addWidget(pclock2);
    ui->clock3widget->layout()->addWidget(pclock3);
    ui->clock4widget->layout()->addWidget(pclock4);

    //engine room levers
    ui->engineLeftWidget->layout()->addWidget(engineLeft);
    ui->engineRightWidget->layout()->addWidget(engineRight);
    ui->redPoopWidget->layout()->addWidget(redPoop);
    ui->whitePoopWidget->layout()->addWidget(whitePoop);

}

MainWindow::~MainWindow()
{
    delete ui;
}

//when hour is entered, change 2 clocks and update appropriate lcd number
void MainWindow::on_whitePoopHour_valueChanged(int arg1)
{
    pclock1->hour = arg1;
    pclock1->update();
    whitePoop->minute = arg1;
    whitePoop->update();
    ui->whitePoopLcd->display(arg1);
}

void MainWindow::on_whitePoopMinute_valueChanged(int arg1)
{
    pclock1->minute = arg1;
    pclock1->update();
    whitePoop->hour = arg1;
    whitePoop->update();
    ui->deck1lcd->display(arg1);
}

void MainWindow::on_erRightHour_valueChanged(int arg1)
{
    pclock2->hour = arg1;
    pclock2->update();
    engineRight->minute = arg1;
    engineRight->update();
    ui->erRightLcd->display(arg1);
}

void MainWindow::on_erRightMinute_valueChanged(int arg1)
{
    pclock2->minute = arg1;
    pclock2->update();
    engineRight->hour = arg1;
    engineRight->update();
    ui->deck2lcd->display(arg1);
}

void MainWindow::on_redPoopHour_valueChanged(int arg1)
{
    pclock3->hour = arg1;
    pclock3->update();
    redPoop->minute = arg1;
    redPoop->update();
    ui->redPoopLcd->display(arg1);
}

void MainWindow::on_redPoopMinute_valueChanged(int arg1)
{
    pclock3->minute = arg1;
    pclock3->update();
    redPoop->hour = arg1;
    redPoop->update();
    ui->deck3lcd->display(arg1);
}

void MainWindow::on_erLeftHour_valueChanged(int arg1)
{
    pclock4->hour = arg1;
    pclock4->update();
    engineLeft->minute = arg1;
    engineLeft->update();
    ui->erLeftLcd->display(arg1);
}

void MainWindow::on_erLeftMinute_valueChanged(int arg1)
{
    pclock4->minute = arg1;
    pclock4->update();
    engineLeft->hour = arg1;
    engineLeft->update();
    ui->deck4lcd->display(arg1);
}

void MainWindow::on_titleBtn_clicked()
{
    this->hide();
    outWindow->pmain = this;
    outWindow->showMaximized();
}
