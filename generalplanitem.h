#ifndef GENERALPLANITEM_H
#define GENERALPLANITEM_H

#include <QWidget>
#include <QAbstractGraphicsShapeItem>

class GeneralPlanItem : public QGraphicsItem
{
    Q_OBJECT
public:
    explicit GeneralPlanItem(QWidget *parent = nullptr);

signals:

};

#endif // GENERALPLANITEM_H
