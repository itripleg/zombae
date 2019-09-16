#include "mainwindow.h"
#include <QApplication>
#include <clockwidget.h>
#include <QSplashScreen>
#include <QTimer>
#include <QMediaPlayer>
#include <outlet.h>
#include "outletwindow.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    //custom zombie font
    int id = QFontDatabase::addApplicationFont(":/fonts/ZOMBIE.TTF");
    QString family = QFontDatabase::applicationFontFamilies(id).at(0);
    QFont zombie(family);
    zombie.setPointSize(20);
    QApplication::setFont(zombie);


    //sweet zombie sound
    QMediaPlayer *player = new QMediaPlayer;
    player->setMedia(QUrl::fromLocalFile("C://Users//JB//Desktop//Code//zoms//sounds//zombie_round.mp3"));
    player->setVolume(50);
    player->play();

    //sweet zombie splash screen
    QPixmap pixmap = QPixmap(":/pics/voyage_loading_screen.jpg");
    QSplashScreen splash(pixmap, Qt::WindowStaysOnTopHint);
    splash.show();
    QTimer::singleShot(3500, &splash, &QWidget::close); // keep displayed for 3.5 seconds


    MainWindow w;
    w.showMaximized();
//    OutletWindow window;
//    window.show();

    return a.exec();
}
