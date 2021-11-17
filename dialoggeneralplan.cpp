#include "dialoggeneralplan.h"
#include "ui_dialoggeneralplan.h"

DialogGeneralPlan::DialogGeneralPlan(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DialogGeneralPlan)
{
    m_width = 20;
    m_height = 50;
    m_left_object_type = 0;
    m_left_object_distance = 0;
    m_top_object_type = 0;
    m_top_object_distance = 0;
    m_right_object_type = 0;
    m_right_object_distance = 0;
    m_bottom_object_type = 0;
    m_bottom_object_distance = 0;

    ui->setupUi(this);
    ui->CB_Left_Neighbour->addItem("Пустой участок", 0);
    ui->CB_Left_Neighbour->addItem("Улица", 1);
    ui->CB_Left_Neighbour->addItem("Проезд", 2);
    ui->CB_Left_Neighbour->addItem("Соседский участок", 3);

    ui->CB_Top_Neighbour->addItem("Пустой участок", 0);
    ui->CB_Top_Neighbour->addItem("Улица", 1);
    ui->CB_Top_Neighbour->addItem("Проезд", 2);
    ui->CB_Top_Neighbour->addItem("Соседский участок", 3);

    ui->CB_Right_Neighbour->addItem("Пустой участок", 0);
    ui->CB_Right_Neighbour->addItem("Улица", 1);
    ui->CB_Right_Neighbour->addItem("Проезд", 2);
    ui->CB_Right_Neighbour->addItem("Соседский участок", 3);

    ui->CB_Bottom_Neighbour->addItem("Пустой участок", 0);
    ui->CB_Bottom_Neighbour->addItem("Улица", 1);
    ui->CB_Bottom_Neighbour->addItem("Проезд", 2);
    ui->CB_Bottom_Neighbour->addItem("Соседский участок", 3);

    connect(ui->SB_Width,SIGNAL(valueChanged(int)),this,SLOT(slotSetWidth(int)));
    connect(ui->SB_Height,SIGNAL(valueChanged(int)),this,SLOT(slotSetHeight(int)));
    connect(ui->CB_Left_Neighbour,SIGNAL(currentIndexChanged(int)),this,SLOT(slotSetLeftObjectType(int)));
    connect(ui->SB_RedLineDistanceLeft,SIGNAL(valueChanged(int)),this,SLOT(slotSetLeftObjectDistance(int)));
    connect(ui->CB_Top_Neighbour,SIGNAL(currentIndexChanged(int)),this,SLOT(slotSetTopObjectType(int)));
    connect(ui->SB_RedLineDistanceTop,SIGNAL(valueChanged(int)),this,SLOT(slotSetTopObjectDistance(int)));
    connect(ui->CB_Right_Neighbour,SIGNAL(currentIndexChanged(int)),this,SLOT(slotSetRightObjectType(int)));
    connect(ui->SB_RedLineDistanceRight,SIGNAL(valueChanged(int)),this,SLOT(slotSetRightObjectDistance(int)));
    connect(ui->CB_Bottom_Neighbour,SIGNAL(currentIndexChanged(int)),this,SLOT(slotSetBottomObjectType(int)));
    connect(ui->SB_RedLineDistanceBottom,SIGNAL(valueChanged(int)),this,SLOT(slotSetBottomObjectDistance(int)));
}

DialogGeneralPlan::~DialogGeneralPlan()
{
    delete ui;
}

void DialogGeneralPlan::slotSetWidth(int width)
{
    m_width = width;
}

void DialogGeneralPlan::slotSetHeight(int height)
{
    m_height = height;
}

void DialogGeneralPlan::slotSetLeftObjectType(int type)
{
    m_left_object_type = type;
}

void DialogGeneralPlan::slotSetLeftObjectDistance(int distance)
{
    m_left_object_distance = distance;
}

void DialogGeneralPlan::slotSetTopObjectType(int type)
{
    m_top_object_type = type;
}

void DialogGeneralPlan::slotSetTopObjectDistance(int distance)
{
    m_top_object_distance = distance;
}

void DialogGeneralPlan::slotSetRightObjectType(int type)
{
    m_right_object_type = type;
}

void DialogGeneralPlan::slotSetRightObjectDistance(int distance)
{
    m_right_object_distance = distance;
}

void DialogGeneralPlan::slotSetBottomObjectType(int type)
{
    m_bottom_object_type = type;
}

void DialogGeneralPlan::slotSetBottomObjectDistance(int distance)
{
    m_bottom_object_distance = distance;
}

int DialogGeneralPlan::getWidth()
{
    return m_width;
}

int DialogGeneralPlan::getHeight()
{
    return m_height;
}

int DialogGeneralPlan::getLeftObjectType()
{
    return m_left_object_type;
}

int DialogGeneralPlan::getLeftObjectDistance()
{
    return m_left_object_distance;
}

int DialogGeneralPlan::getTopObjectType()
{
    return m_top_object_type;
}

int DialogGeneralPlan::getTopObjectDistance()
{
    return m_top_object_distance;
}

int DialogGeneralPlan::getRightObjectType()
{
    return m_right_object_type;
}

int DialogGeneralPlan::getRightObjectDistance()
{
    return m_right_object_distance;
}

int DialogGeneralPlan::getBottomObjectType()
{
    return m_bottom_object_type;
}

int DialogGeneralPlan::getBottomObjectDistance()
{
    return m_bottom_object_distance;
}
