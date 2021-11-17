#ifndef GENERALPLAN_H
#define GENERALPLAN_H
#include <QWidget>
#include <QGraphicsItem>
#include <QPainter>
#include <QSize>
#include <QLine>
#include <QDebug>
#include "nearestobjects.h"
#include "Constants.h"



class GeneralPlan: public QGraphicsItem
{

    QSize m_size_garden_site;                     //Размер участка
    QSize m_total_size;
    NearestObjects m_left_object = NearestObjects(Position::LEFT);     //Объект слева от участка
    NearestObjects m_right_object = NearestObjects(Position::RIGHT);    //Объект справа от участка
    NearestObjects m_top_object = NearestObjects(Position::TOP);      //Объект сверху от участка
    NearestObjects m_bottom_object = NearestObjects(Position::BOTTOM);   //Объект снизу от участка
    QPixmap pixmap;
    QRect m_garden_coordinates;

public:
    GeneralPlan();


    // QGraphicsItem interface
public:
    virtual QRectF boundingRect() const;
    virtual void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget);

    void adjustSize();
    NearestObjects & getLeftObject();
    NearestObjects & getRightObject();
    NearestObjects & getTopObject();
    NearestObjects & getBottomObject();

    void setLeftObjectData(uint distance,uint type,uint sideSize);
    void setRightObjectData(uint distance,uint type,uint sideSize);
    void setTopObjectData(uint distance,uint type,uint sideSize);
    void setBottomObjectData(uint distance,uint type,uint sideSize);

    void setSizeGardenSite(QSize);
    QSize getTotalSize();
    void setGardenCoordinates();
    QRect getGardenCoordinates();

    QLine getLeftSideLine();
    QLine getRightSideLine();
    QLine getTopSideLine();
    QLine getBottomSideLine();

    QLine getLeftSideFence();
    QLine getRightSideFence();
    QLine getTopSideFence();
    QLine getBottomSideFence();

};

#endif // GENERALPLAN_H
