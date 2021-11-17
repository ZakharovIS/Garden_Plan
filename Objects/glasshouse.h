#ifndef GLASSHOUSE_H
#define GLASSHOUSE_H

#include <QObject>
#include <QGraphicsObject>
#include <QPainter>
#include "gardenobjects.h"
#include "Constants.h"

class Glasshouse : public GardenObjects
{
    Q_OBJECT

    uint m_width;
    uint m_height;
public:
    explicit Glasshouse();

    // QGraphicsItem interface
public:
    virtual QRectF boundingRect() const;
    virtual void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget);
    enum { Type = GLASSHOUSE_TYPE };
    int type() const override{return Type;}

    // GardenObjects interface
public:
    virtual QPixmap getPixmap();
    virtual QPoint getPoint();
};

#endif // GLASSHOUSE_H
