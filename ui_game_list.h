/********************************************************************************
** Form generated from reading UI file 'game_list.ui'
**
** Created by: Qt User Interface Compiler version 5.14.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GAME_LIST_H
#define UI_GAME_LIST_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Game_List
{
public:
    QWidget *verticalLayoutWidget;
    QVBoxLayout *HeadContainer;
    QLabel *Title;
    QSpacerItem *verticalSpacer;
    QPushButton *ClasscalMode;
    QPushButton *PassMode;
    QPushButton *BackButton;

    void setupUi(QWidget *Game_List)
    {
        if (Game_List->objectName().isEmpty())
            Game_List->setObjectName(QString::fromUtf8("Game_List"));
        Game_List->resize(820, 620);
        verticalLayoutWidget = new QWidget(Game_List);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(0, 0, 821, 621));
        HeadContainer = new QVBoxLayout(verticalLayoutWidget);
        HeadContainer->setSpacing(30);
        HeadContainer->setObjectName(QString::fromUtf8("HeadContainer"));
        HeadContainer->setContentsMargins(100, 50, 100, 50);
        Title = new QLabel(verticalLayoutWidget);
        Title->setObjectName(QString::fromUtf8("Title"));
        Title->setMinimumSize(QSize(0, 0));
        Title->setStyleSheet(QString::fromUtf8("image: url(:/Image/title.png);"));

        HeadContainer->addWidget(Title);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        HeadContainer->addItem(verticalSpacer);

        ClasscalMode = new QPushButton(verticalLayoutWidget);
        ClasscalMode->setObjectName(QString::fromUtf8("ClasscalMode"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(ClasscalMode->sizePolicy().hasHeightForWidth());
        ClasscalMode->setSizePolicy(sizePolicy);
        ClasscalMode->setMinimumSize(QSize(0, 0));
        ClasscalMode->setStyleSheet(QString::fromUtf8("background-color: qconicalgradient(cx:0, cy:0, angle:135, stop:0 rgba(255, 255, 0, 69), stop:0.375 rgba(255, 255, 0, 69), stop:0.423533 rgba(251, 255, 0, 145), stop:0.45 rgba(247, 255, 0, 208), stop:0.477581 rgba(255, 244, 71, 130), stop:0.518717 rgba(255, 218, 71, 130), stop:0.55 rgba(255, 255, 0, 255), stop:0.57754 rgba(255, 203, 0, 130), stop:0.625 rgba(255, 255, 0, 69), stop:1 rgba(255, 255, 0, 69));"));

        HeadContainer->addWidget(ClasscalMode);

        PassMode = new QPushButton(verticalLayoutWidget);
        PassMode->setObjectName(QString::fromUtf8("PassMode"));
        sizePolicy.setHeightForWidth(PassMode->sizePolicy().hasHeightForWidth());
        PassMode->setSizePolicy(sizePolicy);
        PassMode->setMinimumSize(QSize(0, 0));
        PassMode->setStyleSheet(QString::fromUtf8("background-color: qconicalgradient(cx:0, cy:0, angle:135, stop:0 rgba(255, 255, 0, 69), stop:0.375 rgba(255, 255, 0, 69), stop:0.423533 rgba(251, 255, 0, 145), stop:0.45 rgba(247, 255, 0, 208), stop:0.477581 rgba(255, 244, 71, 130), stop:0.518717 rgba(255, 218, 71, 130), stop:0.55 rgba(255, 255, 0, 255), stop:0.57754 rgba(255, 203, 0, 130), stop:0.625 rgba(255, 255, 0, 69), stop:1 rgba(255, 255, 0, 69));"));

        HeadContainer->addWidget(PassMode);

        BackButton = new QPushButton(verticalLayoutWidget);
        BackButton->setObjectName(QString::fromUtf8("BackButton"));
        sizePolicy.setHeightForWidth(BackButton->sizePolicy().hasHeightForWidth());
        BackButton->setSizePolicy(sizePolicy);
        BackButton->setMinimumSize(QSize(0, 0));
        BackButton->setStyleSheet(QString::fromUtf8("background-color: qconicalgradient(cx:0, cy:0, angle:135, stop:0 rgba(0, 255, 255, 69), stop:0.375 rgba(0, 73, 255, 69), stop:0.421296 rgba(0, 141, 255, 145), stop:0.43318 rgba(102, 168, 188, 171), stop:0.437788 rgba(85, 207, 195, 181), stop:0.442396 rgba(67, 225, 225, 192), stop:0.447005 rgba(56, 222, 244, 202), stop:0.45 rgba(0, 255, 238, 208), stop:0.456221 rgba(70, 253, 229, 191), stop:0.460829 rgba(27, 225, 251, 178), stop:0.470046 rgba(94, 209, 247, 151), stop:0.477581 rgba(71, 222, 255, 130), stop:0.520737 rgba(71, 197, 255, 130), stop:0.55 rgba(0, 234, 255, 255), stop:0.576037 rgba(0, 234, 255, 130), stop:0.625 rgba(36, 0, 255, 69), stop:1 rgba(0, 255, 255, 69));"));

        HeadContainer->addWidget(BackButton);

        HeadContainer->setStretch(0, 5);
        HeadContainer->setStretch(1, 1);
        HeadContainer->setStretch(2, 2);
        HeadContainer->setStretch(3, 2);
        HeadContainer->setStretch(4, 2);

        retranslateUi(Game_List);

        QMetaObject::connectSlotsByName(Game_List);
    } // setupUi

    void retranslateUi(QWidget *Game_List)
    {
        Game_List->setWindowTitle(QCoreApplication::translate("Game_List", "Form", nullptr));
        Title->setText(QString());
        ClasscalMode->setText(QCoreApplication::translate("Game_List", "\347\273\217\345\205\270\346\250\241\345\274\217", nullptr));
        PassMode->setText(QCoreApplication::translate("Game_List", "\351\227\257\345\205\263\346\250\241\345\274\217", nullptr));
        BackButton->setText(QCoreApplication::translate("Game_List", "\350\277\224\345\233\236", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Game_List: public Ui_Game_List {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GAME_LIST_H
