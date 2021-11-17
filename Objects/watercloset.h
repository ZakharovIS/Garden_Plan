#ifndef WATERCLOSET_H
#define WATERCLOSET_H

#include <QObject>
#include <QGraphicsObject>
#include <QPainter>
#include "gardenobjects.h"
#include "restrictedarea.h"
#include "Constants.h"

class Watercloset: public GardenObjects
{
    Q_OBJECT
    uint m_width;
    uint m_height;
    RestrictedArea* m_waterclosetArea8;
    QVector<RestrictedArea*> restricted_areas;
public:
    explicit Watercloset();
    QVector<RestrictedArea*> getRestrictedAreas();

    // QGraphicsItem interface
public:
    virtual QRectF boundingRect() const;
    virtual void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget);
    enum { Type = WATERCLOSET_TYPE };
    int type() const override{return Type;}

    // GardenObjects interface
public:
    virtual QPixmap getPixmap();
    virtual QPoint getPoint();
};

#endif // WATERCLOSET_H
