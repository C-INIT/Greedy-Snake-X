/********************************************************************************
** Form generated from reading UI file 'pass_game.ui'
**
** Created by: Qt User Interface Compiler version 5.14.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PASS_GAME_H
#define UI_PASS_GAME_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Pass_Game
{
public:
    QWidget *verticalLayoutWidget;
    QVBoxLayout *HeadContainer;
    QFormLayout *formLayout;
    QLabel *Label;
    QLineEdit *showScore;
    QLabel *Label_2;
    QLineEdit *showStep;
    QLabel *Label_3;
    QLineEdit *showTime;
    QLabel *Label_4;
    QLineEdit *showLevel;
    QPushButton *StartButton;
    QPushButton *RestartButton;
    QPushButton *HelpButton;
    QPushButton *SettingButton;
    QPushButton *BackButton;

    void setupUi(QWidget *Pass_Game)
    {
        if (Pass_Game->objectName().isEmpty())
            Pass_Game->setObjectName(QString::fromUtf8("Pass_Game"));
        Pass_Game->resize(820, 620);
        verticalLayoutWidget = new QWidget(Pass_Game);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(-1, 0, 821, 611));
        HeadContainer = new QVBoxLayout(verticalLayoutWidget);
        HeadContainer->setSpacing(20);
        HeadContainer->setObjectName(QString::fromUtf8("HeadContainer"));
        HeadContainer->setContentsMargins(620, 10, 10, 10);
        formLayout = new QFormLayout();
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        Label = new QLabel(verticalLayoutWidget);
        Label->setObjectName(QString::fromUtf8("Label"));

        formLayout->setWidget(0, QFormLayout::LabelRole, Label);

        showScore = new QLineEdit(verticalLayoutWidget);
        showScore->setObjectName(QString::fromUtf8("showScore"));
        showScore->setEnabled(true);
        showScore->setReadOnly(true);

        formLayout->setWidget(0, QFormLayout::FieldRole, showScore);

        Label_2 = new QLabel(verticalLayoutWidget);
        Label_2->setObjectName(QString::fromUtf8("Label_2"));

        formLayout->setWidget(1, QFormLayout::LabelRole, Label_2);

        showStep = new QLineEdit(verticalLayoutWidget);
        showStep->setObjectName(QString::fromUtf8("showStep"));
        showStep->setEnabled(true);
        showStep->setReadOnly(true);

        formLayout->setWidget(1, QFormLayout::FieldRole, showStep);

        Label_3 = new QLabel(verticalLayoutWidget);
        Label_3->setObjectName(QString::fromUtf8("Label_3"));

        formLayout->setWidget(2, QFormLayout::LabelRole, Label_3);

        showTime = new QLineEdit(verticalLayoutWidget);
        showTime->setObjectName(QString::fromUtf8("showTime"));
        showTime->setEnabled(true);
        showTime->setReadOnly(true);

        formLayout->setWidget(2, QFormLayout::FieldRole, showTime);

        Label_4 = new QLabel(verticalLayoutWidget);
        Label_4->setObjectName(QString::fromUtf8("Label_4"));

        formLayout->setWidget(3, QFormLayout::LabelRole, Label_4);

        showLevel = new QLineEdit(verticalLayoutWidget);
        showLevel->setObjectName(QString::fromUtf8("showLevel"));
        showLevel->setReadOnly(true);

        formLayout->setWidget(3, QFormLayout::FieldRole, showLevel);


        HeadContainer->addLayout(formLayout);

        StartButton = new QPushButton(verticalLayoutWidget);
        StartButton->setObjectName(QString::fromUtf8("StartButton"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(StartButton->sizePolicy().hasHeightForWidth());
        StartButton->setSizePolicy(sizePolicy);
        StartButton->setMinimumSize(QSize(0, 50));
        StartButton->setStyleSheet(QString::fromUtf8("background-color: qconicalgradient(cx:0, cy:0, angle:135, stop:0 rgba(255, 255, 0, 69), stop:0.375 rgba(255, 255, 0, 69), stop:0.423533 rgba(251, 255, 0, 145), stop:0.45 rgba(247, 255, 0, 208), stop:0.477581 rgba(255, 244, 71, 130), stop:0.518717 rgba(255, 218, 71, 130), stop:0.55 rgba(255, 255, 0, 255), stop:0.57754 rgba(255, 203, 0, 130), stop:0.625 rgba(255, 255, 0, 69), stop:1 rgba(255, 255, 0, 69));"));

        HeadContainer->addWidget(StartButton);

        RestartButton = new QPushButton(verticalLayoutWidget);
        RestartButton->setObjectName(QString::fromUtf8("RestartButton"));
        sizePolicy.setHeightForWidth(RestartButton->sizePolicy().hasHeightForWidth());
        RestartButton->setSizePolicy(sizePolicy);
        RestartButton->setMinimumSize(QSize(0, 50));
        RestartButton->setStyleSheet(QString::fromUtf8("background-color: qconicalgradient(cx:0, cy:0, angle:135, stop:0 rgba(255, 255, 0, 69), stop:0.375 rgba(255, 255, 0, 69), stop:0.423533 rgba(251, 255, 0, 145), stop:0.45 rgba(247, 255, 0, 208), stop:0.477581 rgba(255, 244, 71, 130), stop:0.518717 rgba(255, 218, 71, 130), stop:0.55 rgba(255, 255, 0, 255), stop:0.57754 rgba(255, 203, 0, 130), stop:0.625 rgba(255, 255, 0, 69), stop:1 rgba(255, 255, 0, 69));"));

        HeadContainer->addWidget(RestartButton);

        HelpButton = new QPushButton(verticalLayoutWidget);
        HelpButton->setObjectName(QString::fromUtf8("HelpButton"));
        sizePolicy.setHeightForWidth(HelpButton->sizePolicy().hasHeightForWidth());
        HelpButton->setSizePolicy(sizePolicy);
        HelpButton->setMinimumSize(QSize(0, 50));
        HelpButton->setStyleSheet(QString::fromUtf8("background-color: qradialgradient(spread:pad, cx:0.5, cy:0.5, radius:0.5, fx:0.5, fy:0.5, stop:0 rgba(255, 235, 235, 206), stop:0.35 rgba(255, 188, 188, 150), stop:0.4 rgba(255, 162, 162, 150), stop:0.425 rgba(255, 132, 132, 150), stop:0.44 rgba(252, 128, 128, 150), stop:1 rgba(255, 255, 255, 100));"));

        HeadContainer->addWidget(HelpButton);

        SettingButton = new QPushButton(verticalLayoutWidget);
        SettingButton->setObjectName(QString::fromUtf8("SettingButton"));
        sizePolicy.setHeightForWidth(SettingButton->sizePolicy().hasHeightForWidth());
        SettingButton->setSizePolicy(sizePolicy);
        SettingButton->setMinimumSize(QSize(0, 50));
        SettingButton->setStyleSheet(QString::fromUtf8("background-color: qradialgradient(spread:pad, cx:0.5, cy:0.5, radius:0.5, fx:0.5, fy:0.5, stop:0 rgba(255, 235, 235, 206), stop:0.35 rgba(255, 188, 188, 150), stop:0.4 rgba(255, 162, 162, 150), stop:0.425 rgba(255, 132, 132, 150), stop:0.44 rgba(252, 128, 128, 150), stop:1 rgba(255, 255, 255, 100));"));

        HeadContainer->addWidget(SettingButton);

        BackButton = new QPushButton(verticalLayoutWidget);
        BackButton->setObjectName(QString::fromUtf8("BackButton"));
        sizePolicy.setHeightForWidth(BackButton->sizePolicy().hasHeightForWidth());
        BackButton->setSizePolicy(sizePolicy);
        BackButton->setMinimumSize(QSize(0, 50));
        BackButton->setStyleSheet(QString::fromUtf8("background-color: qconicalgradient(cx:0, cy:0, angle:135, stop:0 rgba(0, 255, 255, 69), stop:0.375 rgba(0, 73, 255, 69), stop:0.421296 rgba(0, 141, 255, 145), stop:0.43318 rgba(102, 168, 188, 171), stop:0.437788 rgba(85, 207, 195, 181), stop:0.442396 rgba(67, 225, 225, 192), stop:0.447005 rgba(56, 222, 244, 202), stop:0.45 rgba(0, 255, 238, 208), stop:0.456221 rgba(70, 253, 229, 191), stop:0.460829 rgba(27, 225, 251, 178), stop:0.470046 rgba(94, 209, 247, 151), stop:0.477581 rgba(71, 222, 255, 130), stop:0.520737 rgba(71, 197, 255, 130), stop:0.55 rgba(0, 234, 255, 255), stop:0.576037 rgba(0, 234, 255, 130), stop:0.625 rgba(36, 0, 255, 69), stop:1 rgba(0, 255, 255, 69));"));

        HeadContainer->addWidget(BackButton);

        HeadContainer->setStretch(0, 6);
        HeadContainer->setStretch(1, 1);
        HeadContainer->setStretch(2, 1);
        HeadContainer->setStretch(3, 1);
        HeadContainer->setStretch(4, 1);
        HeadContainer->setStretch(5, 1);

        retranslateUi(Pass_Game);

        QMetaObject::connectSlotsByName(Pass_Game);
    } // setupUi

    void retranslateUi(QWidget *Pass_Game)
    {
        Pass_Game->setWindowTitle(QCoreApplication::translate("Pass_Game", "Form", nullptr));
        Label->setText(QCoreApplication::translate("Pass_Game", "\345\276\227\345\210\206", nullptr));
        Label_2->setText(QCoreApplication::translate("Pass_Game", "\346\223\215\344\275\234\346\255\245\346\225\260", nullptr));
        Label_3->setText(QCoreApplication::translate("Pass_Game", "\345\267\262\347\224\250\346\227\266\351\227\264", nullptr));
        Label_4->setText(QCoreApplication::translate("Pass_Game", "\350\233\207\347\232\204\347\255\211\347\272\247", nullptr));
        StartButton->setText(QCoreApplication::translate("Pass_Game", "\345\274\200\345\247\213", nullptr));
        RestartButton->setText(QCoreApplication::translate("Pass_Game", "\351\207\215\346\226\260\345\274\200\345\247\213", nullptr));
        HelpButton->setText(QCoreApplication::translate("Pass_Game", "\350\257\264\346\230\216", nullptr));
        SettingButton->setText(QCoreApplication::translate("Pass_Game", "\350\256\276\347\275\256", nullptr));
        BackButton->setText(QCoreApplication::translate("Pass_Game", "\350\277\224\345\233\236", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Pass_Game: public Ui_Pass_Game {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PASS_GAME_H
