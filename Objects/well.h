#ifndef WELL_H
#define WELL_H

#include <QObject>
#include <QGraphicsObject>
#include <QPainter>
#include "gardenobjects.h"
#include "restrictedarea.h"
#include "Constants.h"

class Well : public GardenObjects
{
    Q_OBJECT
    int m_radius;
    RestrictedArea* m_wellArea8;
    QVector<RestrictedArea*> restricted_areas;
public:
    explicit Well();
    QVector<RestrictedArea*> getRestrictedAreas();
    // QGraphicsItem interface
public:
    virtual QRectF boundingRect() const;
    virtual QPainterPath shape() const;
    virtual void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget);
    enum { Type = WELL_TYPE };
    int type() const override{return Type;}

    // GardenObjects interface
public:
    virtual QPixmap getPixmap();
    virtual QPoint getPoint();
};

#endif // WELL_H
