#include "gardenscene.h"

GardenScene::GardenScene(QWidget *parent) : QGraphicsScene(parent)
{
    grid = true;

    connect(this,SIGNAL(selectionChanged()),this,SLOT(slotSelectItems()));

}

void GardenScene::setFixedRestrictedAreas(GeneralPlan* plan)
{
    if(plan->getLeftObject().getType()==NearestObjectsType::STREET)
    {
        StreetRedLine* streetLeftRedLine = new StreetRedLine(plan->getLeftSideLine(),
                                                             plan->getLeftObject().getForbiddenAreaDirection());
        this->addItem(streetLeftRedLine);
        QVector<RestrictedArea*> tmp = streetLeftRedLine->getRestrictedAreas();
        for (auto var : tmp) {
            var->setParentItem(streetLeftRedLine);
        }
        Fence* fenceLeftLine = new Fence(plan->getLeftSideFence(),plan->getLeftObject().getForbiddenAreaDirection());
        this->addItem(fenceLeftLine);
        QVector<RestrictedArea*> tmp2 = fenceLeftLine->getRestrictedAreas();
        for (auto var : tmp2) {
            var->setParentItem(fenceLeftLine);
        }
        this->update();
    }

    if(plan->getRightObject().getType()==NearestObjectsType::STREET)
    {
        StreetRedLine* streetRightRedLine = new StreetRedLine(plan->getRightSideLine(),
                                                             plan->getRightObject().getForbiddenAreaDirection());
        this->addItem(streetRightRedLine);
        QVector<RestrictedArea*> tmp = streetRightRedLine->getRestrictedAreas();
        for (auto var : tmp) {
            var->setParentItem(streetRightRedLine);
        }
        Fence* fenceRightLine = new Fence(plan->getRightSideFence(),plan->getRightObject().getForbiddenAreaDirection());
        this->addItem(fenceRightLine);
        QVector<RestrictedArea*> tmp2 = fenceRightLine->getRestrictedAreas();
        for (auto var : tmp2) {
            var->setParentItem(fenceRightLine);
        }
        this->update();
    }

    if(plan->getTopObject().getType()==NearestObjectsType::STREET)
    {
        StreetRedLine* streetTopRedLine = new StreetRedLine(plan->getTopSideLine(),
                                                             plan->getTopObject().getForbiddenAreaDirection());
        this->addItem(streetTopRedLine);
        QVector<RestrictedArea*> tmp = streetTopRedLine->getRestrictedAreas();
        for (auto var : tmp) {
            var->setParentItem(streetTopRedLine);
        }
        Fence* fenceTopLine = new Fence(plan->getTopSideFence(),plan->getTopObject().getForbiddenAreaDirection());
        this->addItem(fenceTopLine);
        QVector<RestrictedArea*> tmp2 = fenceTopLine->getRestrictedAreas();
        for (auto var : tmp2) {
            var->setParentItem(fenceTopLine);
        }
        this->update();
    }

    if(plan->getBottomObject().getType()==NearestObjectsType::STREET)
    {
        StreetRedLine* streetBottomRedLine = new StreetRedLine(plan->getBottomSideLine(),
                                                             plan->getBottomObject().getForbiddenAreaDirection());
        this->addItem(streetBottomRedLine);
        QVector<RestrictedArea*> tmp = streetBottomRedLine->getRestrictedAreas();
        for (auto var : tmp) {
            var->setParentItem(streetBottomRedLine);
        }
        Fence* fenceBottomLine = new Fence(plan->getBottomSideFence(),plan->getBottomObject().getForbiddenAreaDirection());
        this->addItem(fenceBottomLine);
        QVector<RestrictedArea*> tmp2 = fenceBottomLine->getRestrictedAreas();
        for (auto var : tmp2) {
            var->setParentItem(fenceBottomLine);
        }
        this->update();
    }

    if(plan->getLeftObject().getType()==NearestObjectsType::DRIVEWAY)
    {
        DriveWayRedLine* driveWayLeftRedLine = new DriveWayRedLine(plan->getLeftSideLine(),
                                                             plan->getLeftObject().getForbiddenAreaDirection());
        this->addItem(driveWayLeftRedLine);
        QVector<RestrictedArea*> tmp = driveWayLeftRedLine->getRestrictedAreas();
        for (auto var : tmp) {
            var->setParentItem(driveWayLeftRedLine);
        }
        Fence* fenceLeftLine = new Fence(plan->getLeftSideFence(),plan->getLeftObject().getForbiddenAreaDirection());
        this->addItem(fenceLeftLine);
        QVector<RestrictedArea*> tmp2 = fenceLeftLine->getRestrictedAreas();
        for (auto var : tmp2) {
            var->setParentItem(fenceLeftLine);
        }
        this->update();
    }

    if(plan->getRightObject().getType()==NearestObjectsType::DRIVEWAY)
    {
        DriveWayRedLine* driveWayRightRedLine = new DriveWayRedLine(plan->getRightSideLine(),
                                                             plan->getRightObject().getForbiddenAreaDirection());
        this->addItem(driveWayRightRedLine);
        QVector<RestrictedArea*> tmp = driveWayRightRedLine->getRestrictedAreas();
        for (auto var : tmp) {
            var->setParentItem(driveWayRightRedLine);
        }
        Fence* fenceRightLine = new Fence(plan->getRightSideFence(),plan->getRightObject().getForbiddenAreaDirection());
        this->addItem(fenceRightLine);
        QVector<RestrictedArea*> tmp2 = fenceRightLine->getRestrictedAreas();
        for (auto var : tmp2) {
            var->setParentItem(fenceRightLine);
        }
        this->update();
    }

    if(plan->getTopObject().getType()==NearestObjectsType::DRIVEWAY)
    {
        DriveWayRedLine* driveWayTopRedLine = new DriveWayRedLine(plan->getTopSideLine(),
                                                             plan->getTopObject().getForbiddenAreaDirection());
        this->addItem(driveWayTopRedLine);
        QVector<RestrictedArea*> tmp = driveWayTopRedLine->getRestrictedAreas();
        for (auto var : tmp) {
            var->setParentItem(driveWayTopRedLine);
        }
        Fence* fenceTopLine = new Fence(plan->getTopSideFence(),plan->getTopObject().getForbiddenAreaDirection());
        this->addItem(fenceTopLine);
        QVector<RestrictedArea*> tmp2 = fenceTopLine->getRestrictedAreas();
        for (auto var : tmp2) {
            var->setParentItem(fenceTopLine);
        }
        this->update();
    }

    if(plan->getBottomObject().getType()==NearestObjectsType::DRIVEWAY)
    {
        DriveWayRedLine* driveWayBottomRedLine = new DriveWayRedLine(plan->getBottomSideLine(),
                                                             plan->getBottomObject().getForbiddenAreaDirection());
        this->addItem(driveWayBottomRedLine);
        QVector<RestrictedArea*> tmp = driveWayBottomRedLine->getRestrictedAreas();
        for (auto var : tmp) {
            var->setParentItem(driveWayBottomRedLine);
        }
        Fence* fenceBottomLine = new Fence(plan->getBottomSideFence(),plan->getBottomObject().getForbiddenAreaDirection());
        this->addItem(fenceBottomLine);
        QVector<RestrictedArea*> tmp2 = fenceBottomLine->getRestrictedAreas();
        for (auto var : tmp2) {
            var->setParentItem(fenceBottomLine);
        }
        this->update();
    }

    if(plan->getLeftObject().getType()==NearestObjectsType::NEIGHBOUR)
    {
        NeighbourBorder* neighbourBorderLeft = new NeighbourBorder(plan->getLeftSideLine(),
                                                             plan->getLeftObject().getForbiddenAreaDirection());
        this->addItem(neighbourBorderLeft);
        QVector<RestrictedArea*> tmp = neighbourBorderLeft->getRestrictedAreas();
        for (auto var : tmp) {
            var->setParentItem(neighbourBorderLeft);
        }

        this->update();
    }

    if(plan->getRightObject().getType()==NearestObjectsType::NEIGHBOUR)
    {
        NeighbourBorder* neighbourBorderRight = new NeighbourBorder(plan->getRightSideLine(),
                                                             plan->getRightObject().getForbiddenAreaDirection());
        this->addItem(neighbourBorderRight);
        QVector<RestrictedArea*> tmp = neighbourBorderRight->getRestrictedAreas();
        for (auto var : tmp) {
            var->setParentItem(neighbourBorderRight);
        }
        this->update();
    }

    if(plan->getTopObject().getType()==NearestObjectsType::NEIGHBOUR)
    {
        NeighbourBorder* neighbourBorderTop = new NeighbourBorder(plan->getTopSideLine(),
                                                             plan->getTopObject().getForbiddenAreaDirection());
        this->addItem(neighbourBorderTop);
        QVector<RestrictedArea*> tmp = neighbourBorderTop->getRestrictedAreas();
        for (auto var : tmp) {
            var->setParentItem(neighbourBorderTop);
        }
        this->update();
    }

    if(plan->getBottomObject().getType()==NearestObjectsType::NEIGHBOUR)
    {
        NeighbourBorder* neighbourBorderBottom = new NeighbourBorder(plan->getBottomSideLine(),
                                                             plan->getBottomObject().getForbiddenAreaDirection());
        this->addItem(neighbourBorderBottom);
        QVector<RestrictedArea*> tmp = neighbourBorderBottom->getRestrictedAreas();
        for (auto var : tmp) {
            var->setParentItem(neighbourBorderBottom);
        }
        this->update();
    }



}

void GardenScene::setCollidingAreas()
{
    this->clearRestrictedAreas();

    foreach (auto item , this->items())
    {
        if(item->type()==BIG_TREE_TYPE)
        {
            foreach (auto otherItem , this->items())
            {
                if (otherItem->type()==RESTRICTED_AREA_TYPE)
                {
                    RestrictedArea* tmp = qgraphicsitem_cast<RestrictedArea*>(otherItem);
                    GardenFlags::Option flag = tmp->getFlag();
                    if(c_treeFlags.testFlag(flag))
                    {
                        if(otherItem->collidesWithItem(item))
                        {
                            tmp->setMode(displayMode::FILLED);
                        }
                    }
                }
             }
        }
        if(item->type()==MIDSIZE_TREE_TYPE)
        {
            foreach (auto otherItem , this->items())
            {
                if (otherItem->type()==RESTRICTED_AREA_TYPE)
                {
                    RestrictedArea* tmp = qgraphicsitem_cast<RestrictedArea*>(otherItem);
                    GardenFlags::Option flag = tmp->getFlag();
                    if(c_midsizeTreeFlags.testFlag(flag))
                    {
                        if(otherItem->collidesWithItem(item))
                        {
                            tmp->setMode(displayMode::FILLED);
                        }
                    }
                }
             }
        }
        if(item->type()==BUSH_TYPE)
        {
            foreach (auto otherItem , this->items())
            {
                if (otherItem->type()==RESTRICTED_AREA_TYPE)
                {
                    RestrictedArea* tmp = qgraphicsitem_cast<RestrictedArea*>(otherItem);
                    GardenFlags::Option flag = tmp->getFlag();
                    if(c_bushFlags.testFlag(flag))
                    {
                        if(otherItem->collidesWithItem(item))
                        {
                            tmp->setMode(displayMode::FILLED);
                        }
                    }
                }
             }
        }
        if(item->type()==HOUSE_TYPE)
        {
            foreach (auto otherItem , this->items())
            {
                if (otherItem->type()==RESTRICTED_AREA_TYPE && otherItem->parentItem()!=item)
                {
                    RestrictedArea* tmp = qgraphicsitem_cast<RestrictedArea*>(otherItem);
                    GardenFlags::Option flag = tmp->getFlag();
                    if(c_houseFlags.testFlag(flag))
                    {
                        if(otherItem->collidesWithItem(item))
                        {
                            tmp->setMode(displayMode::FILLED);
                        }
                    }
                }
             }
        }
        if(item->type()==SAUNA_TYPE)
        {
            foreach (auto otherItem , this->items())
            {
                if (otherItem->type()==RESTRICTED_AREA_TYPE && otherItem->parentItem()!=item)
                {
                    RestrictedArea* tmp = qgraphicsitem_cast<RestrictedArea*>(otherItem);
                    GardenFlags::Option flag = tmp->getFlag();
                    if(c_saunaFlags.testFlag(flag))
                    {
                        if(otherItem->collidesWithItem(item))
                        {
                            tmp->setMode(displayMode::FILLED);
                        }
                    }
                }
             }
        }
        if(item->type()==SHED_TYPE)
        {
            foreach (auto otherItem , this->items())
            {
                if (otherItem->type()==RESTRICTED_AREA_TYPE && otherItem->parentItem()!=item)
                {
                    RestrictedArea* tmp = qgraphicsitem_cast<RestrictedArea*>(otherItem);
                    GardenFlags::Option flag = tmp->getFlag();
                    if(c_shedFlags.testFlag(flag))
                    {
                        if(otherItem->collidesWithItem(item))
                        {
                            tmp->setMode(displayMode::FILLED);
                        }
                    }
                }
             }
        }
        if(item->type()==GLASSHOUSE_TYPE)
        {
            foreach (auto otherItem , this->items())
            {
                if (otherItem->type()==RESTRICTED_AREA_TYPE && otherItem->parentItem()!=item)
                {
                    RestrictedArea* tmp = qgraphicsitem_cast<RestrictedArea*>(otherItem);
                    GardenFlags::Option flag = tmp->getFlag();
                    if(c_glasshouseFlags.testFlag(flag))
                    {
                        if(otherItem->collidesWithItem(item))
                        {
                            tmp->setMode(displayMode::FILLED);
                        }
                    }
                }
             }
        }
        if(item->type()==HENHOUSE_TYPE)
        {
            foreach (auto otherItem , this->items())
            {
                if (otherItem->type()==RESTRICTED_AREA_TYPE && otherItem->parentItem()!=item)
                {
                    RestrictedArea* tmp = qgraphicsitem_cast<RestrictedArea*>(otherItem);
                    GardenFlags::Option flag = tmp->getFlag();
                    if(c_henhouseFlags.testFlag(flag))
                    {
                        if(otherItem->collidesWithItem(item))
                        {
                            tmp->setMode(displayMode::FILLED);
                        }
                    }
                }
             }
        }
        if(item->type()==WATERCLOSET_TYPE)
        {
            foreach (auto otherItem , this->items())
            {
                if (otherItem->type()==RESTRICTED_AREA_TYPE && otherItem->parentItem()!=item)
                {
                    RestrictedArea* tmp = qgraphicsitem_cast<RestrictedArea*>(otherItem);
                    GardenFlags::Option flag = tmp->getFlag();
                    if(c_waterclosetFlags.testFlag(flag))
                    {
                        if(otherItem->collidesWithItem(item))
                        {
                            tmp->setMode(displayMode::FILLED);
                        }
                    }
                }
             }
        }
        if(item->type()==COMPOST_TYPE)
        {
            foreach (auto otherItem , this->items())
            {
                if (otherItem->type()==RESTRICTED_AREA_TYPE && otherItem->parentItem()!=item)
                {
                    RestrictedArea* tmp = qgraphicsitem_cast<RestrictedArea*>(otherItem);
                    GardenFlags::Option flag = tmp->getFlag();
                    if(c_compostFlags.testFlag(flag))
                    {
                        if(otherItem->collidesWithItem(item))
                        {
                            tmp->setMode(displayMode::FILLED);
                        }
                    }
                }
             }
        }
        if(item->type()==WELL_TYPE)
        {
            foreach (auto otherItem , this->items())
            {
                if (otherItem->type()==RESTRICTED_AREA_TYPE && otherItem->parentItem()!=item)
                {
                    RestrictedArea* tmp = qgraphicsitem_cast<RestrictedArea*>(otherItem);
                    GardenFlags::Option flag = tmp->getFlag();
                    if(c_wellFlags.testFlag(flag))
                    {
                        if(otherItem->collidesWithItem(item))
                        {
                            tmp->setMode(displayMode::FILLED);
                        }
                    }
                }
             }
        }
    }
    this->update();
}

void GardenScene::clearRestrictedAreas()
{
    foreach (auto item , this->items())
    {
        if (item->type()==RESTRICTED_AREA_TYPE)
        {
            RestrictedArea* tmp = qgraphicsitem_cast<RestrictedArea*>(item);
            tmp->setMode(displayMode::EMPTY);
        }
        else if (item->graphicsEffect())
        {
            item->setGraphicsEffect(nullptr);
        }
    }
    this->update();
}

void GardenScene::slotSetGeneralPlan()
{

    GeneralPlan* plan = new GeneralPlan();
    DialogGeneralPlan* dialog = new DialogGeneralPlan();
    ///////////////////////////////////////////////////////////
    //Задаем параметры генерального плана через диалоговое окно
    ///////////////////////////////////////////////////////////
    if(dialog->exec()==QDialog::Accepted)
    {

        plan->setLeftObjectData(dialog->getLeftObjectDistance()*c_cellSize,
                                                    dialog->getLeftObjectType(),
                                                    dialog->getHeight()*c_cellSize);

        plan->setTopObjectData(dialog->getTopObjectDistance()*c_cellSize,
                                                    dialog->getTopObjectType(),
                                                    dialog->getWidth()*c_cellSize);
        plan->setRightObjectData(dialog->getRightObjectDistance()*c_cellSize,
                                                    dialog->getRightObjectType(),
                                                    dialog->getHeight()*c_cellSize);
        plan->setBottomObjectData(dialog->getBottomObjectDistance()*c_cellSize,
                                                    dialog->getBottomObjectType(),
                                                    dialog->getWidth()*c_cellSize);
        plan->setSizeGardenSite(QSize(dialog->getWidth()*c_cellSize,dialog->getHeight()*c_cellSize));
        plan->adjustSize();
        plan->setGardenCoordinates();


        m_scene_size = QRect(0,0,plan->getTotalSize().width(),plan->getTotalSize().height());
        this->setSceneRect(m_scene_size); //Размеры сцены
        this->addItem(plan);
    //////////////////////////////////////////////
    //Задаем параметры фиксированных запретных зон
    //////////////////////////////////////////////


    this->setFixedRestrictedAreas(plan);

    ////////////////////////////



    emit signalEnableGrid(true);
    emit signalEnableCommandMenu();
    emit signalShowMenu();
    ////////////////////////////////////////////////////////////////////


    }
}

void GardenScene::slotSetGrid(bool b)
{
    grid = b;
    this->update();
}

void GardenScene::slotSelectItems()
{
    this->clearRestrictedAreas();
    if(this->selectedItems().size())
    {
        emit signalEnableObjectTools();
        foreach (auto item , this->selectedItems())
        {
            if(item->type()==BIG_TREE_TYPE)
            {
                QGraphicsDropShadowEffect* effect = new QGraphicsDropShadowEffect();
                effect->setColor(Qt::black);
                item->setGraphicsEffect(effect);

                foreach (auto otherItem , this->items())
                {
                    if (otherItem->type()==RESTRICTED_AREA_TYPE)
                    {
                        RestrictedArea* tmp = qgraphicsitem_cast<RestrictedArea*>(otherItem);
                        GardenFlags::Option flag = tmp->getFlag();
                        if(c_treeFlags.testFlag(flag))
                        {
                            tmp->setMode(displayMode::BORDER);
                        }
                    }
                }
            }
            if(item->type()==MIDSIZE_TREE_TYPE)
            {
                QGraphicsDropShadowEffect* effect = new QGraphicsDropShadowEffect();
                effect->setColor(Qt::black);
                item->setGraphicsEffect(effect);

                foreach (auto otherItem , this->items())
                {
                    if (otherItem->type()==RESTRICTED_AREA_TYPE)
                    {
                        RestrictedArea* tmp = qgraphicsitem_cast<RestrictedArea*>(otherItem);
                        GardenFlags::Option flag = tmp->getFlag();
                        if(c_midsizeTreeFlags.testFlag(flag))
                        {
                            tmp->setMode(displayMode::BORDER);
                        }
                    }
                }
            }
            if(item->type()==BUSH_TYPE)
            {
                QGraphicsDropShadowEffect* effect = new QGraphicsDropShadowEffect();
                effect->setColor(Qt::black);
                item->setGraphicsEffect(effect);

                foreach (auto otherItem , this->items())
                {
                    if (otherItem->type()==RESTRICTED_AREA_TYPE)
                    {
                        RestrictedArea* tmp = qgraphicsitem_cast<RestrictedArea*>(otherItem);
                        GardenFlags::Option flag = tmp->getFlag();
                        if(c_bushFlags.testFlag(flag))
                        {
                            tmp->setMode(displayMode::BORDER);
                        }
                    }
                }
            }
            if(item->type()==HOUSE_TYPE)
            {
                QGraphicsDropShadowEffect* effect = new QGraphicsDropShadowEffect();
                effect->setColor(Qt::black);
                item->setGraphicsEffect(effect);

                foreach (auto otherItem , this->items())
                {
                    //Важно!! Проверка на пересечение с собственным child
                    if (otherItem->type()==RESTRICTED_AREA_TYPE && otherItem->parentItem()!=item)
                    {
                        RestrictedArea* tmp = qgraphicsitem_cast<RestrictedArea*>(otherItem);
                        GardenFlags::Option flag = tmp->getFlag();
                        if(c_houseFlags.testFlag(flag))
                        {
                            tmp->setMode(displayMode::BORDER);
                        }
                    }
                }
            }
            if(item->type()==SAUNA_TYPE)
            {
                QGraphicsDropShadowEffect* effect = new QGraphicsDropShadowEffect();
                effect->setColor(Qt::black);
                item->setGraphicsEffect(effect);

                foreach (auto otherItem , this->items())
                {
                    //Важно!! Проверка на пересечение с собственным child
                    if (otherItem->type()==RESTRICTED_AREA_TYPE && otherItem->parentItem()!=item)
                    {
                        RestrictedArea* tmp = qgraphicsitem_cast<RestrictedArea*>(otherItem);
                        GardenFlags::Option flag = tmp->getFlag();
                        if(c_saunaFlags.testFlag(flag))
                        {
                            tmp->setMode(displayMode::BORDER);
                        }
                    }
                }
            }
            if(item->type()==SHED_TYPE)
            {
                QGraphicsDropShadowEffect* effect = new QGraphicsDropShadowEffect();
                effect->setColor(Qt::black);
                item->setGraphicsEffect(effect);

                foreach (auto otherItem , this->items())
                {
                    //Важно!! Проверка на пересечение с собственным child
                    if (otherItem->type()==RESTRICTED_AREA_TYPE)
                    {
                        RestrictedArea* tmp = qgraphicsitem_cast<RestrictedArea*>(otherItem);
                        GardenFlags::Option flag = tmp->getFlag();
                        if(c_shedFlags.testFlag(flag))
                        {
                            tmp->setMode(displayMode::BORDER);
                        }
                    }
                }
            }
            if(item->type()==GLASSHOUSE_TYPE)
            {
                QGraphicsDropShadowEffect* effect = new QGraphicsDropShadowEffect();
                effect->setColor(Qt::black);
                item->setGraphicsEffect(effect);

                foreach (auto otherItem , this->items())
                {
                    //Важно!! Проверка на пересечение с собственным child
                    if (otherItem->type()==RESTRICTED_AREA_TYPE)
                    {
                        RestrictedArea* tmp = qgraphicsitem_cast<RestrictedArea*>(otherItem);
                        GardenFlags::Option flag = tmp->getFlag();
                        if(c_glasshouseFlags.testFlag(flag))
                        {
                            tmp->setMode(displayMode::BORDER);
                        }
                    }
                }
            }
            if(item->type()==HENHOUSE_TYPE)
            {
                QGraphicsDropShadowEffect* effect = new QGraphicsDropShadowEffect();
                effect->setColor(Qt::black);
                item->setGraphicsEffect(effect);

                foreach (auto otherItem , this->items())
                {
                    //Важно!! Проверка на пересечение с собственным child
                    if (otherItem->type()==RESTRICTED_AREA_TYPE)
                    {
                        RestrictedArea* tmp = qgraphicsitem_cast<RestrictedArea*>(otherItem);
                        GardenFlags::Option flag = tmp->getFlag();
                        if(c_henhouseFlags.testFlag(flag))
                        {
                            tmp->setMode(displayMode::BORDER);
                        }
                    }
                }
            }
            if(item->type()==WATERCLOSET_TYPE)
            {
                QGraphicsDropShadowEffect* effect = new QGraphicsDropShadowEffect();
                effect->setColor(Qt::black);
                item->setGraphicsEffect(effect);

                foreach (auto otherItem , this->items())
                {
                    //Важно!! Проверка на пересечение с собственным child
                    if (otherItem->type()==RESTRICTED_AREA_TYPE && otherItem->parentItem()!=item)
                    {
                        RestrictedArea* tmp = qgraphicsitem_cast<RestrictedArea*>(otherItem);
                        GardenFlags::Option flag = tmp->getFlag();
                        if(c_waterclosetFlags.testFlag(flag))
                        {
                            tmp->setMode(displayMode::BORDER);
                        }
                    }
                }
            }
            if(item->type()==COMPOST_TYPE)
            {
                QGraphicsDropShadowEffect* effect = new QGraphicsDropShadowEffect();
                effect->setColor(Qt::black);
                item->setGraphicsEffect(effect);

                foreach (auto otherItem , this->items())
                {
                    //Важно!! Проверка на пересечение с собственным child
                    if (otherItem->type()==RESTRICTED_AREA_TYPE && otherItem->parentItem()!=item)
                    {
                        RestrictedArea* tmp = qgraphicsitem_cast<RestrictedArea*>(otherItem);
                        GardenFlags::Option flag = tmp->getFlag();
                        if(c_compostFlags.testFlag(flag))
                        {
                            tmp->setMode(displayMode::BORDER);
                        }
                    }
                }
            }
            if(item->type()==WELL_TYPE)
            {
                QGraphicsDropShadowEffect* effect = new QGraphicsDropShadowEffect();
                effect->setColor(Qt::black);
                item->setGraphicsEffect(effect);

                foreach (auto otherItem , this->items())
                {
                    //Важно!! Проверка на пересечение с собственным child
                    if (otherItem->type()==RESTRICTED_AREA_TYPE && otherItem->parentItem()!=item)
                    {
                        RestrictedArea* tmp = qgraphicsitem_cast<RestrictedArea*>(otherItem);
                        GardenFlags::Option flag = tmp->getFlag();
                        if(c_wellFlags.testFlag(flag))
                        {
                            tmp->setMode(displayMode::BORDER);
                        }
                    }
                }
            }
        }
    }
    else
    {
        emit signalDisableObjectTools();
        this->setCollidingAreas();
    }
    this->update();
}

void GardenScene::slotRotationLeft()
{
    foreach (auto item , this->items())
    {
        if (item->isSelected())
        {
            item->setTransformOriginPoint(item->boundingRect().center());
            qreal angle = item->rotation();
            item->setRotation(angle-10);

        }

    }
    this->update();
}

void GardenScene::slotRotationRight()
{
    foreach (auto item , this->items())
    {
        if (item->isSelected())
        {
            item->setTransformOriginPoint(item->boundingRect().center());
            qreal angle = item->rotation();
            item->setRotation(angle+10);

        }

    }
    this->update();
}

void GardenScene::slotDeleteItem()
{
    foreach (auto item , this->items())
    {
        if (item->isSelected())
        {
            this->removeItem(item);
        }

    }
    this->update();
}



void GardenScene::drawBackground(QPainter *painter, const QRectF &rect)
{
    ////////////////////////////////////////
    /// Отрисовка фона
    ////////////////////////////////////////

    QBrush brush;
    brush.setStyle(Qt::SolidPattern);
    brush.setColor(QColor(202,252,202,255));
    painter->fillRect(rect,brush);

    ////////////////////////////////////////
    /// Отрисовка сетки
    ////////////////////////////////////////
    if(grid)
    {
        brush.setStyle(Qt::NoBrush);
        QPen pen(Qt::SolidLine); //Тип линии сетки
        pen.setColor(QColor(Qt::black));  //Цвет линии сетки 210,220,240,255
        pen.setWidth(0);
        painter->setBrush(brush);
        painter->setPen(pen);
        for (int i = 0; i <= m_scene_size.width(); i+=c_cellSize)
        {
            painter->drawLine(i,0,i,m_scene_size.height());
        }
        for (int i = 0; i <= m_scene_size.height(); i+=c_cellSize)
        {
            painter->drawLine(0,i,m_scene_size.width(),i);
        }
    }




}


void GardenScene::dragEnterEvent(QGraphicsSceneDragDropEvent *event)
{
    event->setAccepted(true);
    QList<QGraphicsItem*> itemList = this->items();
    if(event->mimeData()->text().toInt()==BIG_TREE_TYPE)
    {
       for (auto var : itemList)
       {
            if (var->type()==RESTRICTED_AREA_TYPE)
            {
                RestrictedArea* tmp = qgraphicsitem_cast<RestrictedArea*>(var);
                GardenFlags::Option flag = tmp->getFlag();
                if(c_treeFlags.testFlag(flag))
                {
                    tmp->setMode(displayMode::FILLED);
                }
            }
       }
    }
    else if(event->mimeData()->text().toInt()==MIDSIZE_TREE_TYPE)
    {
       for (auto var : itemList)
       {
            if (var->type()==RESTRICTED_AREA_TYPE)
            {
                RestrictedArea* tmp = qgraphicsitem_cast<RestrictedArea*>(var);
                GardenFlags::Option flag = tmp->getFlag();
                if(c_midsizeTreeFlags.testFlag(flag))
                {
                    tmp->setMode(displayMode::FILLED);
                }
            }
       }
    }
    else if(event->mimeData()->text().toInt()==BUSH_TYPE)
    {
       for (auto var : itemList)
       {
            if (var->type()==RESTRICTED_AREA_TYPE)
            {
                RestrictedArea* tmp = qgraphicsitem_cast<RestrictedArea*>(var);
                GardenFlags::Option flag = tmp->getFlag();
                if(c_bushFlags.testFlag(flag))
                {
                    tmp->setMode(displayMode::FILLED);
                }
            }
       }
    }
    else if(event->mimeData()->text().toInt()==HOUSE_TYPE)
    {
        for (auto var : itemList)
        {
             if (var->type()==RESTRICTED_AREA_TYPE)
             {
                 RestrictedArea* tmp = qgraphicsitem_cast<RestrictedArea*>(var);
                 GardenFlags::Option flag = tmp->getFlag();
                 if(c_houseFlags.testFlag(flag))
                 {
                     tmp->setMode(displayMode::FILLED);
                 }
             }
        }
    }
    else if(event->mimeData()->text().toInt()==SAUNA_TYPE)
    {
        for (auto var : itemList)
        {
             if (var->type()==RESTRICTED_AREA_TYPE)
             {
                 RestrictedArea* tmp = qgraphicsitem_cast<RestrictedArea*>(var);
                 GardenFlags::Option flag = tmp->getFlag();
                 if(c_saunaFlags.testFlag(flag))
                 {
                     tmp->setMode(displayMode::FILLED);
                 }
             }
        }
    }
    else if(event->mimeData()->text().toInt()==SHED_TYPE)
    {
        for (auto var : itemList)
        {
             if (var->type()==RESTRICTED_AREA_TYPE)
             {
                 RestrictedArea* tmp = qgraphicsitem_cast<RestrictedArea*>(var);
                 GardenFlags::Option flag = tmp->getFlag();
                 if(c_shedFlags.testFlag(flag))
                 {
                     tmp->setMode(displayMode::FILLED);
                 }
             }
        }
    }
    else if(event->mimeData()->text().toInt()==GLASSHOUSE_TYPE)
    {
        for (auto var : itemList)
        {
             if (var->type()==RESTRICTED_AREA_TYPE)
             {
                 RestrictedArea* tmp = qgraphicsitem_cast<RestrictedArea*>(var);
                 GardenFlags::Option flag = tmp->getFlag();
                 if(c_glasshouseFlags.testFlag(flag))
                 {
                     tmp->setMode(displayMode::FILLED);
                 }
             }
        }
    }
    else if(event->mimeData()->text().toInt()==HENHOUSE_TYPE)
    {
        for (auto var : itemList)
        {
             if (var->type()==RESTRICTED_AREA_TYPE)
             {
                 RestrictedArea* tmp = qgraphicsitem_cast<RestrictedArea*>(var);
                 GardenFlags::Option flag = tmp->getFlag();
                 if(c_henhouseFlags.testFlag(flag))
                 {
                     tmp->setMode(displayMode::FILLED);
                 }
             }
        }
    }
    else if(event->mimeData()->text().toInt()==WATERCLOSET_TYPE)
    {
        for (auto var : itemList)
        {
             if (var->type()==RESTRICTED_AREA_TYPE)
             {
                 RestrictedArea* tmp = qgraphicsitem_cast<RestrictedArea*>(var);
                 GardenFlags::Option flag = tmp->getFlag();
                 if(c_waterclosetFlags.testFlag(flag))
                 {
                     tmp->setMode(displayMode::FILLED);
                 }
             }
        }
    }
    else if(event->mimeData()->text().toInt()==COMPOST_TYPE)
    {
        for (auto var : itemList)
        {
             if (var->type()==RESTRICTED_AREA_TYPE)
             {
                 RestrictedArea* tmp = qgraphicsitem_cast<RestrictedArea*>(var);
                 GardenFlags::Option flag = tmp->getFlag();
                 if(c_compostFlags.testFlag(flag))
                 {
                     tmp->setMode(displayMode::FILLED);
                 }
             }
        }
    }
    else if(event->mimeData()->text().toInt()==WELL_TYPE)
    {
        for (auto var : itemList)
        {
             if (var->type()==RESTRICTED_AREA_TYPE)
             {
                 RestrictedArea* tmp = qgraphicsitem_cast<RestrictedArea*>(var);
                 GardenFlags::Option flag = tmp->getFlag();
                 if(c_wellFlags.testFlag(flag))
                 {
                     tmp->setMode(displayMode::FILLED);
                 }
             }
        }
    }
    this->update();
}


void GardenScene::dragMoveEvent(QGraphicsSceneDragDropEvent *event)
{
}


void GardenScene::dropEvent(QGraphicsSceneDragDropEvent *event)
{
    QList<QGraphicsItem*> itemList = this->items();
    if(event->mimeData()->text().toInt()==BIG_TREE_TYPE)
    {
       BigTree* tree = new BigTree();
       tree->setFlags(QGraphicsItem::ItemIsMovable | QGraphicsItem::ItemIsSelectable);
       this->addItem(tree);
       QPointF tmp = event->scenePos()-tree->getPoint();
       tree->setPos(tmp);
       this->clearRestrictedAreas();
       this->setCollidingAreas();
    }
    else if(event->mimeData()->text().toInt()==MIDSIZE_TREE_TYPE)
    {
       MidsizeTree* tree = new MidsizeTree();
       tree->setFlags(QGraphicsItem::ItemIsMovable | QGraphicsItem::ItemIsSelectable);
       this->addItem(tree);
       QPointF tmp = event->scenePos()-tree->getPoint();
       tree->setPos(tmp);
       this->clearRestrictedAreas();
       this->setCollidingAreas();
    }
    else if(event->mimeData()->text().toInt()==BUSH_TYPE)
    {
       Bush* bush = new Bush();
       bush->setFlags(QGraphicsItem::ItemIsMovable | QGraphicsItem::ItemIsSelectable);
       this->addItem(bush);
       QPointF tmp = event->scenePos()-bush->getPoint();
       bush->setPos(tmp);
       this->clearRestrictedAreas();
       this->setCollidingAreas();
    }

    else if(event->mimeData()->text().toInt()==HOUSE_TYPE)
    {
       House* house = new House();
       house->setFlags(QGraphicsItem::ItemIsMovable | QGraphicsItem::ItemIsSelectable);
       this->addItem(house);
       QPointF tmp = event->scenePos()-house->getPoint();
       house->setPos(tmp);
       QVector<RestrictedArea*> areas = house->getRestrictedAreas();
       for (auto var : areas)
       {
           var->setParentItem(house);
       }
       this->clearRestrictedAreas();
       this->setCollidingAreas();

    }
    else if(event->mimeData()->text().toInt()==SAUNA_TYPE)
    {
       Sauna* sauna = new Sauna();
       sauna->setFlags(QGraphicsItem::ItemIsMovable | QGraphicsItem::ItemIsSelectable);
       this->addItem(sauna);
       QPointF tmp = event->scenePos()-sauna->getPoint();
       sauna->setPos(tmp);
       QVector<RestrictedArea*> areas = sauna->getRestrictedAreas();
       for (auto var : areas)
       {
           var->setParentItem(sauna);
       }
       this->clearRestrictedAreas();
       this->setCollidingAreas();

    }
    else if(event->mimeData()->text().toInt()==SHED_TYPE)
    {
       Shed* shed = new Shed();
       shed->setFlags(QGraphicsItem::ItemIsMovable | QGraphicsItem::ItemIsSelectable);
       this->addItem(shed);
       QPointF tmp = event->scenePos()-shed->getPoint();
       shed->setPos(tmp);
       this->clearRestrictedAreas();
       this->setCollidingAreas();

    }
    else if(event->mimeData()->text().toInt()==GLASSHOUSE_TYPE)
    {
       Glasshouse* glasshouse = new Glasshouse();
       glasshouse->setFlags(QGraphicsItem::ItemIsMovable | QGraphicsItem::ItemIsSelectable);
       this->addItem(glasshouse);
       QPointF tmp = event->scenePos()-glasshouse->getPoint();
       glasshouse->setPos(tmp);
       this->clearRestrictedAreas();
       this->setCollidingAreas();

    }
    else if(event->mimeData()->text().toInt()==HENHOUSE_TYPE)
    {
       Henhouse* henhouse = new Henhouse();
       henhouse->setFlags(QGraphicsItem::ItemIsMovable | QGraphicsItem::ItemIsSelectable);
       this->addItem(henhouse);
       QPointF tmp = event->scenePos()-henhouse->getPoint();
       henhouse->setPos(tmp);
       this->clearRestrictedAreas();
       this->setCollidingAreas();

    }
    else if(event->mimeData()->text().toInt()==WATERCLOSET_TYPE)
    {
       Watercloset* wc = new Watercloset();
       wc->setFlags(QGraphicsItem::ItemIsMovable | QGraphicsItem::ItemIsSelectable);
       this->addItem(wc);
       QPointF tmp = event->scenePos()-wc->getPoint();
       wc->setPos(tmp);

       QVector<RestrictedArea*> areas = wc->getRestrictedAreas();
       for (auto var : areas)
       {
           var->setParentItem(wc);
       }
       this->clearRestrictedAreas();
       this->setCollidingAreas();

    }
    else if(event->mimeData()->text().toInt()==COMPOST_TYPE)
    {
       Compost* compost = new Compost();
       compost->setFlags(QGraphicsItem::ItemIsMovable | QGraphicsItem::ItemIsSelectable);
       this->addItem(compost);
       QPointF tmp = event->scenePos()-compost->getPoint();
       compost->setPos(tmp);

       QVector<RestrictedArea*> areas = compost->getRestrictedAreas();
       for (auto var : areas)
       {
           var->setParentItem(compost);
       }
       this->clearRestrictedAreas();
       this->setCollidingAreas();

    }
    else if(event->mimeData()->text().toInt()==WELL_TYPE)
    {
       Well* well = new Well();
       well->setFlags(QGraphicsItem::ItemIsMovable | QGraphicsItem::ItemIsSelectable);
       this->addItem(well);
       QPointF tmp = event->scenePos()-well->getPoint();
       well->setPos(tmp);

       QVector<RestrictedArea*> areas = well->getRestrictedAreas();
       for (auto var : areas)
       {
           var->setParentItem(well);
       }
       this->clearRestrictedAreas();
       this->setCollidingAreas();

    }
    this->update();
}


void GardenScene::dragLeaveEvent(QGraphicsSceneDragDropEvent *event)
{

    this->clearRestrictedAreas();
    this->setCollidingAreas();
    QGraphicsScene::dragLeaveEvent(event);
}
