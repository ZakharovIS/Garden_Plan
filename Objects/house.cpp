#include "house.h"

House::House()
{
    m_width = 8 * c_cellSize;
    m_height = 6 * c_cellSize;
    m_rect = QRect(0,0,m_width,m_height);
    m_center_Point = QPoint(m_rect.center());
    pixmap.load("roof.png");
    pixmap = pixmap.scaled(m_rect.width(),m_rect.height());
    QRect rA = QRect(m_rect.x()-8*c_cellSize,m_rect.y()-8*c_cellSize,m_width+8*2*c_cellSize,m_height+8*2*c_cellSize);
    m_houseArea8 = new RestrictedArea(rA,GardenFlags::MyHouse8,8);
}

QPixmap House::getPixmap()
{
    return pixmap;
}

QPoint House::getPoint()
{
    return m_center_Point;
}

QVector<RestrictedArea *> House::getRestrictedAreas()
{
    restricted_areas.push_back(m_houseArea8);
    return restricted_areas;
}

QRectF House::boundingRect() const
{
    return m_rect;
}

void House::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget)
{
    painter->drawPixmap(m_rect,pixmap);
}

