#ifndef GARDENSCENE_H
#define GARDENSCENE_H

#include <QWidget>
#include <QGraphicsScene>
#include <QGraphicsItem>
#include <QDrag>
#include <QMimeData>
#include <QGraphicsSceneDragDropEvent>
#include <QGraphicsEffect>
#include <QGraphicsDropShadowEffect>
#include "generalplan.h"
#include "dialoggeneralplan.h"
#include "FixedObjects/streetredline.h"
#include "FixedObjects/drivewayredline.h"
#include "FixedObjects/fence.h"
#include "FixedObjects/neighbourborder.h"
#include "restrictedarea.h"
#include "Objects/bigtree.h"
#include "Objects/house.h"
#include "Objects/midsizetree.h"
#include "Objects/bush.h"
#include "Objects/sauna.h"
#include "Objects/shed.h"
#include "Objects/glasshouse.h"
#include "Objects/henhouse.h"
#include "Objects/watercloset.h"
#include "Objects/compost.h"
#include "Objects/well.h"

class GardenScene : public QGraphicsScene
{
    Q_OBJECT
    QRect m_scene_size; //Размер сцены
    bool grid;

public:
    explicit GardenScene(QWidget *parent = nullptr);
    void setFixedRestrictedAreas(GeneralPlan* plan); //Запретные зоны фиксированных объектов
    void setCollidingAreas();       //Отображение пересечений
    void clearRestrictedAreas();    //Очистка подсвеченных зон

signals:
    signalEnableGrid(bool);
    signalShowMenu();
    signalEnableObjectTools();
    signalDisableObjectTools();
    signalEnableCommandMenu();

public slots:
    void slotSetGeneralPlan();  //Задание генерального плана
    void slotSetGrid(bool);     //установка размерной сетки
    void slotSelectItems();     //Отображение запретных зон для выбранного объекта
    void slotRotationLeft();    //Поворот влево
    void slotRotationRight();   //Поворот вправо
    void slotDeleteItem();      //Удаление элемента


    // QGraphicsScene interface
protected:
    virtual void drawBackground(QPainter *painter, const QRectF &rect);

    // QGraphicsScene interface
protected:
    virtual void dragEnterEvent(QGraphicsSceneDragDropEvent *event);

    // QGraphicsScene interface
protected:
    virtual void dragMoveEvent(QGraphicsSceneDragDropEvent *event);

    // QGraphicsScene interface
protected:
    virtual void dropEvent(QGraphicsSceneDragDropEvent *event);

    // QGraphicsScene interface
protected:
    virtual void dragLeaveEvent(QGraphicsSceneDragDropEvent *event);
};

#endif // GARDENSCENE_H
