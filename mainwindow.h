#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "gardenscene.h"
#include "dialoggeneralplan.h"
#include "dragwidgetscene.h"
#include "gardenflags.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private:
    Ui::MainWindow *ui;

public slots:
    void slotShowMenu();    //Отображение панели объектов
    void slotZoomIn();      //Увеличение плана
    void slotZoomOut();     //Уменьшение плана
    void slotEnableObjectTools();   //Активация панели инструментов
    void slotDisableObjectTools();  //Дезактивация панели инструментов
    void slotEnableCommandMenu();   //Активация меню команд
    void slotExit();    //Выход

};
#endif // MAINWINDOW_H
