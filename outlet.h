#ifndef OUTLET_H
#define OUTLET_H

#include <QWidget>

class Outlet : public QWidget
{
    Q_OBJECT
public:
    explicit Outlet(QColor color, QWidget *parent = nullptr);

signals:

public slots:

private:
    void paintEvent(QPaintEvent *event);
    QColor color;
};

#endif // OUTLET_H
