#ifndef VIEW_H
#define VIEW_H

#include <QGraphicsView>
#include <QWheelEvent>
#include <QKeyEvent>
#include "scene.h"

class View : public QGraphicsView
{
  Q_OBJECT
public:
  explicit View(QWidget *parent = 0);

protected Q_SLOTS:
  void wheelEvent(QWheelEvent *event);

  void keyPressEvent(QKeyEvent *event);
};

#endif // VIEW_H
