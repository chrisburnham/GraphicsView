#ifndef MY_PIXMAP_H
#define MY_PIXMAP_H

#include <QGraphicsPixmapItem>

class My_pixmap : public QObject, public QGraphicsPixmapItem
{
  Q_OBJECT
public:
  explicit My_pixmap(QGraphicsItem *parent = 0);
};

#endif // MY_PIXMAP_H
