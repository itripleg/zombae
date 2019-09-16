#include "outletwindow.h"
#include "ui_outletwindow.h"
#include "ui_mainwindow.h"
#include <QMediaPlayer>
#include <QFontDatabase>
#include <QFont>

OutletWindow::OutletWindow(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::OutletWindow)
{
    ui->setupUi(this);
    this->setWindowTitle("Outlets and Elementals");

    //custom walking dead font
    int id2 = QFontDatabase::addApplicationFont(":/fonts/DeadFontWalking-X2Ka.ttf");
    QString family2= QFontDatabase::applicationFontFamilies(id2).at(0);
    QFont zombie2(family2);
    zombie2.setPointSize(20);
    this->setFont(zombie2);


    ui->gasOutletLabel->setPixmap(QPixmap(":/pics/outlet.jpg"));
    ui->waterOutletLabel->setPixmap(QPixmap(":/pics/outlet.jpg"));
    ui->electricOutletLabel->setPixmap(QPixmap(":/pics/outlet.jpg"));
    ui->fireOutletLabel->setPixmap(QPixmap(":/pics/outlet.jpg"));
}

OutletWindow::~OutletWindow()
{
    delete ui;
}

void OutletWindow::on_pushButton_clicked()
{
    this->hide();
    pmain->showMaximized();
}

void OutletWindow::on_pushButton_3_clicked()
{
    QMediaPlayer *player = new QMediaPlayer;
    player->setMedia(QUrl::fromLocalFile("C://Users//JB//Desktop//Code//zoms//sounds//drowning.mp3"));
    player->setVolume(100);
    player->play();
}

void OutletWindow::on_listWidget_itemEntered(QListWidgetItem *item)
{

}


void OutletWindow::on_listWidget_itemActivated(QListWidgetItem *item)
{
//    ui->label->setText(item->text());
    if(item->text() == "3rd Class Deck"){
        ui->gas_location->setPixmap(QPixmap(":/pics/outlet-berths.jfif"));
    };
    if(item->text() == "Aft Decks"){
        ui->gas_location->setPixmap(QPixmap(":/pics/outlet-aft.jfif"));
    };
    if(item->text() == "First Class Lounge *Bowie*"){
        ui->gas_location->setPixmap(QPixmap(":/pics/outlet-1stclass.jfif"));
    };
    if(item->text() == "Grand Staircase"){
        ui->gas_location->setPixmap(QPixmap(":/pics/outlet-grand.jfif"));
    };
    if(item->text() == "Dining Hall *White Room*"){
        ui->gas_location->setPixmap(QPixmap(":/pics/outlet-dining.JPG"));
    };
    if(item->text() == "State Rooms *Left Left*"){
        ui->gas_location->setPixmap(QPixmap(":/pics/outlet-state.jfif"));

    };
}

void OutletWindow::on_listWidget_2_itemActivated(QListWidgetItem *item)
{
    ui->water_location->setText(item->text());
    if(item->text() == "3rd Class Deck"){
        ui->water_location->setPixmap(QPixmap(":/pics/outlet-berths.jfif"));
    };
    if(item->text() == "Aft Decks"){
        ui->water_location->setPixmap(QPixmap(":/pics/outlet-aft.jfif"));
    };
    if(item->text() == "First Class Lounge *Bowie*"){
        ui->water_location->setPixmap(QPixmap(":/pics/outlet-1stclass.jfif"));
    };
    if(item->text() == "Grand Staircase"){
        ui->water_location->setPixmap(QPixmap(":/pics/outlet-grand.jfif"));
    };
    if(item->text() == "Dining Hall *White Room*"){
        ui->water_location->setPixmap(QPixmap(":/pics/outlet-dining.JPG"));
    };
    if(item->text() == "State Rooms *Left Left*"){
        ui->water_location->setPixmap(QPixmap(":/pics/outlet-state.jfif"));

    };

}

void OutletWindow::on_listWidget_3_itemActivated(QListWidgetItem *item)
{
    ui->electric_location->setText(item->text());
    if(item->text() == "3rd Class Deck"){
        ui->electric_location->setPixmap(QPixmap(":/pics/outlet-berths.jfif"));
    };
    if(item->text() == "Aft Decks"){
        ui->electric_location->setPixmap(QPixmap(":/pics/outlet-aft.jfif"));
    };
    if(item->text() == "First Class Lounge *Bowie*"){
        ui->electric_location->setPixmap(QPixmap(":/pics/outlet-1stclass.jfif"));
    };
    if(item->text() == "Grand Staircase"){
        ui->electric_location->setPixmap(QPixmap(":/pics/outlet-grand.jfif"));
    };
    if(item->text() == "Dining Hall *White Room*"){
        ui->electric_location->setPixmap(QPixmap(":/pics/outlet-dining.JPG"));
    };
    if(item->text() == "State Rooms *Left Left*"){
        ui->electric_location->setPixmap(QPixmap(":/pics/outlet-state.jfif"));

    };
}

void OutletWindow::on_listWidget_4_itemActivated(QListWidgetItem *item)
{
    ui->fire_location->setText(item->text());
    if(item->text() == "3rd Class Deck"){
        ui->fire_location->setPixmap(QPixmap(":/pics/outlet-berths.jfif"));
    };
    if(item->text() == "Aft Decks"){
        ui->fire_location->setPixmap(QPixmap(":/pics/outlet-aft.jfif"));
    };
    if(item->text() == "First Class Lounge *Bowie*"){
        ui->fire_location->setPixmap(QPixmap(":/pics/outlet-1stclass.jfif"));
    };
    if(item->text() == "Grand Staircase"){
        ui->fire_location->setPixmap(QPixmap(":/pics/outlet-grand.jfif"));
    };
    if(item->text() == "Dining Hall *White Room*"){
        ui->fire_location->setPixmap(QPixmap(":/pics/outlet-dining.JPG"));
    };
    if(item->text() == "State Rooms *Left Left*"){
        ui->fire_location->setPixmap(QPixmap(":/pics/outlet-state.jfif"));

    };

}
