#ifndef DIALOGGENERALPLAN_H
#define DIALOGGENERALPLAN_H

#include <QDialog>

namespace Ui {
class DialogGeneralPlan;
}

class DialogGeneralPlan : public QDialog
{
    Q_OBJECT
    uint m_width;
    uint m_height;
    uint m_left_object_type;
    uint m_left_object_distance;
    uint m_top_object_type;
    uint m_top_object_distance;
    uint m_right_object_type;
    uint m_right_object_distance;
    uint m_bottom_object_type;
    uint m_bottom_object_distance;

public:
    explicit DialogGeneralPlan(QWidget *parent = nullptr);
    ~DialogGeneralPlan();

private:
    Ui::DialogGeneralPlan *ui;
public slots:
    void slotSetWidth(int);
    void slotSetHeight(int);
    void slotSetLeftObjectType(int);
    void slotSetLeftObjectDistance(int);
    void slotSetTopObjectType(int);
    void slotSetTopObjectDistance(int);
    void slotSetRightObjectType(int);
    void slotSetRightObjectDistance(int);
    void slotSetBottomObjectType(int);
    void slotSetBottomObjectDistance(int);

    int getWidth();
    int getHeight();
    int getLeftObjectType();
    int getLeftObjectDistance();
    int getTopObjectType();
    int getTopObjectDistance();
    int getRightObjectType();
    int getRightObjectDistance();
    int getBottomObjectType();
    int getBottomObjectDistance();

};

#endif // DIALOGGENERALPLAN_H
