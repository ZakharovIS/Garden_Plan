#include "restrictedarea.h"

RestrictedArea::RestrictedArea()
{

}

RestrictedArea::RestrictedArea(QRect rect, GardenFlags::Option flag)
{
    m_rect_Area = rect;
    m_flag = flag;
    m_mode = displayMode::EMPTY;

}

RestrictedArea::RestrictedArea(QRect rect, GardenFlags::Option flag, int radius)
{
    m_rect_Area = rect;
    m_flag = flag;
    m_Radius = radius;
    m_mode = displayMode::EMPTY;
}

void RestrictedArea::setMode(displayMode dm)
{
    m_mode = dm;
}

GardenFlags::Option RestrictedArea::getFlag()
{
    return m_flag;
}

displayMode RestrictedArea::getMode()
{
    return m_mode;
}

QRectF RestrictedArea::boundingRect() const
{
    return m_rect_Area;
}

QPainterPath RestrictedArea::shape() const
{
    if(m_flag == GardenFlags::MyHouse8 ||
       m_flag == GardenFlags::Sauna8 ||
       m_flag == GardenFlags::WaterCloset8 ||
       m_flag == GardenFlags::Compost8)
    {
        QPainterPath path;
        path.addRoundedRect(boundingRect(), m_Radius*c_cellSize, m_Radius*c_cellSize);
        return path;
    }
    else if(m_flag == GardenFlags::Well8)
    {
        QPainterPath path;
        path.addEllipse(m_rect_Area);
        return path;
    }
    else
    {
        QPainterPath path;
        path.addRect(m_rect_Area);
        return path;
    }
}

void RestrictedArea::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget)
{
    if(m_mode == displayMode::EMPTY)
    {
        QPen pen;
        pen.setStyle(Qt::NoPen);
        painter->setPen(pen);
        painter->drawPath(this->shape());
    }

    else if(m_mode == displayMode::BORDER)
    {
        QPen pen;
        QBrush brush;
        pen.setStyle(Qt::SolidLine);
        pen.setColor(QColor(Qt::red));
        brush.setStyle(Qt::Dense6Pattern);
        brush.setColor(Qt::red);
        painter->setPen(pen);
        painter->setBrush(brush);
        painter->drawPath(this->shape());
    }
    else if(m_mode == displayMode::FILLED)
    {
        QPen pen;
        QBrush brush;
        brush.setStyle(Qt::DiagCrossPattern);
        brush.setColor(Qt::red);
        pen.setStyle(Qt::SolidLine);
        pen.setColor(QColor(Qt::red));
        painter->setPen(pen);
        painter->setBrush(brush);
        painter->drawPath(this->shape());
    }

}

