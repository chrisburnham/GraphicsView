#include "my_pixmap.h"

My_pixmap::My_pixmap(QGraphicsItem *parent) :
  QObject(),
  QGraphicsPixmapItem(parent)
{
  QPixmap pixmap(":/images/chart.png");
  setPixmap(pixmap);
  setTransformationMode(Qt::SmoothTransformation);

  // Things I've tried that haven't helped
  //setShapeMode(QGraphicsPixmapItem::BoundingRectShape);
  //setPanelModality(QGraphicsItem::SceneModal);
}

void My_pixmap::paint(QPainter *painter,
                      const QStyleOptionGraphicsItem *option,
                      QWidget *widget)
{
  // Things I've tried that haven't helped
  //painter->setRenderHint(QPainter::NonCosmeticDefaultPen, true);
  //painter->setRenderHint(QPainter::Antialiasing, true);
  //painter->setRenderHint(QPainter::HighQualityAntialiasing, true);

  QGraphicsPixmapItem::paint(painter, option, widget);
}

