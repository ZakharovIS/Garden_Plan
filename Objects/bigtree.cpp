#include "bigtree.h"

BigTree::BigTree()
{
    m_radius = 2;
    m_rect = QRect(0,0,m_radius*c_cellSize*2,m_radius*c_cellSize*2);
    m_center_Point = QPoint(m_radius*c_cellSize,m_radius*c_cellSize);
    pixmap.load("tree.png");
    pixmap = pixmap.scaled(m_rect.width(),m_rect.height());
}


QPixmap BigTree::getPixmap()
{
    return pixmap;
}


QPoint BigTree::getPoint()
{
    return m_center_Point;
}



QRectF BigTree::boundingRect() const
{
    return m_rect;
}

void BigTree::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget)
{

    painter->drawPixmap(m_rect,pixmap);
}

QPainterPath BigTree::shape() const
{
    QPainterPath path;
    path.addEllipse(m_rect);
    return path;
}

