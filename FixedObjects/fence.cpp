#include "fence.h"

Fence::Fence()
{

}

Fence::Fence(QLine line, Direction direction)
{
    m_line = line;
    if(direction == Direction::LEFT)
    {
        m_rect2 = QRect(m_line.x1()-2*c_cellSize,m_line.y1(),2*c_cellSize,m_line.y2()-m_line.y1());
    }
    if(direction == Direction::TOP)
    {
        m_rect2 = QRect(m_line.x1(),m_line.y1()-2*c_cellSize,m_line.x2()-m_line.x1(),2*c_cellSize);
    }
    if(direction == Direction::RIGHT)
    {
        m_rect2 = QRect(m_line.x1(),m_line.y1(),2*c_cellSize,m_line.y2()-m_line.y1());
    }
    if(direction == Direction::BOTTOM)
    {
        m_rect2 = QRect(m_line.x1(),m_line.y1(),m_line.x2()-m_line.x1(),2*c_cellSize);
    }

    m_restrictedArea2 = new RestrictedArea(m_rect2,GardenFlags::Fence2);
}

QVector<RestrictedArea *> Fence::getRestrictedAreas()
{
    restricted_areas.push_back(m_restrictedArea2);
    return restricted_areas;
}


QRectF Fence::boundingRect() const
{
    return QRectF(QPointF(m_line.x1(),m_line.y1()),QPointF(m_line.x2(),m_line.y2()));
}

void Fence::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget)
{
    pen.setStyle(Qt::NoPen);
    painter->setPen(pen);
    painter->drawLine(m_line);
}

