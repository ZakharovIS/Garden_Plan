#include "drivewayredline.h"

DriveWayRedLine::DriveWayRedLine()
{

}

DriveWayRedLine::DriveWayRedLine(QLine line, Direction direction)
{
    m_line = line;
    if(direction == Direction::LEFT)
    {
        m_rect5 = QRect(m_line.x1()-5*c_cellSize,m_line.y1(),5*c_cellSize,m_line.y2()-m_line.y1());
        m_rect3 = QRect(m_line.x1()-3*c_cellSize,m_line.y1(),3*c_cellSize,m_line.y2()-m_line.y1());
    }
    if(direction == Direction::TOP)
    {
        m_rect5 = QRect(m_line.x1(),m_line.y1()-5*c_cellSize,m_line.x2()-m_line.x1(),5*c_cellSize);
        m_rect3 = QRect(m_line.x1(),m_line.y1()-3*c_cellSize,m_line.x2()-m_line.x1(),3*c_cellSize);
    }
    if(direction == Direction::RIGHT)
    {
        m_rect5 = QRect(m_line.x1(),m_line.y1(),5*c_cellSize,m_line.y2()-m_line.y1());
        m_rect3 = QRect(m_line.x1(),m_line.y1(),3*c_cellSize,m_line.y2()-m_line.y1());
    }
    if(direction == Direction::BOTTOM)
    {
        m_rect5 = QRect(m_line.x1(),m_line.y1(),m_line.x2()-m_line.x1(),5*c_cellSize);
        m_rect3 = QRect(m_line.x1(),m_line.y1(),m_line.x2()-m_line.x1(),3*c_cellSize);
    }

    m_restrictedArea5 = new RestrictedArea(m_rect5,GardenFlags::DriveWayRedLine5);
    m_restrictedArea3 = new RestrictedArea(m_rect3,GardenFlags::DriveWayRedLine3);

}

QVector<RestrictedArea *> DriveWayRedLine::getRestrictedAreas()
{
    restricted_areas.push_back(m_restrictedArea5);
    restricted_areas.push_back(m_restrictedArea3);
    return restricted_areas;
}


QRectF DriveWayRedLine::boundingRect() const
{
    return QRectF(QPointF(m_line.x1(),m_line.y1()),QPointF(m_line.x2(),m_line.y2()));
}

void DriveWayRedLine::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget)
{
    m_color = Qt::red;
    m_penWidth = 2;
    pen.setColor(m_color);
    pen.setWidth(m_penWidth);
    painter->setPen(pen);
    painter->drawLine(m_line);
}

