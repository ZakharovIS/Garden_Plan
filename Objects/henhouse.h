#ifndef HENHOUSE_H
#define HENHOUSE_H

#include <QObject>
#include <QGraphicsObject>
#include <QPainter>
#include "gardenobjects.h"
#include "Constants.h"

class Henhouse: public GardenObjects
{
    Q_OBJECT

    uint m_width;
    uint m_height;
public:
    Henhouse();

    // QGraphicsItem interface
public:
    virtual QRectF boundingRect() const;
    virtual void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget);
    enum { Type = HENHOUSE_TYPE };
    int type() const override{return Type;}

    // GardenObjects interface
public:
    virtual QPixmap getPixmap();
    virtual QPoint getPoint();
};

#endif // HENHOUSE_H
