#ifndef HOUSE_H
#define HOUSE_H

#include <QPainter>
#include <QDebug>
#include <QFile>
#include "gardenobjects.h"
#include "Constants.h"
#include "gardenflags.h"
#include "restrictedarea.h"

class House : public GardenObjects
{
    Q_OBJECT
    uint m_width;
    uint m_height;
    RestrictedArea* m_houseArea8;
    QVector<RestrictedArea*> restricted_areas;
public:
    explicit House();
    QPixmap getPixmap();
    QPoint getPoint();
    QVector<RestrictedArea*> getRestrictedAreas();

public:
    virtual QRectF boundingRect() const;
    virtual void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget);
    enum { Type = HOUSE_TYPE };
    int type() const override{return Type;}
};

#endif // HOUSE_H
