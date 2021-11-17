#ifndef DRIVEWAYREDLINE_H
#define DRIVEWAYREDLINE_H
#include <QGraphicsItem>
#include <QPen>
#include <QPainter>
#include "Constants.h"
#include "restrictedarea.h"

class DriveWayRedLine: public QGraphicsLineItem
{
    QLine m_line;
    QColor m_color;
    uint m_penWidth;
    QPen pen;
    QRect m_rect5;
    RestrictedArea* m_restrictedArea5;
    QRect m_rect3;
    RestrictedArea* m_restrictedArea3;
    QVector<RestrictedArea*> restricted_areas;
public:
    DriveWayRedLine();
    DriveWayRedLine(QLine line, Direction direction);
    QVector<RestrictedArea*> getRestrictedAreas();

    // QGraphicsItem interface
public:
    virtual QRectF boundingRect() const;
    virtual void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget);
    enum { Type = DRIVEWAY_RED_LINE_TYPE };
    int type() const override{return Type;}
};

#endif // DRIVEWAYREDLINE_H
