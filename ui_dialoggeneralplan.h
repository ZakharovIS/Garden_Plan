/********************************************************************************
** Form generated from reading UI file 'dialoggeneralplan.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGGENERALPLAN_H
#define UI_DIALOGGENERALPLAN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_DialogGeneralPlan
{
public:
    QVBoxLayout *verticalLayout_10;
    QVBoxLayout *verticalLayout_9;
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout_7;
    QComboBox *CB_Top_Neighbour;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_3;
    QSpinBox *SB_RedLineDistanceTop;
    QVBoxLayout *verticalLayout_6;
    QComboBox *CB_Left_Neighbour;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QSpinBox *SB_RedLineDistanceLeft;
    QFrame *frame;
    QVBoxLayout *verticalLayout_8;
    QComboBox *CB_Right_Neighbour;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_4;
    QSpinBox *SB_RedLineDistanceRight;
    QVBoxLayout *verticalLayout_5;
    QComboBox *CB_Bottom_Neighbour;
    QVBoxLayout *verticalLayout_4;
    QLabel *label_2;
    QSpinBox *SB_RedLineDistanceBottom;
    QFrame *line;
    QLabel *label_7;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QLabel *label_5;
    QSpinBox *SB_Width;
    QLabel *label_6;
    QSpinBox *SB_Height;
    QSpacerItem *horizontalSpacer_2;
    QFrame *line_2;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *DialogGeneralPlan)
    {
        if (DialogGeneralPlan->objectName().isEmpty())
            DialogGeneralPlan->setObjectName(QString::fromUtf8("DialogGeneralPlan"));
        DialogGeneralPlan->resize(571, 415);
        verticalLayout_10 = new QVBoxLayout(DialogGeneralPlan);
        verticalLayout_10->setObjectName(QString::fromUtf8("verticalLayout_10"));
        verticalLayout_9 = new QVBoxLayout();
        verticalLayout_9->setObjectName(QString::fromUtf8("verticalLayout_9"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        verticalLayout_7 = new QVBoxLayout();
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
        CB_Top_Neighbour = new QComboBox(DialogGeneralPlan);
        CB_Top_Neighbour->setObjectName(QString::fromUtf8("CB_Top_Neighbour"));

        verticalLayout_7->addWidget(CB_Top_Neighbour);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        label_3 = new QLabel(DialogGeneralPlan);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        verticalLayout_2->addWidget(label_3);

        SB_RedLineDistanceTop = new QSpinBox(DialogGeneralPlan);
        SB_RedLineDistanceTop->setObjectName(QString::fromUtf8("SB_RedLineDistanceTop"));

        verticalLayout_2->addWidget(SB_RedLineDistanceTop);


        verticalLayout_7->addLayout(verticalLayout_2);


        gridLayout->addLayout(verticalLayout_7, 0, 1, 1, 1);

        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        CB_Left_Neighbour = new QComboBox(DialogGeneralPlan);
        CB_Left_Neighbour->setObjectName(QString::fromUtf8("CB_Left_Neighbour"));

        verticalLayout_6->addWidget(CB_Left_Neighbour);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label = new QLabel(DialogGeneralPlan);
        label->setObjectName(QString::fromUtf8("label"));

        verticalLayout->addWidget(label);

        SB_RedLineDistanceLeft = new QSpinBox(DialogGeneralPlan);
        SB_RedLineDistanceLeft->setObjectName(QString::fromUtf8("SB_RedLineDistanceLeft"));

        verticalLayout->addWidget(SB_RedLineDistanceLeft);


        verticalLayout_6->addLayout(verticalLayout);


        gridLayout->addLayout(verticalLayout_6, 1, 0, 1, 1);

        frame = new QFrame(DialogGeneralPlan);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);

        gridLayout->addWidget(frame, 1, 1, 1, 1);

        verticalLayout_8 = new QVBoxLayout();
        verticalLayout_8->setObjectName(QString::fromUtf8("verticalLayout_8"));
        CB_Right_Neighbour = new QComboBox(DialogGeneralPlan);
        CB_Right_Neighbour->setObjectName(QString::fromUtf8("CB_Right_Neighbour"));

        verticalLayout_8->addWidget(CB_Right_Neighbour);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        label_4 = new QLabel(DialogGeneralPlan);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        verticalLayout_3->addWidget(label_4);

        SB_RedLineDistanceRight = new QSpinBox(DialogGeneralPlan);
        SB_RedLineDistanceRight->setObjectName(QString::fromUtf8("SB_RedLineDistanceRight"));

        verticalLayout_3->addWidget(SB_RedLineDistanceRight);


        verticalLayout_8->addLayout(verticalLayout_3);


        gridLayout->addLayout(verticalLayout_8, 1, 2, 1, 1);

        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        CB_Bottom_Neighbour = new QComboBox(DialogGeneralPlan);
        CB_Bottom_Neighbour->setObjectName(QString::fromUtf8("CB_Bottom_Neighbour"));

        verticalLayout_5->addWidget(CB_Bottom_Neighbour);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        label_2 = new QLabel(DialogGeneralPlan);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        verticalLayout_4->addWidget(label_2);

        SB_RedLineDistanceBottom = new QSpinBox(DialogGeneralPlan);
        SB_RedLineDistanceBottom->setObjectName(QString::fromUtf8("SB_RedLineDistanceBottom"));

        verticalLayout_4->addWidget(SB_RedLineDistanceBottom);


        verticalLayout_5->addLayout(verticalLayout_4);


        gridLayout->addLayout(verticalLayout_5, 2, 1, 1, 1);


        verticalLayout_9->addLayout(gridLayout);

        line = new QFrame(DialogGeneralPlan);
        line->setObjectName(QString::fromUtf8("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        verticalLayout_9->addWidget(line);

        label_7 = new QLabel(DialogGeneralPlan);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setAlignment(Qt::AlignCenter);

        verticalLayout_9->addWidget(label_7);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        label_5 = new QLabel(DialogGeneralPlan);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        horizontalLayout->addWidget(label_5);

        SB_Width = new QSpinBox(DialogGeneralPlan);
        SB_Width->setObjectName(QString::fromUtf8("SB_Width"));
        SB_Width->setMinimum(20);
        SB_Width->setMaximum(50);

        horizontalLayout->addWidget(SB_Width);

        label_6 = new QLabel(DialogGeneralPlan);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        horizontalLayout->addWidget(label_6);

        SB_Height = new QSpinBox(DialogGeneralPlan);
        SB_Height->setObjectName(QString::fromUtf8("SB_Height"));
        SB_Height->setMinimum(20);
        SB_Height->setMaximum(50);
        SB_Height->setValue(50);

        horizontalLayout->addWidget(SB_Height);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);


        verticalLayout_9->addLayout(horizontalLayout);

        line_2 = new QFrame(DialogGeneralPlan);
        line_2->setObjectName(QString::fromUtf8("line_2"));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);

        verticalLayout_9->addWidget(line_2);

        buttonBox = new QDialogButtonBox(DialogGeneralPlan);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout_9->addWidget(buttonBox);


        verticalLayout_10->addLayout(verticalLayout_9);


        retranslateUi(DialogGeneralPlan);
        QObject::connect(buttonBox, SIGNAL(accepted()), DialogGeneralPlan, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), DialogGeneralPlan, SLOT(reject()));

        QMetaObject::connectSlotsByName(DialogGeneralPlan);
    } // setupUi

    void retranslateUi(QDialog *DialogGeneralPlan)
    {
        DialogGeneralPlan->setWindowTitle(QCoreApplication::translate("DialogGeneralPlan", "\320\240\320\260\320\267\320\274\320\265\321\200\321\213 \321\203\321\207\320\260\321\201\321\202\320\272\320\260", nullptr));
        label_3->setText(QCoreApplication::translate("DialogGeneralPlan", "\320\240\320\260\321\201\321\201\321\202\320\276\321\217\320\275\320\270\320\265 \320\264\320\276 \320\272\321\200\320\260\321\201\320\275\320\276\320\271 \320\273\320\270\320\275\320\270\320\270", nullptr));
        label->setText(QCoreApplication::translate("DialogGeneralPlan", "\320\240\320\260\321\201\321\201\321\202\320\276\321\217\320\275\320\270\320\265 \320\264\320\276 \320\272\321\200\320\260\321\201\320\275\320\276\320\271 \320\273\320\270\320\275\320\270\320\270", nullptr));
        label_4->setText(QCoreApplication::translate("DialogGeneralPlan", "\320\240\320\260\321\201\321\201\321\202\320\276\321\217\320\275\320\270\320\265 \320\264\320\276 \320\272\321\200\320\260\321\201\320\275\320\276\320\271 \320\273\320\270\320\275\320\270\320\270", nullptr));
        label_2->setText(QCoreApplication::translate("DialogGeneralPlan", "\320\240\320\260\321\201\321\201\321\202\320\276\321\217\320\275\320\270\320\265 \320\264\320\276 \320\272\321\200\320\260\321\201\320\275\320\276\320\271 \320\273\320\270\320\275\320\270\320\270", nullptr));
        label_7->setText(QCoreApplication::translate("DialogGeneralPlan", "\320\240\320\260\320\267\320\274\320\265\321\200\321\213 \321\203\321\207\320\260\321\201\321\202\320\272\320\260", nullptr));
        label_5->setText(QCoreApplication::translate("DialogGeneralPlan", "\320\224\320\273\320\270\320\275\320\260", nullptr));
        label_6->setText(QCoreApplication::translate("DialogGeneralPlan", "\320\250\320\270\321\200\320\270\320\275\320\260", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DialogGeneralPlan: public Ui_DialogGeneralPlan {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGGENERALPLAN_H
