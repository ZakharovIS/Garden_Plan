/*
Класс флагов для определения запрещенных зон
для различных объектов.
*/
#ifndef GARDENFLAGS_H
#define GARDENFLAGS_H

#include <QFlags>

class GardenFlags
{
public:
    enum Option
    {

        DriveWayRedLine5 = 0x1,
        DriveWayRedLine3 = 0x2,
        Fence2 = 0x4,
        NeighbourBorder1 = 0x8,
        NeighbourBorder2 = 0x10,
        NeighbourBorder3 = 0x20,
        NeighbourBorder4 = 0x40,
        NeighbourHouse6 = 0x80,
        NeighbourHouse8 = 0x100,
        NeighbourHouse10 = 0x200,
        NeighbourHouse12 = 0x400,
        NeighbourHouse15 = 0x800,
        NeighbourBuilding4 = 0x1000,
        MyHouse8 = 0x2000,
        Compost8 = 0x4000,
        WaterCloset8 = 0x8000,
        Well8 = 0x10000,
        Sauna8 = 0x20000,
        StreetRedLine5 = 0x40000
    };

    Q_DECLARE_FLAGS(Options,Option)
    GardenFlags();
};

Q_DECLARE_OPERATORS_FOR_FLAGS(GardenFlags::Options)
#endif // GARDENFLAGS_H
