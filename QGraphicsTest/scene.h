#ifndef SCENE_H
#define SCENE_H

#include <QGraphicsScene>
#include "my_pixmap.h"

class Scene : public QGraphicsScene
{
  Q_OBJECT
public:
  explicit Scene(QObject *parent = 0) :
    QGraphicsScene(parent)
  {
    My_pixmap *pixmap = new My_pixmap();
    addItem(pixmap);
  }
};

#endif // SCENE_H
