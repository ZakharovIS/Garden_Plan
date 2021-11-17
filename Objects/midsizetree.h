#ifndef MIDSIZETREE_H
#define MIDSIZETREE_H

#include <QPainter>
#include <QDebug>
#include "gardenobjects.h"
#include "Constants.h"
#include "gardenflags.h"
class MidsizeTree : public GardenObjects
{
    Q_OBJECT

    double m_radius;

public:
    explicit MidsizeTree();
    QPixmap getPixmap();
    QPoint getPoint();


    // QGraphicsItem interface
public:
    virtual QRectF boundingRect() const;
    virtual QPainterPath shape() const;
    virtual void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget);
    enum { Type = MIDSIZE_TREE_TYPE };
    int type() const override{return Type;}
};

#endif // MIDSIZETREE_H
