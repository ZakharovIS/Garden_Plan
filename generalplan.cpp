/*
Класс главного объекта сцены.
Объект сосотоит из самого участка,дорог,проездов, соседских участков.
*/
#include "generalplan.h"

GeneralPlan::GeneralPlan()
{
    m_size_garden_site = QSize(0,0); //временно

}


QRectF GeneralPlan::boundingRect() const
{
    return QRectF(QPointF(0,0),m_size_garden_site);
}

void GeneralPlan::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget)
{
    painter->save();
    QPixmap tmp;
    QBrush brush;
    QPen pen = QPen();
    ///////////////////////////////////////////////////
    //Чертим границы участка
    //////////////////////////////////////////////////
    pen.setStyle(Qt::SolidLine);
    pen.setColor(QColor(140,70,20,255));
    pen.setWidth(5);
    painter->setPen(pen);
    painter->drawRect(m_garden_coordinates);
    ///////////////////////////////////////////////////
    //Отрисовка соседних объектов
    ///////////////////////////////////////////////////
    pixmap.load(":/Textures/Images/asphalt2.jpg");
    tmp = pixmap.scaled(pixmap.size().width()/10,
            pixmap.size().height()/10,Qt::KeepAspectRatio);
    brush.setTexture(tmp);
    pen.setColor(QColor(Qt::white));
    pen.setWidth(4);
    pen.setStyle(Qt::DashLine);
    ///////////////////////////////////////////////////
    //Отрисовка дорог
    //Для того, чтобы дорога не "заезжала" на размерную сетку
    //приходится добавлять сдвиги на один пиксель (иначе некрасиво)
    ///////////////////////////////////////////////////
    if(m_left_object.getType()==NearestObjectsType::STREET)
    {

        brush.setTexture(tmp);
        painter->setBrush(brush);
        painter->setPen(Qt::NoPen);
        painter->drawRect(m_garden_coordinates.x()-c_roadDistance-c_roadWidth+1,
                          1,
                          c_roadWidth-1,
                          m_total_size.height()-1);


    }



    if(m_top_object.getType()==NearestObjectsType::STREET)
    {

        painter->setBrush(brush);
        painter->setPen(Qt::NoPen);
        painter->drawRect(1,
                          m_garden_coordinates.y()-c_roadDistance-c_roadWidth+1,
                          m_total_size.width()-1,
                          c_roadWidth-1);

    }

    if(m_right_object.getType()==NearestObjectsType::STREET)
    {

        painter->setBrush(brush);
        painter->setPen(Qt::NoPen);
        painter->drawRect(m_garden_coordinates.x() + m_garden_coordinates.width() + c_roadDistance+1,
                          1,
                          c_roadWidth-1,
                          m_total_size.height()-1);

    }

    if(m_bottom_object.getType()==NearestObjectsType::STREET)
    {

        painter->setBrush(brush);
        painter->setPen(Qt::NoPen);
        painter->drawRect(1,
                          m_garden_coordinates.y()+m_garden_coordinates.height()+c_roadDistance+1,
                          m_total_size.width()-1,
                          c_roadWidth-1);

    }

    painter->setPen(pen);
    painter->setBrush(Qt::NoBrush);
    ///////////////////////////////////////////////////
    //Отрисовка дорожных полос
    ///////////////////////////////////////////////////
    if(m_left_object.getType()==NearestObjectsType::STREET)
    {

        painter->drawLine(m_garden_coordinates.x()-c_roadDistance-c_roadWidth/2,
                          1,
                          m_garden_coordinates.x()-c_roadDistance-c_roadWidth/2,
                          m_total_size.height()-1);
    }



    if(m_top_object.getType()==NearestObjectsType::STREET)
    {

        painter->drawLine(1,
                          m_garden_coordinates.y()-c_roadDistance-c_roadWidth/2,
                          m_total_size.width()-1,
                          m_garden_coordinates.y()-c_roadDistance-c_roadWidth/2);
    }

    if(m_right_object.getType()==NearestObjectsType::STREET)
    {

        painter->drawLine(m_garden_coordinates.x() + m_garden_coordinates.width()+c_roadDistance+c_roadWidth/2,
                          1,
                          m_garden_coordinates.x() + m_garden_coordinates.width()+c_roadDistance+c_roadWidth/2,
                          m_total_size.height()-1);
    }

    if(m_bottom_object.getType()==NearestObjectsType::STREET)
    {

        painter->drawLine(1,
                          m_garden_coordinates.y()+m_garden_coordinates.height()+c_roadDistance+c_roadWidth/2,
                          m_total_size.width()-1,
                          m_garden_coordinates.y()+m_garden_coordinates.height()+c_roadDistance+c_roadWidth/2);
    }

    pixmap.load(":/Textures/Images/stone.jpg");
    tmp = pixmap.scaled(pixmap.size().width()/50,
            pixmap.size().height()/50,Qt::KeepAspectRatio);
    brush.setTexture(tmp);

    ///////////////////////////////////////////////////
    //Отрисовка проездов
    ///////////////////////////////////////////////////
    if(m_left_object.getType()==NearestObjectsType::DRIVEWAY)
    {

        brush.setTexture(tmp);
        painter->setBrush(brush);
        painter->setPen(Qt::NoPen);
        painter->drawRect(m_garden_coordinates.left()-c_roadDistance-c_driveWayWidth+1,
                          m_garden_coordinates.top(),
                          c_driveWayWidth-1,
                          m_garden_coordinates.height());
        if(m_top_object.getType()==NearestObjectsType::STREET)
        {
            painter->drawRect(m_garden_coordinates.left()-c_roadDistance-c_driveWayWidth+1,
                              m_garden_coordinates.top()-c_roadDistance+1,
                              c_driveWayWidth-1,
                              c_roadDistance-1);
        }
        else
        {
            painter->drawRect(m_garden_coordinates.left()-c_roadDistance-c_driveWayWidth+1,
                              1,
                              c_driveWayWidth-1,
                              m_top_object.getSize().height()-1);
        }
        if(m_bottom_object.getType()==NearestObjectsType::STREET)
        {
            painter->drawRect(m_garden_coordinates.left()-c_roadDistance-c_driveWayWidth+1,
                              m_garden_coordinates.y()+m_garden_coordinates.height()+1,
                              c_driveWayWidth-1,
                              c_roadDistance-1);
        }
        else
        {
            painter->drawRect(m_garden_coordinates.left()-c_roadDistance-c_driveWayWidth+1,
                              m_garden_coordinates.y()+m_garden_coordinates.height()+1,
                              c_driveWayWidth-1,
                              m_bottom_object.getSize().height()-1);
        }
    }

    if(m_top_object.getType()==NearestObjectsType::DRIVEWAY)
    {

        brush.setTexture(tmp);
        painter->setBrush(brush);
        painter->setPen(Qt::NoPen);
        painter->drawRect(m_garden_coordinates.left(),
                          m_garden_coordinates.top()-c_roadDistance-c_driveWayWidth+1,
                          m_garden_coordinates.width(),
                          c_driveWayWidth-1);
        if(m_left_object.getType()==NearestObjectsType::STREET)
        {
            painter->drawRect(m_garden_coordinates.left()-c_roadDistance+1,
                              m_garden_coordinates.top()-c_roadDistance-c_driveWayWidth+1,
                              c_roadDistance-1,
                              c_driveWayWidth-1);
        }
        else
        {
            painter->drawRect(1,
                              m_garden_coordinates.top()-c_roadDistance-c_driveWayWidth+1,
                              m_left_object.getSize().width()-1,
                              c_driveWayWidth-1);
        }
        if(m_right_object.getType()==NearestObjectsType::STREET)
        {
            painter->drawRect(m_garden_coordinates.x()+m_garden_coordinates.width()+1,
                              m_garden_coordinates.top()-c_roadDistance-c_driveWayWidth+1,
                              c_roadDistance-1,
                              c_driveWayWidth-1);
        }
        else
        {
            painter->drawRect(m_garden_coordinates.x()+m_garden_coordinates.width()+1,
                              m_garden_coordinates.top()-c_roadDistance-c_driveWayWidth+1,
                              m_right_object.getSize().width()-1,
                              c_driveWayWidth-1);
        }
    }

    if(m_right_object.getType()==NearestObjectsType::DRIVEWAY)
    {

        brush.setTexture(tmp);
        painter->setBrush(brush);
        painter->setPen(Qt::NoPen);
        painter->drawRect(m_garden_coordinates.x()+m_garden_coordinates.width()+c_roadDistance+1,
                          m_garden_coordinates.top(),
                          c_driveWayWidth-1,
                          m_garden_coordinates.height());
        if(m_top_object.getType()==NearestObjectsType::STREET)
        {
            painter->drawRect(m_garden_coordinates.x()+m_garden_coordinates.width()+c_roadDistance+1,
                              m_garden_coordinates.top()-c_roadDistance+1,
                              c_driveWayWidth-1,
                              c_roadDistance-1);
        }
        else
        {
            painter->drawRect(m_garden_coordinates.x()+m_garden_coordinates.width()+c_roadDistance+1,
                              1,
                              c_driveWayWidth-1,
                              m_top_object.getSize().height()-1);
        }
        if(m_bottom_object.getType()==NearestObjectsType::STREET)
        {
            painter->drawRect(m_garden_coordinates.x()+m_garden_coordinates.width()+c_roadDistance+1,
                              m_garden_coordinates.y()+m_garden_coordinates.height()+1,
                              c_driveWayWidth-1,
                              c_roadDistance-1);
        }
        else
        {
            painter->drawRect(m_garden_coordinates.x()+m_garden_coordinates.width()+c_roadDistance+1,
                              m_garden_coordinates.y()+m_garden_coordinates.height()+1,
                              c_driveWayWidth-1,
                              m_bottom_object.getSize().height()-1);
        }
    }

    if(m_bottom_object.getType()==NearestObjectsType::DRIVEWAY)
    {

        brush.setTexture(tmp);
        painter->setBrush(brush);
        painter->setPen(Qt::NoPen);
        painter->drawRect(m_garden_coordinates.left(),
                          m_garden_coordinates.y()+m_garden_coordinates.height() + c_roadDistance +1,
                          m_garden_coordinates.width(),
                          c_driveWayWidth-1);
        if(m_left_object.getType()==NearestObjectsType::STREET)
        {
            painter->drawRect(m_garden_coordinates.left()-c_roadDistance+1,
                              m_garden_coordinates.y()+m_garden_coordinates.height() + c_roadDistance+1,
                              c_roadDistance-1,
                              c_driveWayWidth-1);
        }
        else
        {
            painter->drawRect(1,
                              m_garden_coordinates.y()+m_garden_coordinates.height() + c_roadDistance+1,
                              m_left_object.getSize().width()-1,
                              c_driveWayWidth-1);
        }
        if(m_right_object.getType()==NearestObjectsType::STREET)
        {
            painter->drawRect(m_garden_coordinates.x()+m_garden_coordinates.width()+1,
                              m_garden_coordinates.y()+m_garden_coordinates.height() + c_roadDistance+1,
                              c_roadDistance-1,
                              c_driveWayWidth-1);
        }
        else
        {
            painter->drawRect(m_garden_coordinates.x()+m_garden_coordinates.width()+1,
                              m_garden_coordinates.y()+m_garden_coordinates.height() + c_roadDistance+1,
                              m_right_object.getSize().width()-1,
                              c_driveWayWidth-1);
        }
    }

    ///////////////////////////////////////////////////
    //Отрисовка границ соседнего участка
    ///////////////////////////////////////////////////

    pen.setStyle(Qt::DashLine);
    pen.setColor(QColor(140,70,20,255));
    pen.setWidth(3);
    painter->setPen(pen);

    if(m_left_object.getType()==NearestObjectsType::NEIGHBOUR )
    {
        painter->drawLine(m_garden_coordinates.x(),m_garden_coordinates.y(),
                          0,m_garden_coordinates.y());
        painter->drawLine(m_garden_coordinates.x(),m_garden_coordinates.y()+m_left_object.getSize().height(),
                          0,m_garden_coordinates.y()+m_garden_coordinates.height());
    }

    if(m_top_object.getType()==NearestObjectsType::NEIGHBOUR )
    {
        painter->drawLine(m_garden_coordinates.x(),m_garden_coordinates.y(),
                          m_garden_coordinates.x(),0);
        painter->drawLine(m_garden_coordinates.x()+m_garden_coordinates.width(),m_garden_coordinates.y(),
                          m_garden_coordinates.x()+m_garden_coordinates.width(),0);
    }
    if(m_right_object.getType()==NearestObjectsType::NEIGHBOUR )
    {
        painter->drawLine(m_garden_coordinates.x()+m_garden_coordinates.width(),m_garden_coordinates.y(),
                          m_garden_coordinates.x()+m_garden_coordinates.width()+m_right_object.getSize().width(),m_garden_coordinates.y());
        painter->drawLine(m_garden_coordinates.x()+m_garden_coordinates.width(),m_garden_coordinates.y()+m_garden_coordinates.height(),
                          m_garden_coordinates.x()+m_garden_coordinates.width()+m_right_object.getSize().width(),m_garden_coordinates.y()+m_garden_coordinates.height());
    }

    if(m_bottom_object.getType()==NearestObjectsType::NEIGHBOUR )
    {
        painter->drawLine(m_garden_coordinates.x(),m_garden_coordinates.y()+m_garden_coordinates.height(),
                          m_garden_coordinates.x(),m_garden_coordinates.y()+m_garden_coordinates.height()+m_bottom_object.getSize().height());
        painter->drawLine(m_garden_coordinates.x()+m_garden_coordinates.width(),m_garden_coordinates.y()+m_garden_coordinates.height(),
                          m_garden_coordinates.x()+m_garden_coordinates.width(),m_garden_coordinates.y()+m_garden_coordinates.height()+m_bottom_object.getSize().height());
    }





    painter->restore();
}

void GeneralPlan::adjustSize()
{
    m_total_size = QSize(m_left_object.getSize().width()+m_size_garden_site.width()
                         +m_right_object.getSize().width(),
                         m_top_object.getSize().height()+m_size_garden_site.height()
                         +m_bottom_object.getSize().height());
}

NearestObjects & GeneralPlan::getLeftObject()
{
    return m_left_object;
}

NearestObjects & GeneralPlan::getRightObject()
{
    return m_right_object;
}

NearestObjects & GeneralPlan::getTopObject()
{
    return m_top_object;
}

NearestObjects & GeneralPlan::getBottomObject()
{
    return m_bottom_object;
}

void GeneralPlan::setLeftObjectData(uint distance, uint type, uint sideSize)
{
    m_left_object.setObjectData(distance,type,sideSize);
}

void GeneralPlan::setRightObjectData(uint distance, uint type, uint sideSize)
{
    m_right_object.setObjectData(distance,type,sideSize);
}

void GeneralPlan::setTopObjectData(uint distance, uint type, uint sideSize)
{
    m_top_object.setObjectData(distance,type,sideSize);
}

void GeneralPlan::setBottomObjectData(uint distance, uint type, uint sideSize)
{
    m_bottom_object.setObjectData(distance,type,sideSize);
}

void GeneralPlan::setSizeGardenSite(QSize size)
{
    m_size_garden_site = size;
}

QSize GeneralPlan::getTotalSize()
{
    return m_total_size;
}


void GeneralPlan::setGardenCoordinates()
{
    m_garden_coordinates = QRect(m_left_object.getSize().width(),m_top_object.getSize().height(),
                          m_size_garden_site.width(),m_size_garden_site.height());
    qDebug()<<m_garden_coordinates;
}

QRect GeneralPlan::getGardenCoordinates()
{
    return m_garden_coordinates;
}

QLine GeneralPlan::getLeftSideLine()
{
    return QLine(m_garden_coordinates.x()-m_left_object.getDistance(),
                 m_garden_coordinates.y(),
                 m_garden_coordinates.x()-m_left_object.getDistance(),
                 m_garden_coordinates.y()+m_garden_coordinates.height());
}

QLine GeneralPlan::getRightSideLine()
{
    return QLine(m_garden_coordinates.x()+m_garden_coordinates.width() + m_right_object.getDistance(),
                 m_garden_coordinates.y(),
                 m_garden_coordinates.x()+m_garden_coordinates.width() + m_right_object.getDistance(),
                 m_garden_coordinates.y()+m_garden_coordinates.height());
}


QLine GeneralPlan::getTopSideLine()
{
    return QLine(m_garden_coordinates.x(),
                 m_garden_coordinates.y()-m_top_object.getDistance(),
                 m_garden_coordinates.x()+m_garden_coordinates.width(),
                 m_garden_coordinates.y()-m_top_object.getDistance());
}

QLine GeneralPlan::getBottomSideLine()
{
    return QLine(m_garden_coordinates.x(),
                 m_garden_coordinates.y()+m_garden_coordinates.height() + m_bottom_object.getDistance(),
                 m_garden_coordinates.x()+m_garden_coordinates.width(),
                 m_garden_coordinates.y()+m_garden_coordinates.height() + m_bottom_object.getDistance());
}

QLine GeneralPlan::getLeftSideFence()
{
    return QLine(m_garden_coordinates.x(),
                 m_garden_coordinates.y(),
                 m_garden_coordinates.x(),
                 m_garden_coordinates.y()+m_garden_coordinates.height());
}

QLine GeneralPlan::getRightSideFence()
{
    return QLine(m_garden_coordinates.x()+m_garden_coordinates.width(),
                 m_garden_coordinates.y(),
                 m_garden_coordinates.x()+m_garden_coordinates.width(),
                 m_garden_coordinates.y()+m_garden_coordinates.height());
}

QLine GeneralPlan::getTopSideFence()
{
    return QLine(m_garden_coordinates.x(),
                 m_garden_coordinates.y(),
                 m_garden_coordinates.x()+m_garden_coordinates.width(),
                 m_garden_coordinates.y());
}

QLine GeneralPlan::getBottomSideFence()
{
    return QLine(m_garden_coordinates.x(),
                 m_garden_coordinates.y()+m_garden_coordinates.height(),
                 m_garden_coordinates.x()+m_garden_coordinates.width(),
                 m_garden_coordinates.y()+m_garden_coordinates.height());
}

