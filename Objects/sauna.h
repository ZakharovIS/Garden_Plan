#ifndef SAUNA_H
#define SAUNA_H

#include <QPainter>
#include <QDebug>
#include "gardenobjects.h"
#include "Constants.h"
#include "gardenflags.h"
#include "restrictedarea.h"

class Sauna : public GardenObjects
{
    Q_OBJECT

    uint m_width;
    uint m_height;
    RestrictedArea* m_saunaArea8;
    QVector<RestrictedArea*> restricted_areas;
public:
    explicit Sauna();
    QPixmap getPixmap();
    QPoint getPoint();
    QVector<RestrictedArea*> getRestrictedAreas();

    // QGraphicsItem interface
public:
    virtual QRectF boundingRect() const;
    virtual void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget);
    enum { Type = SAUNA_TYPE };
    int type() const override{return Type;}
};

#endif // SAUNA_H
