QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# The following define makes your compiler emit warnings if you use
# any Qt feature that has been marked deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    FixedObjects/fence.cpp \
    FixedObjects/neighbourborder.cpp \
    Objects/bush.cpp \
    Objects/compost.cpp \
    Objects/glasshouse.cpp \
    Objects/henhouse.cpp \
    Objects/house.cpp \
    Objects/bigtree.cpp \
    Objects/midsizetree.cpp \
    Objects/sauna.cpp \
    Objects/shed.cpp \
    Objects/watercloset.cpp \
    Objects/well.cpp \
    dialoggeneralplan.cpp \
    dragwidgetscene.cpp \
    FixedObjects/drivewayredline.cpp \
    gardenflags.cpp \
    gardenscene.cpp \
    generalplan.cpp \
    main.cpp \
    mainwindow.cpp \
    nearestobjects.cpp \
    restrictedarea.cpp \
    FixedObjects/streetredline.cpp \


HEADERS += \
    Constants.h \
    FixedObjects/fence.h \
    FixedObjects/neighbourborder.h \
    Objects/bush.h \
    Objects/compost.h \
    Objects/gardenobjects.h \
    Objects/glasshouse.h \
    Objects/henhouse.h \
    Objects/house.h \
    Objects/bigtree.h \
    Objects/midsizetree.h \
    Objects/sauna.h \
    Objects/shed.h \
    Objects/watercloset.h \
    Objects/well.h \
    dialoggeneralplan.h \
    dragwidgetscene.h \
    FixedObjects/drivewayredline.h \
    gardenflags.h \
    gardenscene.h \
    generalplan.h \
    mainwindow.h \
    nearestobjects.h \
    restrictedarea.h \
    FixedObjects/streetredline.h \


FORMS += \
    dialoggeneralplan.ui \
    mainwindow.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    resources.qrc
