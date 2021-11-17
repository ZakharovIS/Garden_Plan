#include "bush.h"

Bush::Bush()
{
    m_radius = 2;
    m_rect = QRect(0,0,m_radius*c_cellSize*2,m_radius*c_cellSize*2);
    m_center_Point = QPoint(m_radius*c_cellSize,m_radius*c_cellSize);
    pixmap.load("Bush.png");
    pixmap = pixmap.scaled(m_rect.width(),m_rect.height());
}

QPixmap Bush::getPixmap()
{
    return pixmap;
}

QPoint Bush::getPoint()
{
    return m_center_Point;
}


QRectF Bush::boundingRect() const
{
    return m_rect;
}

QPainterPath Bush::shape() const
{
    QPainterPath path;
    path.addEllipse(m_rect);
    return path;
}

void Bush::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget)
{
    painter->drawPixmap(m_rect,pixmap);
}

