/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.14.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *verticalLayoutWidget;
    QVBoxLayout *HeadContainer;
    QLabel *Title;
    QSpacerItem *verticalSpacer;
    QPushButton *StartButton;
    QPushButton *HelpButton;
    QPushButton *ExitButton;

    void setupUi(QWidget *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(820, 620);
        MainWindow->setMinimumSize(QSize(0, 0));
        MainWindow->setStyleSheet(QString::fromUtf8(""));
        verticalLayoutWidget = new QWidget(MainWindow);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(0, 0, 821, 621));
        HeadContainer = new QVBoxLayout(verticalLayoutWidget);
        HeadContainer->setSpacing(30);
        HeadContainer->setObjectName(QString::fromUtf8("HeadContainer"));
        HeadContainer->setContentsMargins(100, 50, 100, 50);
        Title = new QLabel(verticalLayoutWidget);
        Title->setObjectName(QString::fromUtf8("Title"));
        Title->setMinimumSize(QSize(0, 0));
        Title->setStyleSheet(QString::fromUtf8("image: url(:/Image/title.png);\n"
"background-color: rgba(255, 255, 255, 0);"));

        HeadContainer->addWidget(Title);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        HeadContainer->addItem(verticalSpacer);

        StartButton = new QPushButton(verticalLayoutWidget);
        StartButton->setObjectName(QString::fromUtf8("StartButton"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(StartButton->sizePolicy().hasHeightForWidth());
        StartButton->setSizePolicy(sizePolicy);
        StartButton->setMinimumSize(QSize(0, 0));
        QFont font;
        font.setFamily(QString::fromUtf8("Agency FB"));
        StartButton->setFont(font);
        StartButton->setStyleSheet(QString::fromUtf8("background-color: qconicalgradient(cx:0, cy:0, angle:135, stop:0 rgba(255, 255, 0, 69), stop:0.375 rgba(255, 255, 0, 69), stop:0.423533 rgba(251, 255, 0, 145), stop:0.45 rgba(247, 255, 0, 208), stop:0.477581 rgba(255, 244, 71, 130), stop:0.518717 rgba(255, 218, 71, 130), stop:0.55 rgba(255, 255, 0, 255), stop:0.57754 rgba(255, 203, 0, 130), stop:0.625 rgba(255, 255, 0, 69), stop:1 rgba(255, 255, 0, 69));"));
        StartButton->setFlat(false);

        HeadContainer->addWidget(StartButton);

        HelpButton = new QPushButton(verticalLayoutWidget);
        HelpButton->setObjectName(QString::fromUtf8("HelpButton"));
        sizePolicy.setHeightForWidth(HelpButton->sizePolicy().hasHeightForWidth());
        HelpButton->setSizePolicy(sizePolicy);
        HelpButton->setMinimumSize(QSize(0, 0));
        HelpButton->setFont(font);
        HelpButton->setStyleSheet(QString::fromUtf8("background-color: qconicalgradient(cx:0, cy:0, angle:135, stop:0 rgba(255, 255, 0, 69), stop:0.375 rgba(255, 255, 0, 69), stop:0.423533 rgba(251, 255, 0, 145), stop:0.45 rgba(247, 255, 0, 208), stop:0.477581 rgba(255, 244, 71, 130), stop:0.518717 rgba(255, 218, 71, 130), stop:0.55 rgba(255, 255, 0, 255), stop:0.57754 rgba(255, 203, 0, 130), stop:0.625 rgba(255, 255, 0, 69), stop:1 rgba(255, 255, 0, 69));"));

        HeadContainer->addWidget(HelpButton);

        ExitButton = new QPushButton(verticalLayoutWidget);
        ExitButton->setObjectName(QString::fromUtf8("ExitButton"));
        sizePolicy.setHeightForWidth(ExitButton->sizePolicy().hasHeightForWidth());
        ExitButton->setSizePolicy(sizePolicy);
        ExitButton->setMinimumSize(QSize(0, 0));
        ExitButton->setFont(font);
        ExitButton->setStyleSheet(QString::fromUtf8("background-color: qconicalgradient(cx:0, cy:0, angle:135, stop:0 rgba(0, 255, 255, 69), stop:0.375 rgba(0, 73, 255, 69), stop:0.421296 rgba(0, 141, 255, 145), stop:0.43318 rgba(102, 168, 188, 171), stop:0.437788 rgba(85, 207, 195, 181), stop:0.442396 rgba(67, 225, 225, 192), stop:0.447005 rgba(56, 222, 244, 202), stop:0.45 rgba(0, 255, 238, 208), stop:0.456221 rgba(70, 253, 229, 191), stop:0.460829 rgba(27, 225, 251, 178), stop:0.470046 rgba(94, 209, 247, 151), stop:0.477581 rgba(71, 222, 255, 130), stop:0.520737 rgba(71, 197, 255, 130), stop:0.55 rgba(0, 234, 255, 255), stop:0.576037 rgba(0, 234, 255, 130), stop:0.625 rgba(36, 0, 255, 69), stop:1 rgba(0, 255, 255, 69));\n"
"selection-color: rgba(255, 255, 255, 0);"));

        HeadContainer->addWidget(ExitButton);

        HeadContainer->setStretch(0, 5);
        HeadContainer->setStretch(1, 1);
        HeadContainer->setStretch(2, 2);
        HeadContainer->setStretch(3, 2);
        HeadContainer->setStretch(4, 2);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QWidget *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        Title->setText(QString());
        StartButton->setText(QCoreApplication::translate("MainWindow", "\345\274\200\345\247\213", nullptr));
        HelpButton->setText(QCoreApplication::translate("MainWindow", "\346\270\270\346\210\217\350\257\264\346\230\216", nullptr));
        ExitButton->setText(QCoreApplication::translate("MainWindow", "\351\200\200\345\207\272", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
