#ifndef NEARESTOBJECTS_H
#define NEARESTOBJECTS_H
#include<QSize>
#include<QLine>
#include<QDebug>
#include "Constants.h"




class NearestObjects
{

public:


    uint m_distance;     //Расстояние до красной линии
    QSize m_size;        //Размер объекта
    NearestObjectsType m_type;        //Тип объекта
    Position m_object_position;
    Direction m_forbidden_area_direction; //Направление запретной зоны


public:
   NearestObjects();
   NearestObjects(Position forbidden_area_direction);

   void setObjectData(uint distance,uint type,uint sideSize);
   uint getDistance();
   QSize getSize();
   NearestObjectsType getType();
   Direction getForbiddenAreaDirection();


};

#endif // NEARESTOBJECTS_H
