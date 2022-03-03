/********************************************************************************
** Form generated from reading UI file 'pass_game_setting.ui'
**
** Created by: Qt User Interface Compiler version 5.14.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PASS_GAME_SETTING_H
#define UI_PASS_GAME_SETTING_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Pass_Game_Setting
{
public:
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *setSpeedLable;
    QSlider *setSpeed;
    QLabel *showSpeed;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *SaveButton;
    QPushButton *BackButton;

    void setupUi(QWidget *Pass_Game_Setting)
    {
        if (Pass_Game_Setting->objectName().isEmpty())
            Pass_Game_Setting->setObjectName(QString::fromUtf8("Pass_Game_Setting"));
        Pass_Game_Setting->resize(500, 200);
        verticalLayoutWidget = new QWidget(Pass_Game_Setting);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(0, 0, 501, 201));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setSpacing(50);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(30, 30, 30, 30);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        setSpeedLable = new QLabel(verticalLayoutWidget);
        setSpeedLable->setObjectName(QString::fromUtf8("setSpeedLable"));

        horizontalLayout->addWidget(setSpeedLable);

        setSpeed = new QSlider(verticalLayoutWidget);
        setSpeed->setObjectName(QString::fromUtf8("setSpeed"));
        setSpeed->setMinimum(50);
        setSpeed->setMaximum(1000);
        setSpeed->setOrientation(Qt::Horizontal);

        horizontalLayout->addWidget(setSpeed);

        showSpeed = new QLabel(verticalLayoutWidget);
        showSpeed->setObjectName(QString::fromUtf8("showSpeed"));
        showSpeed->setMinimumSize(QSize(50, 0));

        horizontalLayout->addWidget(showSpeed);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(50);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        SaveButton = new QPushButton(verticalLayoutWidget);
        SaveButton->setObjectName(QString::fromUtf8("SaveButton"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(SaveButton->sizePolicy().hasHeightForWidth());
        SaveButton->setSizePolicy(sizePolicy);
        SaveButton->setMinimumSize(QSize(0, 50));
        SaveButton->setStyleSheet(QString::fromUtf8("background-color: qconicalgradient(cx:0, cy:0, angle:135, stop:0 rgba(255, 255, 0, 69), stop:0.375 rgba(255, 255, 0, 69), stop:0.423533 rgba(251, 255, 0, 145), stop:0.45 rgba(247, 255, 0, 208), stop:0.477581 rgba(255, 244, 71, 130), stop:0.518717 rgba(255, 218, 71, 130), stop:0.55 rgba(255, 255, 0, 255), stop:0.57754 rgba(255, 203, 0, 130), stop:0.625 rgba(255, 255, 0, 69), stop:1 rgba(255, 255, 0, 69));"));

        horizontalLayout_2->addWidget(SaveButton);

        BackButton = new QPushButton(verticalLayoutWidget);
        BackButton->setObjectName(QString::fromUtf8("BackButton"));
        sizePolicy.setHeightForWidth(BackButton->sizePolicy().hasHeightForWidth());
        BackButton->setSizePolicy(sizePolicy);
        BackButton->setMinimumSize(QSize(0, 50));
        BackButton->setStyleSheet(QString::fromUtf8("background-color: qconicalgradient(cx:0, cy:0, angle:135, stop:0 rgba(0, 255, 255, 69), stop:0.375 rgba(0, 73, 255, 69), stop:0.421296 rgba(0, 141, 255, 145), stop:0.43318 rgba(102, 168, 188, 171), stop:0.437788 rgba(85, 207, 195, 181), stop:0.442396 rgba(67, 225, 225, 192), stop:0.447005 rgba(56, 222, 244, 202), stop:0.45 rgba(0, 255, 238, 208), stop:0.456221 rgba(70, 253, 229, 191), stop:0.460829 rgba(27, 225, 251, 178), stop:0.470046 rgba(94, 209, 247, 151), stop:0.477581 rgba(71, 222, 255, 130), stop:0.520737 rgba(71, 197, 255, 130), stop:0.55 rgba(0, 234, 255, 255), stop:0.576037 rgba(0, 234, 255, 130), stop:0.625 rgba(36, 0, 255, 69), stop:1 rgba(0, 255, 255, 69));"));

        horizontalLayout_2->addWidget(BackButton);


        verticalLayout->addLayout(horizontalLayout_2);

        verticalLayout->setStretch(0, 1);
        verticalLayout->setStretch(1, 2);

        retranslateUi(Pass_Game_Setting);

        QMetaObject::connectSlotsByName(Pass_Game_Setting);
    } // setupUi

    void retranslateUi(QWidget *Pass_Game_Setting)
    {
        Pass_Game_Setting->setWindowTitle(QCoreApplication::translate("Pass_Game_Setting", "\346\270\270\346\210\217\350\256\276\347\275\256", nullptr));
        setSpeedLable->setText(QCoreApplication::translate("Pass_Game_Setting", "\350\233\207\345\244\232\345\260\221\346\257\253\347\247\222\347\247\273\345\212\250\344\270\200\346\240\274\357\274\232", nullptr));
        showSpeed->setText(QCoreApplication::translate("Pass_Game_Setting", "\345\200\274\357\274\232", nullptr));
        SaveButton->setText(QCoreApplication::translate("Pass_Game_Setting", "\344\277\235\345\255\230\346\233\264\346\224\271", nullptr));
        BackButton->setText(QCoreApplication::translate("Pass_Game_Setting", "\350\277\224\345\233\236", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Pass_Game_Setting: public Ui_Pass_Game_Setting {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PASS_GAME_SETTING_H
