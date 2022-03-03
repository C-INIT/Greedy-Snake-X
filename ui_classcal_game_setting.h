/********************************************************************************
** Form generated from reading UI file 'classcal_game_setting.ui'
**
** Created by: Qt User Interface Compiler version 5.14.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CLASSCAL_GAME_SETTING_H
#define UI_CLASSCAL_GAME_SETTING_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Classcal_Game_Setting
{
public:
    QWidget *verticalLayoutWidget;
    QVBoxLayout *HeadContainer;
    QHBoxLayout *FoodContainer;
    QLabel *setFoodnumLabel;
    QSlider *setFoodnum;
    QLabel *showFoodnum;
    QHBoxLayout *SpeedContainer;
    QLabel *setSpeedLable;
    QSlider *setSpeed;
    QLabel *showSpeed;
    QFormLayout *formLayout;
    QLabel *Label;
    QLabel *Label_2;
    QComboBox *setRow;
    QComboBox *setCol;
    QLabel *Label_3;
    QLabel *Label_4;
    QComboBox *setMode;
    QComboBox *throughWall;
    QLabel *Label_5;
    QLabel *showColor_1;
    QLabel *showColor_2;
    QPushButton *setColor_1;
    QPushButton *setColor_2;
    QLabel *label;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout;
    QPushButton *SaveButton;
    QPushButton *BackButton;

    void setupUi(QWidget *Classcal_Game_Setting)
    {
        if (Classcal_Game_Setting->objectName().isEmpty())
            Classcal_Game_Setting->setObjectName(QString::fromUtf8("Classcal_Game_Setting"));
        Classcal_Game_Setting->resize(620, 520);
        verticalLayoutWidget = new QWidget(Classcal_Game_Setting);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(0, 0, 621, 525));
        HeadContainer = new QVBoxLayout(verticalLayoutWidget);
        HeadContainer->setSpacing(20);
        HeadContainer->setObjectName(QString::fromUtf8("HeadContainer"));
        HeadContainer->setContentsMargins(10, 10, 10, 20);
        FoodContainer = new QHBoxLayout();
        FoodContainer->setObjectName(QString::fromUtf8("FoodContainer"));
        setFoodnumLabel = new QLabel(verticalLayoutWidget);
        setFoodnumLabel->setObjectName(QString::fromUtf8("setFoodnumLabel"));

        FoodContainer->addWidget(setFoodnumLabel);

        setFoodnum = new QSlider(verticalLayoutWidget);
        setFoodnum->setObjectName(QString::fromUtf8("setFoodnum"));
        setFoodnum->setMinimum(1);
        setFoodnum->setMaximum(100);
        setFoodnum->setOrientation(Qt::Horizontal);

        FoodContainer->addWidget(setFoodnum);

        showFoodnum = new QLabel(verticalLayoutWidget);
        showFoodnum->setObjectName(QString::fromUtf8("showFoodnum"));
        showFoodnum->setMinimumSize(QSize(50, 0));

        FoodContainer->addWidget(showFoodnum);

        FoodContainer->setStretch(0, 1);
        FoodContainer->setStretch(1, 5);
        FoodContainer->setStretch(2, 1);

        HeadContainer->addLayout(FoodContainer);

        SpeedContainer = new QHBoxLayout();
        SpeedContainer->setObjectName(QString::fromUtf8("SpeedContainer"));
        SpeedContainer->setContentsMargins(-1, -1, -1, 0);
        setSpeedLable = new QLabel(verticalLayoutWidget);
        setSpeedLable->setObjectName(QString::fromUtf8("setSpeedLable"));

        SpeedContainer->addWidget(setSpeedLable);

        setSpeed = new QSlider(verticalLayoutWidget);
        setSpeed->setObjectName(QString::fromUtf8("setSpeed"));
        setSpeed->setMinimum(50);
        setSpeed->setMaximum(1000);
        setSpeed->setOrientation(Qt::Horizontal);

        SpeedContainer->addWidget(setSpeed);

        showSpeed = new QLabel(verticalLayoutWidget);
        showSpeed->setObjectName(QString::fromUtf8("showSpeed"));
        showSpeed->setMinimumSize(QSize(50, 0));

        SpeedContainer->addWidget(showSpeed);

        SpeedContainer->setStretch(0, 1);
        SpeedContainer->setStretch(1, 5);
        SpeedContainer->setStretch(2, 1);

        HeadContainer->addLayout(SpeedContainer);

        formLayout = new QFormLayout();
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        formLayout->setHorizontalSpacing(10);
        formLayout->setVerticalSpacing(20);
        Label = new QLabel(verticalLayoutWidget);
        Label->setObjectName(QString::fromUtf8("Label"));

        formLayout->setWidget(0, QFormLayout::LabelRole, Label);

        Label_2 = new QLabel(verticalLayoutWidget);
        Label_2->setObjectName(QString::fromUtf8("Label_2"));

        formLayout->setWidget(1, QFormLayout::LabelRole, Label_2);

        setRow = new QComboBox(verticalLayoutWidget);
        setRow->addItem(QString());
        setRow->addItem(QString());
        setRow->addItem(QString());
        setRow->addItem(QString());
        setRow->addItem(QString());
        setRow->addItem(QString());
        setRow->addItem(QString());
        setRow->addItem(QString());
        setRow->setObjectName(QString::fromUtf8("setRow"));

        formLayout->setWidget(0, QFormLayout::FieldRole, setRow);

        setCol = new QComboBox(verticalLayoutWidget);
        setCol->addItem(QString());
        setCol->addItem(QString());
        setCol->addItem(QString());
        setCol->addItem(QString());
        setCol->addItem(QString());
        setCol->addItem(QString());
        setCol->addItem(QString());
        setCol->addItem(QString());
        setCol->addItem(QString());
        setCol->setObjectName(QString::fromUtf8("setCol"));

        formLayout->setWidget(1, QFormLayout::FieldRole, setCol);

        Label_3 = new QLabel(verticalLayoutWidget);
        Label_3->setObjectName(QString::fromUtf8("Label_3"));

        formLayout->setWidget(2, QFormLayout::LabelRole, Label_3);

        Label_4 = new QLabel(verticalLayoutWidget);
        Label_4->setObjectName(QString::fromUtf8("Label_4"));

        formLayout->setWidget(3, QFormLayout::LabelRole, Label_4);

        setMode = new QComboBox(verticalLayoutWidget);
        setMode->addItem(QString());
        setMode->addItem(QString());
        setMode->addItem(QString());
        setMode->setObjectName(QString::fromUtf8("setMode"));

        formLayout->setWidget(2, QFormLayout::FieldRole, setMode);

        throughWall = new QComboBox(verticalLayoutWidget);
        throughWall->addItem(QString());
        throughWall->addItem(QString());
        throughWall->setObjectName(QString::fromUtf8("throughWall"));

        formLayout->setWidget(3, QFormLayout::FieldRole, throughWall);

        Label_5 = new QLabel(verticalLayoutWidget);
        Label_5->setObjectName(QString::fromUtf8("Label_5"));

        formLayout->setWidget(4, QFormLayout::LabelRole, Label_5);

        showColor_1 = new QLabel(verticalLayoutWidget);
        showColor_1->setObjectName(QString::fromUtf8("showColor_1"));

        formLayout->setWidget(5, QFormLayout::LabelRole, showColor_1);

        showColor_2 = new QLabel(verticalLayoutWidget);
        showColor_2->setObjectName(QString::fromUtf8("showColor_2"));

        formLayout->setWidget(6, QFormLayout::LabelRole, showColor_2);

        setColor_1 = new QPushButton(verticalLayoutWidget);
        setColor_1->setObjectName(QString::fromUtf8("setColor_1"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(setColor_1->sizePolicy().hasHeightForWidth());
        setColor_1->setSizePolicy(sizePolicy);
        setColor_1->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgba(255, 0, 0, 255), stop:0.166 rgba(255, 255, 0, 255), stop:0.333 rgba(0, 255, 0, 255), stop:0.5 rgba(0, 255, 255, 255), stop:0.666 rgba(0, 0, 255, 255), stop:0.833 rgba(255, 0, 255, 255), stop:1 rgba(255, 0, 0, 255));"));

        formLayout->setWidget(5, QFormLayout::FieldRole, setColor_1);

        setColor_2 = new QPushButton(verticalLayoutWidget);
        setColor_2->setObjectName(QString::fromUtf8("setColor_2"));
        sizePolicy.setHeightForWidth(setColor_2->sizePolicy().hasHeightForWidth());
        setColor_2->setSizePolicy(sizePolicy);
        setColor_2->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgba(255, 0, 0, 255), stop:0.166 rgba(255, 255, 0, 255), stop:0.333 rgba(0, 255, 0, 255), stop:0.5 rgba(0, 255, 255, 255), stop:0.666 rgba(0, 0, 255, 255), stop:0.833 rgba(255, 0, 255, 255), stop:1 rgba(255, 0, 0, 255));"));

        formLayout->setWidget(6, QFormLayout::FieldRole, setColor_2);

        label = new QLabel(verticalLayoutWidget);
        label->setObjectName(QString::fromUtf8("label"));

        formLayout->setWidget(4, QFormLayout::FieldRole, label);


        HeadContainer->addLayout(formLayout);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        HeadContainer->addItem(verticalSpacer);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(100);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(100, -1, 100, -1);
        SaveButton = new QPushButton(verticalLayoutWidget);
        SaveButton->setObjectName(QString::fromUtf8("SaveButton"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(SaveButton->sizePolicy().hasHeightForWidth());
        SaveButton->setSizePolicy(sizePolicy1);
        SaveButton->setMinimumSize(QSize(0, 50));
        SaveButton->setStyleSheet(QString::fromUtf8("background-color: qconicalgradient(cx:0, cy:0, angle:135, stop:0 rgba(255, 255, 0, 69), stop:0.375 rgba(255, 255, 0, 69), stop:0.423533 rgba(251, 255, 0, 145), stop:0.45 rgba(247, 255, 0, 208), stop:0.477581 rgba(255, 244, 71, 130), stop:0.518717 rgba(255, 218, 71, 130), stop:0.55 rgba(255, 255, 0, 255), stop:0.57754 rgba(255, 203, 0, 130), stop:0.625 rgba(255, 255, 0, 69), stop:1 rgba(255, 255, 0, 69));"));

        horizontalLayout->addWidget(SaveButton);

        BackButton = new QPushButton(verticalLayoutWidget);
        BackButton->setObjectName(QString::fromUtf8("BackButton"));
        sizePolicy1.setHeightForWidth(BackButton->sizePolicy().hasHeightForWidth());
        BackButton->setSizePolicy(sizePolicy1);
        BackButton->setMinimumSize(QSize(0, 50));
        BackButton->setStyleSheet(QString::fromUtf8("background-color: qconicalgradient(cx:0, cy:0, angle:135, stop:0 rgba(0, 255, 255, 69), stop:0.375 rgba(0, 73, 255, 69), stop:0.421296 rgba(0, 141, 255, 145), stop:0.43318 rgba(102, 168, 188, 171), stop:0.437788 rgba(85, 207, 195, 181), stop:0.442396 rgba(67, 225, 225, 192), stop:0.447005 rgba(56, 222, 244, 202), stop:0.45 rgba(0, 255, 238, 208), stop:0.456221 rgba(70, 253, 229, 191), stop:0.460829 rgba(27, 225, 251, 178), stop:0.470046 rgba(94, 209, 247, 151), stop:0.477581 rgba(71, 222, 255, 130), stop:0.520737 rgba(71, 197, 255, 130), stop:0.55 rgba(0, 234, 255, 255), stop:0.576037 rgba(0, 234, 255, 130), stop:0.625 rgba(36, 0, 255, 69), stop:1 rgba(0, 255, 255, 69));"));

        horizontalLayout->addWidget(BackButton);


        HeadContainer->addLayout(horizontalLayout);


        retranslateUi(Classcal_Game_Setting);

        QMetaObject::connectSlotsByName(Classcal_Game_Setting);
    } // setupUi

    void retranslateUi(QWidget *Classcal_Game_Setting)
    {
        Classcal_Game_Setting->setWindowTitle(QCoreApplication::translate("Classcal_Game_Setting", "Form", nullptr));
        setFoodnumLabel->setText(QCoreApplication::translate("Classcal_Game_Setting", "\346\234\200\345\244\247\351\243\237\347\211\251\346\225\260\351\207\217\357\274\232", nullptr));
        showFoodnum->setText(QCoreApplication::translate("Classcal_Game_Setting", "\345\200\274\357\274\232", nullptr));
        setSpeedLable->setText(QCoreApplication::translate("Classcal_Game_Setting", "\350\233\207\345\244\232\345\260\221\346\257\253\347\247\222\347\247\273\345\212\250\344\270\200\346\240\274\357\274\232", nullptr));
        showSpeed->setText(QCoreApplication::translate("Classcal_Game_Setting", "\345\200\274\357\274\232", nullptr));
        Label->setText(QCoreApplication::translate("Classcal_Game_Setting", "\350\256\276\347\275\256\345\234\260\345\233\276\350\241\214\346\225\260\357\274\232", nullptr));
        Label_2->setText(QCoreApplication::translate("Classcal_Game_Setting", "\350\256\276\347\275\256\345\234\260\345\233\276\345\210\227\346\225\260\357\274\232", nullptr));
        setRow->setItemText(0, QCoreApplication::translate("Classcal_Game_Setting", "5", nullptr));
        setRow->setItemText(1, QCoreApplication::translate("Classcal_Game_Setting", "10", nullptr));
        setRow->setItemText(2, QCoreApplication::translate("Classcal_Game_Setting", "15", nullptr));
        setRow->setItemText(3, QCoreApplication::translate("Classcal_Game_Setting", "20", nullptr));
        setRow->setItemText(4, QCoreApplication::translate("Classcal_Game_Setting", "30", nullptr));
        setRow->setItemText(5, QCoreApplication::translate("Classcal_Game_Setting", "50", nullptr));
        setRow->setItemText(6, QCoreApplication::translate("Classcal_Game_Setting", "60", nullptr));
        setRow->setItemText(7, QCoreApplication::translate("Classcal_Game_Setting", "100", nullptr));

        setCol->setItemText(0, QCoreApplication::translate("Classcal_Game_Setting", "5", nullptr));
        setCol->setItemText(1, QCoreApplication::translate("Classcal_Game_Setting", "10", nullptr));
        setCol->setItemText(2, QCoreApplication::translate("Classcal_Game_Setting", "15", nullptr));
        setCol->setItemText(3, QCoreApplication::translate("Classcal_Game_Setting", "20", nullptr));
        setCol->setItemText(4, QCoreApplication::translate("Classcal_Game_Setting", "30", nullptr));
        setCol->setItemText(5, QCoreApplication::translate("Classcal_Game_Setting", "40", nullptr));
        setCol->setItemText(6, QCoreApplication::translate("Classcal_Game_Setting", "50", nullptr));
        setCol->setItemText(7, QCoreApplication::translate("Classcal_Game_Setting", "60", nullptr));
        setCol->setItemText(8, QCoreApplication::translate("Classcal_Game_Setting", "100", nullptr));

        Label_3->setText(QCoreApplication::translate("Classcal_Game_Setting", "\350\233\207\345\244\264\346\222\236\345\210\260\350\272\253\344\275\223\350\241\214\344\270\272\357\274\232", nullptr));
        Label_4->setText(QCoreApplication::translate("Classcal_Game_Setting", "\350\233\207\346\222\236\345\210\260\345\242\231\345\220\216\357\274\232", nullptr));
        setMode->setItemText(0, QCoreApplication::translate("Classcal_Game_Setting", "\346\227\240\345\217\221\347\224\237\344\273\273\344\275\225\344\272\213", nullptr));
        setMode->setItemText(1, QCoreApplication::translate("Classcal_Game_Setting", "\350\233\207\350\272\253\347\274\251\347\237\255\344\270\200\346\240\274", nullptr));
        setMode->setItemText(2, QCoreApplication::translate("Classcal_Game_Setting", "\346\255\273\344\272\241", nullptr));

        throughWall->setItemText(0, QCoreApplication::translate("Classcal_Game_Setting", "\347\251\277\345\210\260\345\234\260\345\233\276\345\217\246\344\270\200\350\276\271", nullptr));
        throughWall->setItemText(1, QCoreApplication::translate("Classcal_Game_Setting", "\346\255\273\344\272\241", nullptr));

        Label_5->setText(QCoreApplication::translate("Classcal_Game_Setting", "\350\233\207\350\272\253\346\270\220\345\217\230\350\211\262\351\242\234\350\211\262\350\256\276\347\275\256\357\274\232", nullptr));
        showColor_1->setText(QCoreApplication::translate("Classcal_Game_Setting", "\346\270\220\345\217\230\350\211\2621", nullptr));
        showColor_2->setText(QCoreApplication::translate("Classcal_Game_Setting", "\346\270\220\345\217\230\350\211\2622", nullptr));
        setColor_1->setText(QCoreApplication::translate("Classcal_Game_Setting", "\350\256\276\347\275\256\346\270\220\345\217\230\350\211\2621", nullptr));
        setColor_2->setText(QCoreApplication::translate("Classcal_Game_Setting", "\350\256\276\347\275\256\346\270\220\345\217\230\350\211\2622", nullptr));
        label->setText(QString());
        SaveButton->setText(QCoreApplication::translate("Classcal_Game_Setting", "\344\277\235\345\255\230\346\233\264\346\224\271", nullptr));
        BackButton->setText(QCoreApplication::translate("Classcal_Game_Setting", "\350\277\224\345\233\236", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Classcal_Game_Setting: public Ui_Classcal_Game_Setting {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CLASSCAL_GAME_SETTING_H
