#ifndef NEIGHBOURBORDER_H
#define NEIGHBOURBORDER_H

#include <QGraphicsItem>
#include <QPen>
#include <QPainter>
#include "Constants.h"
#include "restrictedarea.h"

class NeighbourBorder: public QGraphicsLineItem
{
    QLine m_line;
    QPen pen;
    QRect m_rect1;
    RestrictedArea* m_restrictedArea1;
    QRect m_rect2;
    RestrictedArea* m_restrictedArea2;
    QRect m_rect3;
    RestrictedArea* m_restrictedArea3;
    QRect m_rect4;
    RestrictedArea* m_restrictedArea4;

    QVector<RestrictedArea*> restricted_areas;
public:
    NeighbourBorder();
    NeighbourBorder(QLine line, Direction direction);
    QVector<RestrictedArea*> getRestrictedAreas();

    // QGraphicsItem interface
public:
    virtual void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget);
    virtual QRectF boundingRect() const;
    enum { Type = NEIGHBOUR_BORDER_TYPE };
    int type() const override{return Type;}



};

#endif // NEIGHBOURBORDER_H
