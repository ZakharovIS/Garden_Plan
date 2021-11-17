#include "well.h"

Well::Well()
{
    m_radius = 1;
    m_rect = QRect(0,0,m_radius*c_cellSize*2,m_radius*c_cellSize*2);
    m_center_Point = QPoint(m_radius*c_cellSize,m_radius*c_cellSize);
    pixmap.load("well.png");
    pixmap = pixmap.scaled(m_rect.width(),m_rect.height());
    QRect rA = QRect(m_rect.x()-8*c_cellSize,m_rect.y()-8*c_cellSize,m_radius*2*c_cellSize+8*2*c_cellSize,m_radius*2*c_cellSize+8*2*c_cellSize);
    m_wellArea8 = new RestrictedArea(rA,GardenFlags::Well8);
}

QVector<RestrictedArea *> Well::getRestrictedAreas()
{
    restricted_areas.push_back(m_wellArea8);
    return restricted_areas;
}


QRectF Well::boundingRect() const
{
    return m_rect;
}

QPainterPath Well::shape() const
{
    QPainterPath path;
    path.addEllipse(m_rect);
    return path;
}

void Well::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget)
{
    painter->drawPixmap(m_rect,pixmap);
}

QPixmap Well::getPixmap()
{
    return pixmap;
}

QPoint Well::getPoint()
{
    return m_center_Point;
}
