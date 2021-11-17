#ifndef BIGTREE_H
#define BIGTREE_H

#include <QPainter>
#include <QDebug>
#include "gardenobjects.h"
#include "Constants.h"
#include "gardenflags.h"

class BigTree : public GardenObjects
{
    Q_OBJECT
    int m_radius;

public:
    explicit BigTree();
    QPixmap getPixmap();
    QPoint getPoint();

    // QGraphicsItem interface
public:
    virtual QRectF boundingRect() const;
    virtual void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget);
    enum { Type = BIG_TREE_TYPE };
    int type() const override{return Type;}

    // QGraphicsItem interface
public:
    virtual QPainterPath shape() const;

};

#endif // BIGTREE_H
