#include "compost.h"

Compost::Compost()
{
    m_width = 2 * c_cellSize;
    m_height = 2 * c_cellSize;
    m_rect = QRect(0,0,m_width,m_height);
    m_center_Point = QPoint(m_rect.center());
    pixmap.load("compost.png");
    pixmap = pixmap.scaled(m_rect.width(),m_rect.height());
    QRect rA = QRect(m_rect.x()-8*c_cellSize,m_rect.y()-8*c_cellSize,m_width+8*2*c_cellSize,m_height+8*2*c_cellSize);
    m_compostArea8 = new RestrictedArea(rA,GardenFlags::WaterCloset8,8);
}

QVector<RestrictedArea *> Compost::getRestrictedAreas()
{
    restricted_areas.push_back(m_compostArea8);
    return restricted_areas;
}


QRectF Compost::boundingRect() const
{
    return m_rect;
}

void Compost::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget)
{
    painter->drawPixmap(m_rect,pixmap);
}

QPixmap Compost::getPixmap()
{
    return pixmap;
}

QPoint Compost::getPoint()
{
    return m_center_Point;
}
