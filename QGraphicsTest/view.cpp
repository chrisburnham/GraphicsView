#include "view.h"

View::View(QWidget *parent) :
  QGraphicsView(parent)
{
  setDragMode(QGraphicsView::ScrollHandDrag);

  Scene *scene = new Scene();
  setScene(scene);
  
  // Things I've tried that haven't helped
  //setViewportUpdateMode(QGraphicsView::FullViewportUpdate);
  //setViewportUpdateMode(QGraphicsView::MinimalViewportUpdate);
  //setViewportUpdateMode(QGraphicsView::SmartViewportUpdate);
  //setViewportUpdateMode(QGraphicsView::BoundingRectViewportUpdate);
  //setCacheMode(QGraphicsView::CacheBackground);
}

void View::wheelEvent(QWheelEvent *event)
{
  if(event->delta() > 0)
    scale(1.25, 1.25);
  else
    scale(0.8, 0.8);
}

void View::keyPressEvent(QKeyEvent *event)
{
  if(event->key() == Qt::Key_Left)
    rotate(1);
  else if(event->key() == Qt::Key_Right)
    rotate(-1);
}
