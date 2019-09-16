#ifndef CLOCKWIDGET_H
#define CLOCKWIDGET_H

#include <QWidget>


class ClockWidget : public QWidget
{
    Q_OBJECT
public:
    explicit  ClockWidget(QWidget *parent = 0);
    int hour = 12;
    int minute = 12;

signals:

public slots:

protected:
    void paintEvent(QPaintEvent *event);

};

#endif // CLOCKWIDGET_H
