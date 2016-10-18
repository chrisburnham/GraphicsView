#include "my_pixmap.h"

My_pixmap::My_pixmap(QGraphicsItem *parent) :
  QObject(),
  QGraphicsPixmapItem(parent)
{
  QPixmap pixmap(":/images/chart.png");
  setPixmap(pixmap);
  setTransformationMode(Qt::SmoothTransformation);
}
