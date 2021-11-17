#ifndef GARDENOBJECTS_H
#define GARDENOBJECTS_H

#include <QObject>
#include <QGraphicsObject>
#include <QPainter>


class GardenObjects: public QGraphicsObject
{
    Q_OBJECT
public:
    QPoint m_center_Point;
    QPixmap pixmap;
    QRect m_rect;
public:
    GardenObjects() {};
    virtual QPixmap getPixmap() = 0;
    virtual QPoint getPoint() = 0;
};

#endif // GARDENOBJECTS_H
