#ifndef FENCE_H
#define FENCE_H

#include <QGraphicsItem>
#include <QPen>
#include <QPainter>
#include "Constants.h"
#include "restrictedarea.h"

class Fence: public QGraphicsLineItem
{
    QLine m_line;
    QPen pen;
    QRect m_rect2;
    RestrictedArea* m_restrictedArea2;
    QVector<RestrictedArea*> restricted_areas;
public:
    Fence();
    Fence(QLine line, Direction direction);
    QVector<RestrictedArea *> getRestrictedAreas();

    // QGraphicsItem interface
public:
    virtual QRectF boundingRect() const;
    virtual void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget);
    enum { Type = FENCE_TYPE };
    int type() const override{return Type;}
};

#endif // FENCE_H
