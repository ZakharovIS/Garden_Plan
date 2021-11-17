#include "watercloset.h"

Watercloset::Watercloset()
{
    m_width = 2 * c_cellSize;
    m_height = 2 * c_cellSize;
    m_rect = QRect(0,0,m_width,m_height);
    m_center_Point = QPoint(m_rect.center());
    pixmap.load("watercloset.png");
    pixmap = pixmap.scaled(m_rect.width(),m_rect.height());
    QRect rA = QRect(m_rect.x()-8*c_cellSize,m_rect.y()-8*c_cellSize,m_width+8*2*c_cellSize,m_height+8*2*c_cellSize);
    m_waterclosetArea8 = new RestrictedArea(rA,GardenFlags::WaterCloset8,8);
}

QVector<RestrictedArea *> Watercloset::getRestrictedAreas()
{
    restricted_areas.push_back(m_waterclosetArea8);
    return restricted_areas;
}


QRectF Watercloset::boundingRect() const
{
    return m_rect;
}

void Watercloset::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget)
{
    painter->drawPixmap(m_rect,pixmap);
}


QPixmap Watercloset::getPixmap()
{
    return pixmap;
}

QPoint Watercloset::getPoint()
{
    return m_center_Point;
}
