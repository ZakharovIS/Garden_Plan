#include "streetredline.h"

StreetRedLine::StreetRedLine()
{

}

StreetRedLine::StreetRedLine(QLine line, Direction direction)
{
    m_line = line;
    if(direction == Direction::LEFT)
    {
        m_rect5 = QRect(m_line.x1()-5*c_cellSize,m_line.y1(),5*c_cellSize,m_line.y2()-m_line.y1());
    }
    if(direction == Direction::TOP)
    {
        m_rect5 = QRect(m_line.x1(),m_line.y1()-5*c_cellSize,m_line.x2()-m_line.x1(),5*c_cellSize);
    }
    if(direction == Direction::RIGHT)
    {
        m_rect5 = QRect(m_line.x1(),m_line.y1(),5*c_cellSize,m_line.y2()-m_line.y1());
    }
    if(direction == Direction::BOTTOM)
    {
        m_rect5 = QRect(m_line.x1(),m_line.y1(),m_line.x2()-m_line.x1(),5*c_cellSize);
    }

    m_restrictedArea5 = new RestrictedArea(m_rect5,GardenFlags::StreetRedLine5);
}

QVector<RestrictedArea*> StreetRedLine::getRestrictedAreas()
{
    restricted_areas.push_back(m_restrictedArea5);
    return restricted_areas;

}




void StreetRedLine::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget)
{
    m_color = Qt::red;
    m_penWidth = 2;
    pen.setColor(m_color);
    pen.setWidth(m_penWidth);
    painter->setPen(pen);
    painter->drawLine(m_line);
}




QRectF StreetRedLine::boundingRect() const
{
    return QRectF(QPointF(m_line.x1(),m_line.y1()),QPointF(m_line.x2(),m_line.y2()));
}
