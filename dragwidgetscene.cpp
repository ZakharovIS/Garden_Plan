#include "dragwidgetscene.h"

DragWidgetScene::DragWidgetScene(QWidget *parent) : QGraphicsScene(parent)
{
    m_scene_size = QRect(0,0,120,1500);
    this->setSceneRect(m_scene_size);
    QFont font("Segoe UI Black", 10);

    QGraphicsTextItem* textHigh = this->addText("Высокорослое",font);
    //textHigh->setPos();
    QGraphicsTextItem* textTree1 = this->addText("дерево",font);
    textTree1->setPos(0,20);
    BigTree* tree = new BigTree();
    tree->setPos(60 - tree->getPoint().x(),50);
    this->addItem(tree);

    QGraphicsTextItem* textMid = this->addText("Среднерослое",font);
    textMid->setPos(0,130);
    QGraphicsTextItem* textTree2 = this->addText("дерево",font);
    textTree2->setPos(0,150);
    MidsizeTree* tree2 = new MidsizeTree();
    tree2->setPos(60 - tree2->getPoint().x(),180);
    this->addItem(tree2);

    QGraphicsTextItem* textBush = this->addText("Кустарник",font);
    textBush->setPos(0,240);
    Bush* bush = new Bush();
    bush->setPos(60 - bush->getPoint().x(),270);
    this->addItem(bush);


    QGraphicsTextItem* textHouse = this->addText("Дом",font);
    textHouse->setPos(0,350);
    House* house = new House();
    this->addItem(house);
    house->setPos(60-house->getPoint().x(),390);

    QGraphicsTextItem* textSauna = this->addText("Баня",font);
    textSauna->setPos(0,520);
    Sauna* sauna = new Sauna();
    this->addItem(sauna);
    sauna->setPos(60-sauna->getPoint().x(),560);

    QGraphicsTextItem* textShed = this->addText("Гараж/сарай",font);
    textShed->setPos(0,630);
    Shed* shed = new Shed();
    this->addItem(shed);
    shed->setPos(60-shed->getPoint().x(),670);

    QGraphicsTextItem* textglasshouse = this->addText("Теплица",font);
    textglasshouse->setPos(0,730);
    Glasshouse* glasshouse = new Glasshouse();
    this->addItem(glasshouse);
    glasshouse->setPos(60-glasshouse->getPoint().x(),770);

    QGraphicsTextItem* texthenhouse = this->addText("Курятник",font);
    texthenhouse->setPos(0,830);
    Henhouse* henhouse = new Henhouse();
    this->addItem(henhouse);
    henhouse->setPos(60-henhouse->getPoint().x(),870);

    QGraphicsTextItem* textWC = this->addText("Уборная",font);
    textWC->setPos(0,940);
    Watercloset* watercloset = new Watercloset();
    this->addItem(watercloset);
    watercloset->setPos(60-watercloset->getPoint().x(),980);

    QGraphicsTextItem* textCompost = this->addText("Компостная яма",font);
    textCompost->setPos(0,1040);
    Compost* compost = new Compost();
    this->addItem(compost);
    compost->setPos(60-compost->getPoint().x(),1080);

    QGraphicsTextItem* textWell = this->addText("Колодец",font);
    textWell->setPos(0,1140);
    Well* well = new Well();
    this->addItem(well);
    well->setPos(60-well->getPoint().x(),1180);



}


void DragWidgetScene::mousePressEvent(QGraphicsSceneMouseEvent *event)
{
    currentItem = this->itemAt(event->scenePos(),QTransform());
    qDebug()<<event->scenePos();
    if(currentItem != nullptr)
    {
        qDebug()<<currentItem->type();
        m_dragStart = event->pos();
    }
    else QGraphicsScene::mousePressEvent(event);
}

void DragWidgetScene::mouseMoveEvent(QGraphicsSceneMouseEvent *event)
{
    if(currentItem != nullptr)
    {
        if( event->buttons() & Qt::LeftButton)
        {
                QDrag* drag = new QDrag( this );

                QMimeData* mimeData = new QMimeData;
                if(currentItem->type()==BIG_TREE_TYPE)
                {
                    BigTree* tmp = qgraphicsitem_cast<BigTree*>(currentItem);
                    drag->setHotSpot(tmp->getPoint());
                    QPixmap pixmap = tmp->getPixmap();
                    QString str = QString::number(currentItem->type());
                    mimeData->setText(str);
                    drag->setMimeData( mimeData );
                    drag->setPixmap( pixmap );
                }

                else if(currentItem->type()==MIDSIZE_TREE_TYPE)
                {
                    MidsizeTree* tmp = qgraphicsitem_cast<MidsizeTree*>(currentItem);
                    drag->setHotSpot(tmp->getPoint());
                    QPixmap pixmap = tmp->getPixmap();
                    QString str = QString::number(currentItem->type());
                    mimeData->setText(str);
                    drag->setMimeData( mimeData );
                    drag->setPixmap( pixmap );
                }
                else if(currentItem->type()==BUSH_TYPE)
                {
                    Bush* tmp = qgraphicsitem_cast<Bush*>(currentItem);
                    drag->setHotSpot(tmp->getPoint());
                    QPixmap pixmap = tmp->getPixmap();
                    QString str = QString::number(currentItem->type());
                    mimeData->setText(str);
                    drag->setMimeData( mimeData );
                    drag->setPixmap( pixmap );

                }

                else if(currentItem->type()==HOUSE_TYPE)
                {
                    House* tmp = qgraphicsitem_cast<House*>(currentItem);
                    drag->setHotSpot(tmp->getPoint());
                    QPixmap pixmap = tmp->getPixmap();
                    QString str = QString::number(currentItem->type());
                    mimeData->setText(str);
                    drag->setMimeData( mimeData );
                    drag->setPixmap( pixmap );
                }
                else if(currentItem->type()==SAUNA_TYPE)
                {
                    Sauna* tmp = qgraphicsitem_cast<Sauna*>(currentItem);
                    drag->setHotSpot(tmp->getPoint());
                    QPixmap pixmap = tmp->getPixmap();
                    QString str = QString::number(currentItem->type());
                    mimeData->setText(str);
                    drag->setMimeData( mimeData );
                    drag->setPixmap( pixmap );
                }
                else if(currentItem->type()==SHED_TYPE)
                {
                    Shed* tmp = qgraphicsitem_cast<Shed*>(currentItem);
                    drag->setHotSpot(tmp->getPoint());
                    QPixmap pixmap = tmp->getPixmap();
                    QString str = QString::number(currentItem->type());
                    mimeData->setText(str);
                    drag->setMimeData( mimeData );
                    drag->setPixmap( pixmap );
                }
                else if(currentItem->type()==GLASSHOUSE_TYPE)
                {
                    Glasshouse* tmp = qgraphicsitem_cast<Glasshouse*>(currentItem);
                    drag->setHotSpot(tmp->getPoint());
                    QPixmap pixmap = tmp->getPixmap();
                    QString str = QString::number(currentItem->type());
                    mimeData->setText(str);
                    drag->setMimeData( mimeData );
                    drag->setPixmap( pixmap );
                }
                else if(currentItem->type()==HENHOUSE_TYPE)
                {
                    Henhouse* tmp = qgraphicsitem_cast<Henhouse*>(currentItem);
                    drag->setHotSpot(tmp->getPoint());
                    QPixmap pixmap = tmp->getPixmap();
                    QString str = QString::number(currentItem->type());
                    mimeData->setText(str);
                    drag->setMimeData( mimeData );
                    drag->setPixmap( pixmap );
                }
                else if(currentItem->type()==WATERCLOSET_TYPE)
                {
                    Watercloset* tmp = qgraphicsitem_cast<Watercloset*>(currentItem);
                    drag->setHotSpot(tmp->getPoint());
                    QPixmap pixmap = tmp->getPixmap();
                    QString str = QString::number(currentItem->type());
                    mimeData->setText(str);
                    drag->setMimeData( mimeData );
                    drag->setPixmap( pixmap );
                }
                else if(currentItem->type()==COMPOST_TYPE)
                {
                    Compost* tmp = qgraphicsitem_cast<Compost*>(currentItem);
                    drag->setHotSpot(tmp->getPoint());
                    QPixmap pixmap = tmp->getPixmap();
                    QString str = QString::number(currentItem->type());
                    mimeData->setText(str);
                    drag->setMimeData( mimeData );
                    drag->setPixmap( pixmap );
                }
                else if(currentItem->type()==WELL_TYPE)
                {
                    Well* tmp = qgraphicsitem_cast<Well*>(currentItem);
                    drag->setHotSpot(tmp->getPoint());
                    QPixmap pixmap = tmp->getPixmap();
                    QString str = QString::number(currentItem->type());
                    mimeData->setText(str);
                    drag->setMimeData( mimeData );
                    drag->setPixmap( pixmap );
                }

                Qt::DropAction result = drag->exec( Qt::MoveAction );
                qDebug() << "Drop action result: " << result;

            }

    }

    else QGraphicsScene::mouseMoveEvent(event);
}

void DragWidgetScene::mouseReleaseEvent(QGraphicsSceneMouseEvent *event)
{
    QGraphicsScene::mouseReleaseEvent(event);
}


void DragWidgetScene::drawBackground(QPainter *painter, const QRectF &rect)
{
    QBrush brush;
    brush.setStyle(Qt::SolidPattern);
    brush.setColor(QColor(202,252,202,255));
    painter->fillRect(rect,brush);
}
