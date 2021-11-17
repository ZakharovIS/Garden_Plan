#include "midsizetree.h"

MidsizeTree::MidsizeTree()
{
    m_radius = 1.5;
    m_rect = QRect(0,0,m_radius*c_cellSize*2,m_radius*c_cellSize*2);
    m_center_Point = QPoint(m_radius*c_cellSize,m_radius*c_cellSize);
    pixmap.load("fir.png");
    pixmap = pixmap.scaled(m_rect.width(),m_rect.height());
}



QPixmap MidsizeTree::getPixmap()
{
    return pixmap;
}

QPoint MidsizeTree::getPoint()
{
    return m_center_Point;
}


QRectF MidsizeTree::boundingRect() const
{
    return m_rect;
}

QPainterPath MidsizeTree::shape() const
{
    QPainterPath path;
    path.addEllipse(m_rect);
    return path;
}

void MidsizeTree::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget)
{
    painter->drawPixmap(m_rect,pixmap);
}


