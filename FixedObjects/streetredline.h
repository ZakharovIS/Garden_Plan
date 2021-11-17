#ifndef STREETREDLINE_H
#define STREETREDLINE_H
#include <QGraphicsItem>
#include <QPen>
#include <QPainter>
#include "Constants.h"
#include "restrictedarea.h"

class StreetRedLine: public QGraphicsLineItem
{
    QLine m_line;
    QColor m_color;
    uint m_penWidth;
    QPen pen;
    QRect m_rect5;
    RestrictedArea* m_restrictedArea5;
    QVector<RestrictedArea*> restricted_areas;


public:
    StreetRedLine();
    StreetRedLine(QLine line, Direction direction);
    QVector<RestrictedArea*> getRestrictedAreas();


    // QGraphicsItem interface
public:
    virtual void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget);
    virtual QRectF boundingRect() const;
    enum { Type = STREET_RED_LINE_TYPE };
    int type() const override{return Type;}

};

#endif // STREETREDLINE_H
