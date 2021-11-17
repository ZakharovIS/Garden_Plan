#include "nearestobjects.h"

NearestObjects::NearestObjects()
{

}

NearestObjects::NearestObjects(Position object_position)
{
    m_distance = 0;
    m_size = QSize(0,0);
    m_type = NearestObjectsType::EMPTY;
    m_object_position = object_position;
    if(object_position == Position::LEFT)
    {
        m_forbidden_area_direction = Direction::RIGHT;
    }
    if(object_position == Position::TOP)
    {
        m_forbidden_area_direction = Direction::BOTTOM;
    }
    if(object_position == Position::RIGHT)
    {
        m_forbidden_area_direction = Direction::LEFT;
    }
    if(object_position == Position::BOTTOM)
    {
        m_forbidden_area_direction = Direction::TOP;
    }

}

void NearestObjects::setObjectData(uint distance,uint type,uint sideSize)
{
    m_distance = distance;
    m_type = static_cast<NearestObjectsType>(type);

    if(m_object_position == Position::RIGHT || m_object_position == Position::LEFT)
    {

        if(m_type==NearestObjectsType::EMPTY)
            {
                m_size = QSize(c_emptyObjectSize,sideSize);
            }
            if(m_type==NearestObjectsType::STREET)
            {
                m_size = QSize(c_roadDistance+c_streetObjectSize,sideSize);
            }
            if(m_type==NearestObjectsType::DRIVEWAY)
            {
                m_size = QSize(c_roadDistance+c_driveWayObjectSize,sideSize);
            }
            if(m_type==NearestObjectsType::NEIGHBOUR)
            {
                m_size = QSize(c_neighbourObjectSize,sideSize);
            }
    }
    else
    {
        qDebug()<<"А теперь тут";
        if(m_type==NearestObjectsType::EMPTY)
            {
                m_size = QSize(sideSize,c_emptyObjectSize);
            }
            if(m_type==NearestObjectsType::STREET)
            {
                m_size = QSize(sideSize,c_roadDistance+c_streetObjectSize);
            }
            if(m_type==NearestObjectsType::DRIVEWAY)
            {
                m_size = QSize(sideSize,c_roadDistance+c_driveWayObjectSize);
            }
            if(m_type==NearestObjectsType::NEIGHBOUR)
            {
                m_size = QSize(sideSize,c_neighbourObjectSize);
            }
    }
}

uint NearestObjects::getDistance()
{
    return m_distance;
}

QSize NearestObjects::getSize()
{
    return m_size;
}

NearestObjectsType NearestObjects::getType()
{
    return m_type;
}

Direction NearestObjects::getForbiddenAreaDirection()
{
    return m_forbidden_area_direction;
}

