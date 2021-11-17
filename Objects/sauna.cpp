#include "sauna.h"

Sauna::Sauna()
{
    m_width = 4 * c_cellSize;
    m_height = 3 * c_cellSize;
    m_rect = QRect(0,0,m_width,m_height);
    m_center_Point = QPoint(m_rect.center());
    pixmap.load("sauna.png");
    pixmap = pixmap.scaled(m_rect.width(),m_rect.height());
    QRect rA = QRect(m_rect.x()-8*c_cellSize,m_rect.y()-8*c_cellSize,m_width+8*2*c_cellSize,m_height+8*2*c_cellSize);
    m_saunaArea8 = new RestrictedArea(rA,GardenFlags::Sauna8,8);
}

QPixmap Sauna::getPixmap()
{
    return pixmap;
}

QPoint Sauna::getPoint()
{
    return m_center_Point;
}

QVector<RestrictedArea *> Sauna::getRestrictedAreas()
{
    restricted_areas.push_back(m_saunaArea8);
    return restricted_areas;
}


QRectF Sauna::boundingRect() const
{
    return m_rect;
}

void Sauna::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget)
{
    painter->drawPixmap(m_rect,pixmap);
}

