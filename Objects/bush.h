#ifndef BUSH_H
#define BUSH_H

#include <QObject>
#include <QGraphicsObject>
#include <QPainter>
#include <QDebug>
#include "gardenobjects.h"
#include "Constants.h"
#include "gardenflags.h"

class Bush: public GardenObjects
{
    Q_OBJECT
    int m_radius;

public:
    explicit Bush();
    virtual QPixmap getPixmap();
    virtual QPoint getPoint();

    // QGraphicsItem interface
public:
    virtual QRectF boundingRect() const;
    virtual QPainterPath shape() const;
    virtual void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget);
    enum { Type = BUSH_TYPE };
    int type() const override{return Type;}
};

#endif // BUSH_H
