#ifndef SHED_H
#define SHED_H

#include <QObject>
#include <QGraphicsObject>
#include <QPainter>
#include "gardenobjects.h"
#include "Constants.h"


class Shed : public GardenObjects
{
    Q_OBJECT

    uint m_width;
    uint m_height;

public:
    explicit Shed();


    // QGraphicsItem interface
public:
    virtual QRectF boundingRect() const;
    virtual void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget);
    enum { Type = SHED_TYPE };
    int type() const override{return Type;}

    // GardenObjects interface
public:
    virtual QPixmap getPixmap();
    virtual QPoint getPoint();
};

#endif // SHED_H
