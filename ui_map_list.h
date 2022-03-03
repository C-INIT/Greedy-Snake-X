/********************************************************************************
** Form generated from reading UI file 'map_list.ui'
**
** Created by: Qt User Interface Compiler version 5.14.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAP_LIST_H
#define UI_MAP_LIST_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include <map.h>

QT_BEGIN_NAMESPACE

class Ui_Map_List
{
public:
    QWidget *verticalLayoutWidget;
    QVBoxLayout *HeadContainer;
    QLabel *label;
    QListWidget *MapList;
    QFormLayout *formLayout;
    QLabel *Label;
    QCheckBox *isFixed;
    QPushButton *StartButton;
    QPushButton *DesignButton;
    QPushButton *CreateButton;
    QPushButton *RemoveButton;
    QPushButton *HelpButton;
    QPushButton *BackButton;
    MapView *Map;

    void setupUi(QWidget *Map_List)
    {
        if (Map_List->objectName().isEmpty())
            Map_List->setObjectName(QString::fromUtf8("Map_List"));
        Map_List->resize(820, 620);
        verticalLayoutWidget = new QWidget(Map_List);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(0, 0, 821, 621));
        HeadContainer = new QVBoxLayout(verticalLayoutWidget);
        HeadContainer->setSpacing(20);
        HeadContainer->setObjectName(QString::fromUtf8("HeadContainer"));
        HeadContainer->setContentsMargins(620, 10, 10, 10);
        label = new QLabel(verticalLayoutWidget);
        label->setObjectName(QString::fromUtf8("label"));

        HeadContainer->addWidget(label);

        MapList = new QListWidget(verticalLayoutWidget);
        MapList->setObjectName(QString::fromUtf8("MapList"));
        MapList->setStyleSheet(QString::fromUtf8("background-color: qradialgradient(spread:pad, cx:0.5, cy:0.5, radius:0.5, fx:0.5, fy:0.5, stop:0 rgba(255, 235, 235, 206), stop:0.35 rgba(255, 188, 188, 80), stop:0.4 rgba(255, 162, 162, 80), stop:0.425 rgba(255, 132, 132, 156), stop:0.44 rgba(252, 128, 128, 80), stop:1 rgba(255, 255, 255, 0));"));

        HeadContainer->addWidget(MapList);

        formLayout = new QFormLayout();
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        Label = new QLabel(verticalLayoutWidget);
        Label->setObjectName(QString::fromUtf8("Label"));

        formLayout->setWidget(0, QFormLayout::LabelRole, Label);

        isFixed = new QCheckBox(verticalLayoutWidget);
        isFixed->setObjectName(QString::fromUtf8("isFixed"));
        isFixed->setEnabled(false);

        formLayout->setWidget(0, QFormLayout::FieldRole, isFixed);


        HeadContainer->addLayout(formLayout);

        StartButton = new QPushButton(verticalLayoutWidget);
        StartButton->setObjectName(QString::fromUtf8("StartButton"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(StartButton->sizePolicy().hasHeightForWidth());
        StartButton->setSizePolicy(sizePolicy);
        StartButton->setMinimumSize(QSize(0, 0));
        StartButton->setStyleSheet(QString::fromUtf8("background-color: qconicalgradient(cx:0, cy:0, angle:135, stop:0 rgba(255, 255, 0, 69), stop:0.375 rgba(255, 255, 0, 69), stop:0.423533 rgba(251, 255, 0, 145), stop:0.45 rgba(247, 255, 0, 208), stop:0.477581 rgba(255, 244, 71, 130), stop:0.518717 rgba(255, 218, 71, 130), stop:0.55 rgba(255, 255, 0, 255), stop:0.57754 rgba(255, 203, 0, 130), stop:0.625 rgba(255, 255, 0, 69), stop:1 rgba(255, 255, 0, 69));"));

        HeadContainer->addWidget(StartButton);

        DesignButton = new QPushButton(verticalLayoutWidget);
        DesignButton->setObjectName(QString::fromUtf8("DesignButton"));
        sizePolicy.setHeightForWidth(DesignButton->sizePolicy().hasHeightForWidth());
        DesignButton->setSizePolicy(sizePolicy);
        DesignButton->setMinimumSize(QSize(0, 0));
        DesignButton->setStyleSheet(QString::fromUtf8("background-color: qradialgradient(spread:pad, cx:0.5, cy:0.5, radius:0.5, fx:0.5, fy:0.5, stop:0 rgba(255, 235, 235, 206), stop:0.35 rgba(255, 188, 188, 150), stop:0.4 rgba(255, 162, 162, 150), stop:0.425 rgba(255, 132, 132, 150), stop:0.44 rgba(252, 128, 128, 150), stop:1 rgba(255, 255, 255, 100));"));

        HeadContainer->addWidget(DesignButton);

        CreateButton = new QPushButton(verticalLayoutWidget);
        CreateButton->setObjectName(QString::fromUtf8("CreateButton"));
        sizePolicy.setHeightForWidth(CreateButton->sizePolicy().hasHeightForWidth());
        CreateButton->setSizePolicy(sizePolicy);
        CreateButton->setMinimumSize(QSize(0, 0));
        CreateButton->setStyleSheet(QString::fromUtf8("background-color: qradialgradient(spread:pad, cx:0.5, cy:0.5, radius:0.5, fx:0.5, fy:0.5, stop:0 rgba(255, 235, 235, 206), stop:0.35 rgba(255, 188, 188, 150), stop:0.4 rgba(255, 162, 162, 150), stop:0.425 rgba(255, 132, 132, 150), stop:0.44 rgba(252, 128, 128, 150), stop:1 rgba(255, 255, 255, 100));"));

        HeadContainer->addWidget(CreateButton);

        RemoveButton = new QPushButton(verticalLayoutWidget);
        RemoveButton->setObjectName(QString::fromUtf8("RemoveButton"));
        sizePolicy.setHeightForWidth(RemoveButton->sizePolicy().hasHeightForWidth());
        RemoveButton->setSizePolicy(sizePolicy);
        RemoveButton->setMinimumSize(QSize(0, 0));
        RemoveButton->setStyleSheet(QString::fromUtf8("background-color: qradialgradient(spread:pad, cx:0.5, cy:0.5, radius:0.5, fx:0.5, fy:0.5, stop:0 rgba(255, 235, 235, 206), stop:0.35 rgba(255, 188, 188, 150), stop:0.4 rgba(255, 162, 162, 150), stop:0.425 rgba(255, 132, 132, 150), stop:0.44 rgba(252, 128, 128, 150), stop:1 rgba(255, 255, 255, 100));"));

        HeadContainer->addWidget(RemoveButton);

        HelpButton = new QPushButton(verticalLayoutWidget);
        HelpButton->setObjectName(QString::fromUtf8("HelpButton"));
        HelpButton->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:0.995, y2:0.994, stop:0 rgba(170, 255, 127, 200), stop:1 rgba(255, 255, 0, 200));"));

        HeadContainer->addWidget(HelpButton);

        BackButton = new QPushButton(verticalLayoutWidget);
        BackButton->setObjectName(QString::fromUtf8("BackButton"));
        sizePolicy.setHeightForWidth(BackButton->sizePolicy().hasHeightForWidth());
        BackButton->setSizePolicy(sizePolicy);
        BackButton->setMinimumSize(QSize(0, 0));
        BackButton->setStyleSheet(QString::fromUtf8("background-color: qconicalgradient(cx:0, cy:0, angle:135, stop:0 rgba(0, 255, 255, 69), stop:0.375 rgba(0, 73, 255, 69), stop:0.421296 rgba(0, 141, 255, 145), stop:0.43318 rgba(102, 168, 188, 171), stop:0.437788 rgba(85, 207, 195, 181), stop:0.442396 rgba(67, 225, 225, 192), stop:0.447005 rgba(56, 222, 244, 202), stop:0.45 rgba(0, 255, 238, 208), stop:0.456221 rgba(70, 253, 229, 191), stop:0.460829 rgba(27, 225, 251, 178), stop:0.470046 rgba(94, 209, 247, 151), stop:0.477581 rgba(71, 222, 255, 130), stop:0.520737 rgba(71, 197, 255, 130), stop:0.55 rgba(0, 234, 255, 255), stop:0.576037 rgba(0, 234, 255, 130), stop:0.625 rgba(36, 0, 255, 69), stop:1 rgba(0, 255, 255, 69));"));

        HeadContainer->addWidget(BackButton);

        HeadContainer->setStretch(1, 6);
        HeadContainer->setStretch(3, 1);
        HeadContainer->setStretch(4, 1);
        HeadContainer->setStretch(5, 1);
        HeadContainer->setStretch(6, 1);
        HeadContainer->setStretch(8, 1);
        Map = new MapView(Map_List);
        Map->setObjectName(QString::fromUtf8("Map"));
        Map->setGeometry(QRect(10, 10, 600, 600));

        retranslateUi(Map_List);

        QMetaObject::connectSlotsByName(Map_List);
    } // setupUi

    void retranslateUi(QWidget *Map_List)
    {
        Map_List->setWindowTitle(QCoreApplication::translate("Map_List", "Form", nullptr));
        label->setText(QCoreApplication::translate("Map_List", "\350\257\267\351\200\211\346\213\251\346\270\270\346\210\217\345\234\260\345\233\276\357\274\232", nullptr));
        Label->setText(QCoreApplication::translate("Map_List", "\345\234\260\345\233\276\345\267\262\345\256\232\345\236\213", nullptr));
        StartButton->setText(QCoreApplication::translate("Map_List", "\345\274\200\345\247\213", nullptr));
        DesignButton->setText(QCoreApplication::translate("Map_List", "\347\274\226\350\276\221", nullptr));
        CreateButton->setText(QCoreApplication::translate("Map_List", "\346\226\260\345\273\272", nullptr));
        RemoveButton->setText(QCoreApplication::translate("Map_List", "\345\210\240\351\231\244", nullptr));
        HelpButton->setText(QCoreApplication::translate("Map_List", "\350\257\264\346\230\216", nullptr));
        BackButton->setText(QCoreApplication::translate("Map_List", "\350\277\224\345\233\236", nullptr));
        Map->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Map_List: public Ui_Map_List {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAP_LIST_H
