#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);




    //Создаем сцену и связываем с представлением
    GardenScene* scene = new GardenScene();
    ui->gardenGraphicsView->setScene(scene);
    ui->gardenGraphicsView->setViewportUpdateMode(QGraphicsView::FullViewportUpdate);


    DragWidgetScene* objectsMenuScene = new DragWidgetScene();
    ui->objectsMenuGraphicsView->setScene(objectsMenuScene);
    ui->label->hide();
    ui->objectsMenuGraphicsView->hide();
    qDebug()<<ui->objectsMenuGraphicsView->viewport()->size();

    ui->action_rotateLeft->setDisabled(true);
    ui->action_rotateRight->setDisabled(true);
    ui->action_Delete->setDisabled(true);
    ui->action_zoomIn->setDisabled(true);
    ui->action_zoomOut->setDisabled(true);
    ui->action_print->setDisabled(true);
    ui->action_saveAs->setDisabled(true);
    ui->action_save->setDisabled(true);

    connect(scene,SIGNAL(signalEnableObjectTools()),this,SLOT(slotEnableObjectTools()));
    connect(scene,SIGNAL(signalDisableObjectTools()),this,SLOT(slotDisableObjectTools()));
    connect(scene,SIGNAL(signalEnableCommandMenu()),this,SLOT(slotEnableCommandMenu()));

    connect(ui->action_new,SIGNAL(triggered(bool)),scene,SLOT(slotSetGeneralPlan()));
    connect(ui->action_grid,SIGNAL(triggered(bool)),scene,SLOT(slotSetGrid(bool)));
    connect(scene,SIGNAL(signalEnableGrid(bool)),ui->action_grid,SLOT(setEnabled(bool)));
    connect(ui->action_rotateLeft,SIGNAL(triggered(bool)),scene,SLOT(slotRotationLeft()));
    connect(ui->action_rotateRight,SIGNAL(triggered(bool)),scene,SLOT(slotRotationRight()));
    connect(ui->action_Delete,SIGNAL(triggered(bool)),scene,SLOT(slotDeleteItem()));
    connect(scene,SIGNAL(signalShowMenu()),this,SLOT(slotShowMenu()));
    connect(ui->action_zoomIn,SIGNAL(triggered(bool)),this,SLOT(slotZoomIn()));
    connect(ui->action_zoomOut,SIGNAL(triggered(bool)),this,SLOT(slotZoomOut()));
    connect(ui->action_exit,SIGNAL(triggered(bool)),this, SLOT(slotExit()));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::slotShowMenu()
{
    ui->objectsMenuGraphicsView->show();
    ui->label->show();
}

void MainWindow::slotZoomIn()
{
    ui->gardenGraphicsView->scale(1.1,1.1);
}

void MainWindow::slotZoomOut()
{

    ui->gardenGraphicsView->scale(0.9,0.9);
}

void MainWindow::slotEnableObjectTools()
{
    ui->action_rotateLeft->setEnabled(true);
    ui->action_rotateRight->setEnabled(true);
    ui->action_Delete->setEnabled(true);
}

void MainWindow::slotDisableObjectTools()
{
    ui->action_rotateLeft->setDisabled(true);
    ui->action_rotateRight->setDisabled(true);
    ui->action_Delete->setDisabled(true);

}

void MainWindow::slotEnableCommandMenu()
{
    ui->action_zoomIn->setEnabled(true);
    ui->action_zoomOut->setEnabled(true);
    ui->action_print->setEnabled(true);
    ui->action_saveAs->setEnabled(true);
    ui->action_save->setEnabled(true);
}

void MainWindow::slotExit()
{
    this->close();
}



