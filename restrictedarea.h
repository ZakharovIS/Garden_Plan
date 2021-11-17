#ifndef RESTRICTEDAREA_H
#define RESTRICTEDAREA_H
#include <QGraphicsItem>
#include <QPen>
#include <QPainter>
#include "gardenflags.h"
#include "Constants.h"

enum class displayMode{EMPTY, BORDER,FILLED};

class RestrictedArea: public QGraphicsItem
{
    QRect m_rect_Area;
    uint m_Radius;
    GardenFlags::Option m_flag;
    displayMode m_mode;






public:
    explicit RestrictedArea();
    RestrictedArea(QRect rect, GardenFlags::Option flag);
    RestrictedArea(QRect rect, GardenFlags::Option flag, int radius);
    void setMode(displayMode);
    GardenFlags::Option getFlag();
    displayMode getMode();


    // QGraphicsItem interface
public:
    virtual QRectF boundingRect() const;
    virtual QPainterPath shape() const;
    virtual void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget);
    enum { Type = RESTRICTED_AREA_TYPE };
    int type() const override{return Type;}
};

#endif // RESTRICTEDAREA_H
