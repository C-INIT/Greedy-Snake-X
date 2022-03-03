/********************************************************************************
** Form generated from reading UI file 'map_design.ui'
**
** Created by: Qt User Interface Compiler version 5.14.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAP_DESIGN_H
#define UI_MAP_DESIGN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "map.h"

QT_BEGIN_NAMESPACE

class Ui_Map_Design
{
public:
    QWidget *verticalLayoutWidget;
    QVBoxLayout *HeadContainer;
    QFormLayout *formLayout;
    QLabel *Label;
    QLabel *Label_2;
    QLabel *Label_3;
    QComboBox *BlockType;
    QComboBox *setDirection;
    QLineEdit *setName;
    QLabel *Label_4;
    QCheckBox *setFixed;
    QSpacerItem *verticalSpacer;
    QPushButton *HelpButton;
    QPushButton *SaveButton;
    QPushButton *BackButton;
    MapEditor *Map;

    void setupUi(QWidget *Map_Design)
    {
        if (Map_Design->objectName().isEmpty())
            Map_Design->setObjectName(QString::fromUtf8("Map_Design"));
        Map_Design->resize(820, 620);
        verticalLayoutWidget = new QWidget(Map_Design);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(0, 0, 821, 621));
        HeadContainer = new QVBoxLayout(verticalLayoutWidget);
        HeadContainer->setSpacing(20);
        HeadContainer->setObjectName(QString::fromUtf8("HeadContainer"));
        HeadContainer->setContentsMargins(620, 10, 10, 10);
        formLayout = new QFormLayout();
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        formLayout->setVerticalSpacing(20);
        Label = new QLabel(verticalLayoutWidget);
        Label->setObjectName(QString::fromUtf8("Label"));

        formLayout->setWidget(0, QFormLayout::LabelRole, Label);

        Label_2 = new QLabel(verticalLayoutWidget);
        Label_2->setObjectName(QString::fromUtf8("Label_2"));

        formLayout->setWidget(1, QFormLayout::LabelRole, Label_2);

        Label_3 = new QLabel(verticalLayoutWidget);
        Label_3->setObjectName(QString::fromUtf8("Label_3"));

        formLayout->setWidget(2, QFormLayout::LabelRole, Label_3);

        BlockType = new QComboBox(verticalLayoutWidget);
        BlockType->addItem(QString());
        BlockType->addItem(QString());
        BlockType->addItem(QString());
        BlockType->addItem(QString());
        BlockType->setObjectName(QString::fromUtf8("BlockType"));

        formLayout->setWidget(1, QFormLayout::FieldRole, BlockType);

        setDirection = new QComboBox(verticalLayoutWidget);
        setDirection->addItem(QString());
        setDirection->addItem(QString());
        setDirection->addItem(QString());
        setDirection->addItem(QString());
        setDirection->setObjectName(QString::fromUtf8("setDirection"));

        formLayout->setWidget(2, QFormLayout::FieldRole, setDirection);

        setName = new QLineEdit(verticalLayoutWidget);
        setName->setObjectName(QString::fromUtf8("setName"));

        formLayout->setWidget(0, QFormLayout::FieldRole, setName);

        Label_4 = new QLabel(verticalLayoutWidget);
        Label_4->setObjectName(QString::fromUtf8("Label_4"));

        formLayout->setWidget(3, QFormLayout::LabelRole, Label_4);

        setFixed = new QCheckBox(verticalLayoutWidget);
        setFixed->setObjectName(QString::fromUtf8("setFixed"));

        formLayout->setWidget(3, QFormLayout::FieldRole, setFixed);


        HeadContainer->addLayout(formLayout);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        HeadContainer->addItem(verticalSpacer);

        HelpButton = new QPushButton(verticalLayoutWidget);
        HelpButton->setObjectName(QString::fromUtf8("HelpButton"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(HelpButton->sizePolicy().hasHeightForWidth());
        HelpButton->setSizePolicy(sizePolicy);
        HelpButton->setStyleSheet(QString::fromUtf8("background-color: qradialgradient(spread:pad, cx:0.5, cy:0.5, radius:0.5, fx:0.5, fy:0.5, stop:0 rgba(255, 235, 235, 206), stop:0.35 rgba(255, 188, 188, 150), stop:0.4 rgba(255, 162, 162, 150), stop:0.425 rgba(255, 132, 132, 150), stop:0.44 rgba(252, 128, 128, 150), stop:1 rgba(255, 255, 255, 100));"));

        HeadContainer->addWidget(HelpButton);

        SaveButton = new QPushButton(verticalLayoutWidget);
        SaveButton->setObjectName(QString::fromUtf8("SaveButton"));
        sizePolicy.setHeightForWidth(SaveButton->sizePolicy().hasHeightForWidth());
        SaveButton->setSizePolicy(sizePolicy);
        SaveButton->setStyleSheet(QString::fromUtf8("background-color: qconicalgradient(cx:0, cy:0, angle:135, stop:0 rgba(255, 255, 0, 69), stop:0.375 rgba(255, 255, 0, 69), stop:0.423533 rgba(251, 255, 0, 145), stop:0.45 rgba(247, 255, 0, 208), stop:0.477581 rgba(255, 244, 71, 130), stop:0.518717 rgba(255, 218, 71, 130), stop:0.55 rgba(255, 255, 0, 255), stop:0.57754 rgba(255, 203, 0, 130), stop:0.625 rgba(255, 255, 0, 69), stop:1 rgba(255, 255, 0, 69));"));

        HeadContainer->addWidget(SaveButton);

        BackButton = new QPushButton(verticalLayoutWidget);
        BackButton->setObjectName(QString::fromUtf8("BackButton"));
        sizePolicy.setHeightForWidth(BackButton->sizePolicy().hasHeightForWidth());
        BackButton->setSizePolicy(sizePolicy);
        BackButton->setStyleSheet(QString::fromUtf8("background-color: qconicalgradient(cx:0, cy:0, angle:135, stop:0 rgba(0, 255, 255, 69), stop:0.375 rgba(0, 73, 255, 69), stop:0.421296 rgba(0, 141, 255, 145), stop:0.43318 rgba(102, 168, 188, 171), stop:0.437788 rgba(85, 207, 195, 181), stop:0.442396 rgba(67, 225, 225, 192), stop:0.447005 rgba(56, 222, 244, 202), stop:0.45 rgba(0, 255, 238, 208), stop:0.456221 rgba(70, 253, 229, 191), stop:0.460829 rgba(27, 225, 251, 178), stop:0.470046 rgba(94, 209, 247, 151), stop:0.477581 rgba(71, 222, 255, 130), stop:0.520737 rgba(71, 197, 255, 130), stop:0.55 rgba(0, 234, 255, 255), stop:0.576037 rgba(0, 234, 255, 130), stop:0.625 rgba(36, 0, 255, 69), stop:1 rgba(0, 255, 255, 69));"));

        HeadContainer->addWidget(BackButton);

        HeadContainer->setStretch(0, 2);
        HeadContainer->setStretch(1, 4);
        HeadContainer->setStretch(2, 1);
        HeadContainer->setStretch(3, 1);
        HeadContainer->setStretch(4, 1);
        Map = new MapEditor(Map_Design);
        Map->setObjectName(QString::fromUtf8("Map"));
        Map->setGeometry(QRect(10, 10, 600, 600));

        retranslateUi(Map_Design);

        QMetaObject::connectSlotsByName(Map_Design);
    } // setupUi

    void retranslateUi(QWidget *Map_Design)
    {
        Map_Design->setWindowTitle(QCoreApplication::translate("Map_Design", "\345\234\260\345\233\276\347\274\226\350\276\221\345\231\250", nullptr));
        Label->setText(QCoreApplication::translate("Map_Design", "\346\226\207\344\273\266\345\220\215", nullptr));
        Label_2->setText(QCoreApplication::translate("Map_Design", "\350\256\276\347\275\256\346\226\271\345\235\227", nullptr));
        Label_3->setText(QCoreApplication::translate("Map_Design", "\350\233\207\347\232\204\346\226\271\345\220\221", nullptr));
        BlockType->setItemText(0, QCoreApplication::translate("Map_Design", "\350\233\207\345\244\264", nullptr));
        BlockType->setItemText(1, QCoreApplication::translate("Map_Design", "\350\233\207\350\272\253", nullptr));
        BlockType->setItemText(2, QCoreApplication::translate("Map_Design", "\350\233\207\345\260\276", nullptr));
        BlockType->setItemText(3, QCoreApplication::translate("Map_Design", "\347\211\271\346\256\212\351\243\237\347\211\251", nullptr));

        setDirection->setItemText(0, QCoreApplication::translate("Map_Design", "\344\270\212", nullptr));
        setDirection->setItemText(1, QCoreApplication::translate("Map_Design", "\345\217\263", nullptr));
        setDirection->setItemText(2, QCoreApplication::translate("Map_Design", "\344\270\213", nullptr));
        setDirection->setItemText(3, QCoreApplication::translate("Map_Design", "\345\267\246", nullptr));

        Label_4->setText(QCoreApplication::translate("Map_Design", "\345\234\260\345\233\276\345\256\232\345\236\213", nullptr));
        HelpButton->setText(QCoreApplication::translate("Map_Design", "\350\257\264\346\230\216", nullptr));
        SaveButton->setText(QCoreApplication::translate("Map_Design", "\344\277\235\345\255\230", nullptr));
        BackButton->setText(QCoreApplication::translate("Map_Design", "\350\277\224\345\233\236", nullptr));
        Map->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Map_Design: public Ui_Map_Design {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAP_DESIGN_H
