#ifndef COMPOST_H
#define COMPOST_H

#include <QPainter>
#include <QDebug>
#include "gardenobjects.h"
#include "Constants.h"
#include "gardenflags.h"
#include "restrictedarea.h"

class Compost: public GardenObjects
{
    Q_OBJECT
    uint m_width;
    uint m_height;
    RestrictedArea* m_compostArea8;
    QVector<RestrictedArea*> restricted_areas;

public:
    Compost();
    QVector<RestrictedArea*> getRestrictedAreas();

    // QGraphicsItem interface
public:
    virtual QRectF boundingRect() const;
    virtual void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget);
    enum { Type = COMPOST_TYPE };
    int type() const override{return Type;}

    // GardenObjects interface
public:
    virtual QPixmap getPixmap();
    virtual QPoint getPoint();
};

#endif // COMPOST_H
