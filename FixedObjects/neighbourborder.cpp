#include "neighbourborder.h"

NeighbourBorder::NeighbourBorder()
{

}

NeighbourBorder::NeighbourBorder(QLine line, Direction direction)
{
    m_line = line;
    if(direction == Direction::LEFT)
    {
        m_rect1 = QRect(m_line.x1()-1*c_cellSize,m_line.y1(),1*c_cellSize,m_line.y2()-m_line.y1());
        m_rect2 = QRect(m_line.x1()-2*c_cellSize,m_line.y1(),2*c_cellSize,m_line.y2()-m_line.y1());
        m_rect3 = QRect(m_line.x1()-3*c_cellSize,m_line.y1(),3*c_cellSize,m_line.y2()-m_line.y1());
        m_rect4 = QRect(m_line.x1()-4*c_cellSize,m_line.y1(),4*c_cellSize,m_line.y2()-m_line.y1());
    }
    if(direction == Direction::TOP)
    {
        m_rect1 = QRect(m_line.x1(),m_line.y1()-1*c_cellSize,m_line.x2()-m_line.x1(),1*c_cellSize);
        m_rect2 = QRect(m_line.x1(),m_line.y1()-2*c_cellSize,m_line.x2()-m_line.x1(),2*c_cellSize);
        m_rect3 = QRect(m_line.x1(),m_line.y1()-3*c_cellSize,m_line.x2()-m_line.x1(),3*c_cellSize);
        m_rect4 = QRect(m_line.x1(),m_line.y1()-4*c_cellSize,m_line.x2()-m_line.x1(),4*c_cellSize);
    }
    if(direction == Direction::RIGHT)
    {
        m_rect1 = QRect(m_line.x1(),m_line.y1(),1*c_cellSize,m_line.y2()-m_line.y1());
        m_rect2 = QRect(m_line.x1(),m_line.y1(),2*c_cellSize,m_line.y2()-m_line.y1());
        m_rect3 = QRect(m_line.x1(),m_line.y1(),3*c_cellSize,m_line.y2()-m_line.y1());
        m_rect4 = QRect(m_line.x1(),m_line.y1(),4*c_cellSize,m_line.y2()-m_line.y1());
    }
    if(direction == Direction::BOTTOM)
    {
        m_rect1 = QRect(m_line.x1(),m_line.y1(),m_line.x2()-m_line.x1(),1*c_cellSize);
        m_rect2 = QRect(m_line.x1(),m_line.y1(),m_line.x2()-m_line.x1(),2*c_cellSize);
        m_rect3 = QRect(m_line.x1(),m_line.y1(),m_line.x2()-m_line.x1(),3*c_cellSize);
        m_rect4 = QRect(m_line.x1(),m_line.y1(),m_line.x2()-m_line.x1(),4*c_cellSize);
    }

    m_restrictedArea1 = new RestrictedArea(m_rect1,GardenFlags::NeighbourBorder1);
    m_restrictedArea2 = new RestrictedArea(m_rect2,GardenFlags::NeighbourBorder2);
    m_restrictedArea3 = new RestrictedArea(m_rect3,GardenFlags::NeighbourBorder3);
    m_restrictedArea4 = new RestrictedArea(m_rect4,GardenFlags::NeighbourBorder4);
}

QVector<RestrictedArea *> NeighbourBorder::getRestrictedAreas()
{
    restricted_areas.push_back(m_restrictedArea1);
    restricted_areas.push_back(m_restrictedArea2);
    restricted_areas.push_back(m_restrictedArea3);
    restricted_areas.push_back(m_restrictedArea4);
    return restricted_areas;
}

void NeighbourBorder::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget)
{
    pen.setStyle(Qt::NoPen);
    painter->setPen(pen);
    painter->drawLine(m_line);
}



QRectF NeighbourBorder::boundingRect() const
{
    return QRectF(QPointF(m_line.x1(),m_line.y1()),QPointF(m_line.x2(),m_line.y2()));
}
