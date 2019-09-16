#include "clockwidget.h"
#include <mainwindow.h>

ClockWidget::ClockWidget(QWidget *parent)
{

}

void ClockWidget::paintEvent(QPaintEvent *event)
{

    //     resize(200, 200);
         static const QPoint hourHand[3] = {
             QPoint(7, 8),
             QPoint(-7, 8),
             QPoint(0, -40)
         };
         static const QPoint minuteHand[3] = {
             QPoint(7, 8),
             QPoint(-7, 8),
             QPoint(0, -70)
         };

         QColor hourColor(127, 0, 127);
         QColor minuteColor(0, 127, 127, 191);

         int side = qMin(width(), height());

         QPainter painter(this);
         painter.setRenderHint(QPainter::Antialiasing);
         painter.translate(width() / 2, height() / 2);
         painter.scale(side / 200.0, side / 200.0);

         painter.setPen(Qt::NoPen);
         painter.setBrush(hourColor);

         painter.save();
         painter.rotate(30.0 * hour);
         painter.drawConvexPolygon(hourHand, 3);
         painter.restore();

         painter.setPen(hourColor);

         for (int i = 0; i < 12; ++i) {
             painter.drawLine(88, 0, 96, 0);
             painter.rotate(30.0);
         }

         painter.setPen(Qt::NoPen);
         painter.setBrush(minuteColor);

         painter.save();
         painter.rotate(6.0 * (minute * 5));
         painter.drawConvexPolygon(minuteHand, 3);
         painter.restore();
         painter.setPen(minuteColor);

         for (int j = 0; j < 60; ++j) {
             if ((j % 5) != 0)
                 painter.drawLine(92, 0, 96, 0);
             painter.rotate(6.0);
         }
}
