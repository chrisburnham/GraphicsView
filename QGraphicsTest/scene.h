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
    
    // Things I've tried that haven't helped
    //setItemIndexMethod(QGraphicsScene::BspTreeIndex);
    //setItemIndexMethod(QGraphicsScene::NoIndex);
  }
};

#endif // SCENE_H
