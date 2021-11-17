#include "glasshouse.h"

Glasshouse::Glasshouse()
{
    m_width = 4 * c_cellSize;
    m_height = 2 * c_cellSize;
    m_rect = QRect(0,0,m_width,m_height);
    m_center_Point = QPoint(m_rect.center());
    pixmap.load("glasshouse.png");
    pixmap = pixmap.scaled(m_rect.width(),m_rect.height());
}


QRectF Glasshouse::boundingRect() const
{
    return m_rect;
}

void Glasshouse::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget)
{
    painter->drawPixmap(m_rect,pixmap);
}


QPixmap Glasshouse::getPixmap()
{
    return pixmap;
}

QPoint Glasshouse::getPoint()
{
    return m_center_Point;
}
