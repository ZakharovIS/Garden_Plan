#ifndef CONSTANTS_H
#define CONSTANTS_H
#include <QGraphicsItem>
#include "gardenflags.h"

// Константы, задающие размер ячейки, дистанции до фиксированных объектов и декоративных элементов
static const int c_cellSize = 20;
static const int c_roadWidth = 5*c_cellSize;
static const int c_roadDistance = 5*c_cellSize;
static const int c_driveWayWidth = 2*c_cellSize;
static const int c_emptyObjectSize = 10*c_cellSize;
static const int c_streetObjectSize = 10*c_cellSize;
static const int c_driveWayObjectSize = 8*c_cellSize;
static const int c_neighbourObjectSize = 18*c_cellSize;
//Вспомогательные перечисления
enum class NearestObjectsType {EMPTY, STREET, DRIVEWAY, NEIGHBOUR};
enum class Position {LEFT,RIGHT,TOP,BOTTOM};
enum class Direction {LEFT,RIGHT,TOP,BOTTOM};
//Задание пользовательских типов объектов
enum{RESTRICTED_AREA_TYPE = QGraphicsItem::UserType+1,
    STREET_RED_LINE_TYPE = QGraphicsItem::UserType+2,
    DRIVEWAY_RED_LINE_TYPE = QGraphicsItem::UserType+3,
    FENCE_TYPE = QGraphicsItem::UserType+4,
    NEIGHBOUR_BORDER_TYPE = QGraphicsItem::UserType+5,
    BIG_TREE_TYPE = QGraphicsItem::UserType+6,
    HOUSE_TYPE = QGraphicsItem::UserType+7,
    MIDSIZE_TREE_TYPE = QGraphicsItem::UserType+8,
    BUSH_TYPE = QGraphicsItem::UserType+9,
    SAUNA_TYPE = QGraphicsItem::UserType+10,
    SHED_TYPE = QGraphicsItem::UserType+11,
    GLASSHOUSE_TYPE = QGraphicsItem::UserType+12,
    HENHOUSE_TYPE = QGraphicsItem::UserType+13,
    WATERCLOSET_TYPE = QGraphicsItem::UserType+14,
    COMPOST_TYPE = QGraphicsItem::UserType+15,
    WELL_TYPE = QGraphicsItem::UserType+16};

//Флаги объектов
static const GardenFlags::Options c_treeFlags(GardenFlags::NeighbourBorder3);
static const GardenFlags::Options c_midsizeTreeFlags(GardenFlags::NeighbourBorder2);
static const GardenFlags::Options c_bushFlags(GardenFlags::NeighbourBorder1);
static const GardenFlags::Options c_houseFlags(GardenFlags::NeighbourBorder3 |
                                               GardenFlags::StreetRedLine5 |
                                               GardenFlags::DriveWayRedLine3 |
                                               GardenFlags::Sauna8 |
                                               GardenFlags::WaterCloset8 |
                                               GardenFlags::MyHouse8);
static const GardenFlags::Options c_saunaFlags(GardenFlags::StreetRedLine5 |
                                               GardenFlags::DriveWayRedLine5 |
                                               GardenFlags::NeighbourBorder1 |
                                               GardenFlags::MyHouse8);
static const GardenFlags::Options c_shedFlags(GardenFlags::StreetRedLine5 |
                                              GardenFlags::DriveWayRedLine5 |
                                              GardenFlags::NeighbourBorder1);
static const GardenFlags::Options c_glasshouseFlags(GardenFlags::StreetRedLine5 |
                                              GardenFlags::DriveWayRedLine5 |
                                              GardenFlags::NeighbourBorder1);
static const GardenFlags::Options c_henhouseFlags(GardenFlags::StreetRedLine5 |
                                              GardenFlags::DriveWayRedLine5 |
                                              GardenFlags::NeighbourBorder4);
static const GardenFlags::Options c_waterclosetFlags(GardenFlags::Fence2 |
                                              GardenFlags::MyHouse8 |
                                              GardenFlags::NeighbourBorder2 |
                                              GardenFlags::Well8);
static const GardenFlags::Options c_compostFlags(GardenFlags::Fence2 |
                                              GardenFlags::NeighbourBorder2 |
                                              GardenFlags::Well8);
static const GardenFlags::Options c_wellFlags(GardenFlags::Compost8 |
                                              GardenFlags::WaterCloset8);

#endif // CONSTANTS_H
