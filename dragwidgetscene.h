#ifndef DRAGWIDGETSCENE_H
#define DRAGWIDGETSCENE_H

#include <QWidget>
#include <QApplication>
#include <QDrag>
#include <QMimeData>
#include <QGraphicsScene>
#include <QGraphicsSceneMouseEvent>
#include "Objects/bigtree.h"
#include "Objects/house.h"
#include "Objects/midsizetree.h"
#include "Objects/bush.h"
#include "Objects/sauna.h"
#include "Objects/shed.h"
#include "Objects/glasshouse.h"
#include "Objects/henhouse.h"
#include "Objects/watercloset.h"
#include "Objects/compost.h"
#include "Objects/well.h"
#include <QDebug>
#include "Constants.h"

class DragWidgetScene : public QGraphicsScene
{
    Q_OBJECT
    QRect m_scene_size;
    QPointF m_dragStart;
    QGraphicsItem* currentItem;
public:
    explicit DragWidgetScene(QWidget *parent = nullptr);

signals:


    // QGraphicsScene interface
protected:
    virtual void mousePressEvent(QGraphicsSceneMouseEvent *event);
    virtual void mouseMoveEvent(QGraphicsSceneMouseEvent *event);
    virtual void mouseReleaseEvent(QGraphicsSceneMouseEvent *event);
    virtual void drawBackground(QPainter *painter, const QRectF &rect);
};

#endif // DRAGWIDGETSCENE_H
