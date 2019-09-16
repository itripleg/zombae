#include "outlet.h"
#include <QPainter>

Outlet::Outlet(QColor color_arg, QWidget *parent) : QWidget(parent)
{
    color = color_arg;
}

void Outlet::paintEvent(QPaintEvent *event)
{
    QPainter painter(this);
    painter.setRenderHint(QPainter::Antialiasing);
    painter.setBrush(color);
    painter.drawEllipse(0, 0, 100,100);
//    painter.drawEllipse(0,250,width()-10,height()/2);
}
