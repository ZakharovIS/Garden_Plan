/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *action_new;
    QAction *action_open;
    QAction *action_grid;
    QAction *action_save;
    QAction *action_saveAs;
    QAction *action_print;
    QAction *action_exit;
    QAction *action_rotateLeft;
    QAction *action_rotateRight;
    QAction *action_zoomIn;
    QAction *action_zoomOut;
    QAction *action_Delete;
    QWidget *centralwidget;
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QGraphicsView *objectsMenuGraphicsView;
    QHBoxLayout *horizontalLayout;
    QGraphicsView *gardenGraphicsView;
    QMenuBar *menubar;
    QMenu *menu;
    QMenu *menu_2;
    QMenu *menu_3;
    QMenu *menu_4;
    QStatusBar *statusbar;
    QToolBar *toolBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(861, 601);
        QPalette palette;
        QBrush brush(QColor(0, 0, 0, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush1(QColor(231, 231, 231, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Button, brush1);
        QBrush brush2(QColor(255, 255, 255, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Light, brush2);
        QBrush brush3(QColor(243, 243, 243, 255));
        brush3.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Midlight, brush3);
        QBrush brush4(QColor(115, 115, 115, 255));
        brush4.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Dark, brush4);
        QBrush brush5(QColor(154, 154, 154, 255));
        brush5.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Mid, brush5);
        palette.setBrush(QPalette::Active, QPalette::Text, brush);
        palette.setBrush(QPalette::Active, QPalette::BrightText, brush2);
        palette.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Active, QPalette::Base, brush2);
        palette.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette.setBrush(QPalette::Active, QPalette::Shadow, brush);
        palette.setBrush(QPalette::Active, QPalette::AlternateBase, brush3);
        QBrush brush6(QColor(255, 255, 220, 255));
        brush6.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::ToolTipBase, brush6);
        palette.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
        QBrush brush7(QColor(0, 0, 0, 128));
        brush7.setStyle(Qt::SolidPattern);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Active, QPalette::PlaceholderText, brush7);
#endif
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Light, brush2);
        palette.setBrush(QPalette::Inactive, QPalette::Midlight, brush3);
        palette.setBrush(QPalette::Inactive, QPalette::Dark, brush4);
        palette.setBrush(QPalette::Inactive, QPalette::Mid, brush5);
        palette.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette.setBrush(QPalette::Inactive, QPalette::BrightText, brush2);
        palette.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush2);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Shadow, brush);
        palette.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush3);
        palette.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush6);
        palette.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush7);
#endif
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Light, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::Midlight, brush3);
        palette.setBrush(QPalette::Disabled, QPalette::Dark, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Mid, brush5);
        palette.setBrush(QPalette::Disabled, QPalette::Text, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::BrightText, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::ButtonText, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Shadow, brush);
        palette.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush6);
        palette.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush7);
#endif
        MainWindow->setPalette(palette);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/Icons/Images/icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        MainWindow->setWindowIcon(icon);
        action_new = new QAction(MainWindow);
        action_new->setObjectName(QString::fromUtf8("action_new"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/Icons/Images/blank-file.png"), QSize(), QIcon::Normal, QIcon::Off);
        action_new->setIcon(icon1);
        action_open = new QAction(MainWindow);
        action_open->setObjectName(QString::fromUtf8("action_open"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/Icons/Images/open-folder-1.png"), QSize(), QIcon::Normal, QIcon::Off);
        action_open->setIcon(icon2);
        action_grid = new QAction(MainWindow);
        action_grid->setObjectName(QString::fromUtf8("action_grid"));
        action_grid->setCheckable(true);
        action_grid->setChecked(true);
        action_grid->setEnabled(false);
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/Icons/Images/grid.png"), QSize(), QIcon::Normal, QIcon::Off);
        action_grid->setIcon(icon3);
        action_save = new QAction(MainWindow);
        action_save->setObjectName(QString::fromUtf8("action_save"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/Icons/Images/hard-drive.png"), QSize(), QIcon::Normal, QIcon::Off);
        action_save->setIcon(icon4);
        action_saveAs = new QAction(MainWindow);
        action_saveAs->setObjectName(QString::fromUtf8("action_saveAs"));
        action_print = new QAction(MainWindow);
        action_print->setObjectName(QString::fromUtf8("action_print"));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/Icons/Images/printer.png"), QSize(), QIcon::Normal, QIcon::Off);
        action_print->setIcon(icon5);
        action_exit = new QAction(MainWindow);
        action_exit->setObjectName(QString::fromUtf8("action_exit"));
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/Icons/Images/close.png"), QSize(), QIcon::Normal, QIcon::Off);
        action_exit->setIcon(icon6);
        action_rotateLeft = new QAction(MainWindow);
        action_rotateLeft->setObjectName(QString::fromUtf8("action_rotateLeft"));
        QIcon icon7;
        icon7.addFile(QString::fromUtf8(":/Icons/Images/rotate-left.png"), QSize(), QIcon::Normal, QIcon::Off);
        action_rotateLeft->setIcon(icon7);
        action_rotateRight = new QAction(MainWindow);
        action_rotateRight->setObjectName(QString::fromUtf8("action_rotateRight"));
        QIcon icon8;
        icon8.addFile(QString::fromUtf8(":/Icons/Images/rotate-to-right.png"), QSize(), QIcon::Normal, QIcon::Off);
        action_rotateRight->setIcon(icon8);
        action_zoomIn = new QAction(MainWindow);
        action_zoomIn->setObjectName(QString::fromUtf8("action_zoomIn"));
        QIcon icon9;
        icon9.addFile(QString::fromUtf8(":/Icons/Images/zoom-in.png"), QSize(), QIcon::Normal, QIcon::Off);
        action_zoomIn->setIcon(icon9);
        action_zoomOut = new QAction(MainWindow);
        action_zoomOut->setObjectName(QString::fromUtf8("action_zoomOut"));
        QIcon icon10;
        icon10.addFile(QString::fromUtf8(":/Icons/Images/zoom-out.png"), QSize(), QIcon::Normal, QIcon::Off);
        action_zoomOut->setIcon(icon10);
        action_Delete = new QAction(MainWindow);
        action_Delete->setObjectName(QString::fromUtf8("action_Delete"));
        QIcon icon11;
        icon11.addFile(QString::fromUtf8(":/Icons/Images/trash.png"), QSize(), QIcon::Normal, QIcon::Off);
        action_Delete->setIcon(icon11);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        horizontalLayout_2 = new QHBoxLayout(centralwidget);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font;
        font.setFamily(QString::fromUtf8("Segoe UI Black"));
        font.setPointSize(12);
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);
        label->setAlignment(Qt::AlignBottom|Qt::AlignHCenter);

        verticalLayout->addWidget(label);

        objectsMenuGraphicsView = new QGraphicsView(centralwidget);
        objectsMenuGraphicsView->setObjectName(QString::fromUtf8("objectsMenuGraphicsView"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(objectsMenuGraphicsView->sizePolicy().hasHeightForWidth());
        objectsMenuGraphicsView->setSizePolicy(sizePolicy);
        objectsMenuGraphicsView->setMinimumSize(QSize(200, 0));
        objectsMenuGraphicsView->setMaximumSize(QSize(200, 16777215));
        objectsMenuGraphicsView->setSizeAdjustPolicy(QAbstractScrollArea::AdjustToContentsOnFirstShow);
        objectsMenuGraphicsView->setAlignment(Qt::AlignHCenter|Qt::AlignTop);

        verticalLayout->addWidget(objectsMenuGraphicsView);


        horizontalLayout_2->addLayout(verticalLayout);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        gardenGraphicsView = new QGraphicsView(centralwidget);
        gardenGraphicsView->setObjectName(QString::fromUtf8("gardenGraphicsView"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(gardenGraphicsView->sizePolicy().hasHeightForWidth());
        gardenGraphicsView->setSizePolicy(sizePolicy1);
        gardenGraphicsView->setSizeAdjustPolicy(QAbstractScrollArea::AdjustIgnored);
        gardenGraphicsView->setViewportUpdateMode(QGraphicsView::FullViewportUpdate);

        horizontalLayout->addWidget(gardenGraphicsView);


        horizontalLayout_2->addLayout(horizontalLayout);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 861, 26));
        menu = new QMenu(menubar);
        menu->setObjectName(QString::fromUtf8("menu"));
        menu_2 = new QMenu(menubar);
        menu_2->setObjectName(QString::fromUtf8("menu_2"));
        menu_3 = new QMenu(menubar);
        menu_3->setObjectName(QString::fromUtf8("menu_3"));
        menu_4 = new QMenu(menubar);
        menu_4->setObjectName(QString::fromUtf8("menu_4"));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);
        toolBar = new QToolBar(MainWindow);
        toolBar->setObjectName(QString::fromUtf8("toolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, toolBar);

        menubar->addAction(menu->menuAction());
        menubar->addAction(menu_2->menuAction());
        menubar->addAction(menu_3->menuAction());
        menubar->addAction(menu_4->menuAction());
        menu->addAction(action_new);
        menu->addAction(action_open);
        menu->addAction(action_save);
        menu->addAction(action_saveAs);
        menu->addAction(action_print);
        menu->addAction(action_exit);
        menu_2->addAction(action_grid);
        menu_2->addAction(action_zoomIn);
        menu_2->addAction(action_zoomOut);
        menu_3->addAction(action_rotateLeft);
        menu_3->addAction(action_rotateRight);
        menu_3->addAction(action_Delete);
        toolBar->addAction(action_new);
        toolBar->addAction(action_open);
        toolBar->addAction(action_save);
        toolBar->addAction(action_print);
        toolBar->addAction(action_exit);
        toolBar->addSeparator();
        toolBar->addSeparator();
        toolBar->addAction(action_rotateLeft);
        toolBar->addAction(action_rotateRight);
        toolBar->addAction(action_Delete);
        toolBar->addSeparator();
        toolBar->addAction(action_zoomIn);
        toolBar->addAction(action_zoomOut);
        toolBar->addAction(action_grid);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "\320\237\320\273\320\260\320\275\320\270\321\200\320\276\320\262\321\211\320\270\320\272 \321\201\320\260\320\264\320\276\320\262\320\276\320\263\320\276 \321\203\321\207\320\260\321\201\321\202\320\272\320\260", nullptr));
        action_new->setText(QCoreApplication::translate("MainWindow", "\320\235\320\276\320\262\321\213\320\271", nullptr));
        action_open->setText(QCoreApplication::translate("MainWindow", "\320\236\321\202\320\272\321\200\321\213\321\202\321\214", nullptr));
        action_grid->setText(QCoreApplication::translate("MainWindow", "\320\241\320\265\321\202\320\272\320\260", nullptr));
        action_save->setText(QCoreApplication::translate("MainWindow", "\320\241\320\276\321\205\321\200\320\260\320\275\320\270\321\202\321\214", nullptr));
        action_saveAs->setText(QCoreApplication::translate("MainWindow", "\320\241\320\276\321\205\321\200\320\260\320\275\320\270\321\202\321\214 \320\272\320\260\320\272...", nullptr));
        action_print->setText(QCoreApplication::translate("MainWindow", "\320\237\320\265\321\207\320\260\321\202\321\214", nullptr));
        action_exit->setText(QCoreApplication::translate("MainWindow", "\320\222\321\213\321\205\320\276\320\264", nullptr));
        action_rotateLeft->setText(QCoreApplication::translate("MainWindow", "\320\237\320\276\320\262\320\276\321\200\320\276\321\202 \320\262\320\273\320\265\320\262\320\276", nullptr));
        action_rotateRight->setText(QCoreApplication::translate("MainWindow", "\320\237\320\276\320\262\320\276\321\200\320\276\321\202 \320\262\320\277\321\200\320\260\320\262\320\276", nullptr));
        action_zoomIn->setText(QCoreApplication::translate("MainWindow", "\320\243\320\262\320\265\320\273\320\270\321\207\320\270\321\202\321\214", nullptr));
        action_zoomOut->setText(QCoreApplication::translate("MainWindow", "\320\243\320\274\320\265\320\275\321\214\321\210\320\270\321\202\321\214", nullptr));
        action_Delete->setText(QCoreApplication::translate("MainWindow", "\320\243\320\264\320\260\320\273\320\270\321\202\321\214", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "\320\236\320\261\321\212\320\265\320\272\321\202\321\213", nullptr));
        menu->setTitle(QCoreApplication::translate("MainWindow", "\320\244\320\260\320\271\320\273", nullptr));
        menu_2->setTitle(QCoreApplication::translate("MainWindow", "\320\237\320\260\321\200\320\260\320\274\320\265\321\202\321\200\321\213", nullptr));
        menu_3->setTitle(QCoreApplication::translate("MainWindow", "\320\224\320\265\320\271\321\201\321\202\320\262\320\270\321\217", nullptr));
        menu_4->setTitle(QCoreApplication::translate("MainWindow", "\320\236 \320\277\321\200\320\276\320\263\321\200\320\260\320\274\320\274\320\265", nullptr));
        toolBar->setWindowTitle(QCoreApplication::translate("MainWindow", "toolBar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
