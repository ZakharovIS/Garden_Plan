#include "henhouse.h"

Henhouse::Henhouse()
{
    m_width = 3 * c_cellSize;
    m_height = 3 * c_cellSize;
    m_rect = QRect(0,0,m_width,m_height);
    m_center_Point = QPoint(m_rect.center());
    pixmap.load("henhouse.png");
    pixmap = pixmap.scaled(m_rect.width(),m_rect.height());
}


QRectF Henhouse::boundingRect() const
{
    return m_rect;
}

void Henhouse::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget)
{
    painter->drawPixmap(m_rect,pixmap);
}

QPixmap Henhouse::getPixmap()
{
    return pixmap;
}

QPoint Henhouse::getPoint()
{
    return m_center_Point;
}
