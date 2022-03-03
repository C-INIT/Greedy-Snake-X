/********************************************************************************
** Form generated from reading UI file 'player_rank.ui'
**
** Created by: Qt User Interface Compiler version 5.14.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PLAYER_RANK_H
#define UI_PLAYER_RANK_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Player_Rank
{
public:
    QWidget *verticalLayoutWidget;
    QVBoxLayout *HeadContainer;
    QTableWidget *RankView;
    QPushButton *BackToMenuButton;
    QPushButton *BackToGameButton;
    QPushButton *RestartButton;

    void setupUi(QWidget *Player_Rank)
    {
        if (Player_Rank->objectName().isEmpty())
            Player_Rank->setObjectName(QString::fromUtf8("Player_Rank"));
        Player_Rank->resize(520, 560);
        verticalLayoutWidget = new QWidget(Player_Rank);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(-1, 0, 521, 561));
        HeadContainer = new QVBoxLayout(verticalLayoutWidget);
        HeadContainer->setSpacing(30);
        HeadContainer->setObjectName(QString::fromUtf8("HeadContainer"));
        HeadContainer->setContentsMargins(30, 20, 30, 30);
        RankView = new QTableWidget(verticalLayoutWidget);
        if (RankView->columnCount() < 4)
            RankView->setColumnCount(4);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        RankView->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        RankView->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        RankView->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        RankView->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        if (RankView->rowCount() < 9)
            RankView->setRowCount(9);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        RankView->setVerticalHeaderItem(0, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        RankView->setVerticalHeaderItem(1, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        RankView->setVerticalHeaderItem(2, __qtablewidgetitem6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        RankView->setVerticalHeaderItem(3, __qtablewidgetitem7);
        QTableWidgetItem *__qtablewidgetitem8 = new QTableWidgetItem();
        RankView->setVerticalHeaderItem(4, __qtablewidgetitem8);
        QTableWidgetItem *__qtablewidgetitem9 = new QTableWidgetItem();
        RankView->setVerticalHeaderItem(5, __qtablewidgetitem9);
        QTableWidgetItem *__qtablewidgetitem10 = new QTableWidgetItem();
        RankView->setVerticalHeaderItem(6, __qtablewidgetitem10);
        QTableWidgetItem *__qtablewidgetitem11 = new QTableWidgetItem();
        RankView->setVerticalHeaderItem(7, __qtablewidgetitem11);
        QTableWidgetItem *__qtablewidgetitem12 = new QTableWidgetItem();
        RankView->setVerticalHeaderItem(8, __qtablewidgetitem12);
        RankView->setObjectName(QString::fromUtf8("RankView"));
        RankView->setEnabled(true);
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(RankView->sizePolicy().hasHeightForWidth());
        RankView->setSizePolicy(sizePolicy);
        RankView->setEditTriggers(QAbstractItemView::NoEditTriggers);

        HeadContainer->addWidget(RankView);

        BackToMenuButton = new QPushButton(verticalLayoutWidget);
        BackToMenuButton->setObjectName(QString::fromUtf8("BackToMenuButton"));
        sizePolicy.setHeightForWidth(BackToMenuButton->sizePolicy().hasHeightForWidth());
        BackToMenuButton->setSizePolicy(sizePolicy);
        BackToMenuButton->setMinimumSize(QSize(0, 0));
        BackToMenuButton->setMaximumSize(QSize(16777215, 16777215));
        BackToMenuButton->setContextMenuPolicy(Qt::DefaultContextMenu);
        BackToMenuButton->setLayoutDirection(Qt::LeftToRight);
        BackToMenuButton->setStyleSheet(QString::fromUtf8("background-color: qconicalgradient(cx:0, cy:0, angle:135, stop:0 rgba(255, 255, 0, 69), stop:0.375 rgba(255, 255, 0, 69), stop:0.423533 rgba(251, 255, 0, 145), stop:0.45 rgba(247, 255, 0, 208), stop:0.477581 rgba(255, 244, 71, 130), stop:0.518717 rgba(255, 218, 71, 130), stop:0.55 rgba(255, 255, 0, 255), stop:0.57754 rgba(255, 203, 0, 130), stop:0.625 rgba(255, 255, 0, 69), stop:1 rgba(255, 255, 0, 69));"));

        HeadContainer->addWidget(BackToMenuButton);

        BackToGameButton = new QPushButton(verticalLayoutWidget);
        BackToGameButton->setObjectName(QString::fromUtf8("BackToGameButton"));
        sizePolicy.setHeightForWidth(BackToGameButton->sizePolicy().hasHeightForWidth());
        BackToGameButton->setSizePolicy(sizePolicy);
        BackToGameButton->setMinimumSize(QSize(0, 0));
        BackToGameButton->setMaximumSize(QSize(16777215, 16777215));
        BackToGameButton->setStyleSheet(QString::fromUtf8("background-color: qradialgradient(spread:pad, cx:0.5, cy:0.5, radius:0.5, fx:0.5, fy:0.5, stop:0 rgba(255, 235, 235, 206), stop:0.35 rgba(255, 188, 188, 150), stop:0.4 rgba(255, 162, 162, 150), stop:0.425 rgba(255, 132, 132, 150), stop:0.44 rgba(252, 128, 128, 150), stop:1 rgba(255, 255, 255, 100));"));

        HeadContainer->addWidget(BackToGameButton);

        RestartButton = new QPushButton(verticalLayoutWidget);
        RestartButton->setObjectName(QString::fromUtf8("RestartButton"));
        sizePolicy.setHeightForWidth(RestartButton->sizePolicy().hasHeightForWidth());
        RestartButton->setSizePolicy(sizePolicy);
        RestartButton->setMinimumSize(QSize(0, 0));
        RestartButton->setMaximumSize(QSize(16777215, 16777215));
        RestartButton->setLayoutDirection(Qt::LeftToRight);
        RestartButton->setStyleSheet(QString::fromUtf8("background-color: qconicalgradient(cx:0, cy:0, angle:135, stop:0 rgba(0, 255, 255, 69), stop:0.375 rgba(0, 73, 255, 69), stop:0.421296 rgba(0, 141, 255, 145), stop:0.43318 rgba(102, 168, 188, 171), stop:0.437788 rgba(85, 207, 195, 181), stop:0.442396 rgba(67, 225, 225, 192), stop:0.447005 rgba(56, 222, 244, 202), stop:0.45 rgba(0, 255, 238, 208), stop:0.456221 rgba(70, 253, 229, 191), stop:0.460829 rgba(27, 225, 251, 178), stop:0.470046 rgba(94, 209, 247, 151), stop:0.477581 rgba(71, 222, 255, 130), stop:0.520737 rgba(71, 197, 255, 130), stop:0.55 rgba(0, 234, 255, 255), stop:0.576037 rgba(0, 234, 255, 130), stop:0.625 rgba(36, 0, 255, 69), stop:1 rgba(0, 255, 255, 69));"));

        HeadContainer->addWidget(RestartButton);

        HeadContainer->setStretch(0, 8);
        HeadContainer->setStretch(1, 1);
        HeadContainer->setStretch(2, 1);
        HeadContainer->setStretch(3, 1);

        retranslateUi(Player_Rank);

        QMetaObject::connectSlotsByName(Player_Rank);
    } // setupUi

    void retranslateUi(QWidget *Player_Rank)
    {
        Player_Rank->setWindowTitle(QCoreApplication::translate("Player_Rank", "\347\216\251\345\256\266\346\216\222\350\241\214\346\246\234", nullptr));
        QTableWidgetItem *___qtablewidgetitem = RankView->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("Player_Rank", "\347\216\251\345\256\266\345\220\215", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = RankView->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("Player_Rank", "\345\276\227\345\210\206", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = RankView->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("Player_Rank", "\346\211\200\347\224\250\346\227\266\351\227\264", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = RankView->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("Player_Rank", "\346\223\215\344\275\234\346\255\245\346\225\260", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = RankView->verticalHeaderItem(0);
        ___qtablewidgetitem4->setText(QCoreApplication::translate("Player_Rank", "1", nullptr));
        QTableWidgetItem *___qtablewidgetitem5 = RankView->verticalHeaderItem(1);
        ___qtablewidgetitem5->setText(QCoreApplication::translate("Player_Rank", "2", nullptr));
        QTableWidgetItem *___qtablewidgetitem6 = RankView->verticalHeaderItem(2);
        ___qtablewidgetitem6->setText(QCoreApplication::translate("Player_Rank", "3", nullptr));
        QTableWidgetItem *___qtablewidgetitem7 = RankView->verticalHeaderItem(3);
        ___qtablewidgetitem7->setText(QCoreApplication::translate("Player_Rank", "4", nullptr));
        QTableWidgetItem *___qtablewidgetitem8 = RankView->verticalHeaderItem(4);
        ___qtablewidgetitem8->setText(QCoreApplication::translate("Player_Rank", "5", nullptr));
        QTableWidgetItem *___qtablewidgetitem9 = RankView->verticalHeaderItem(5);
        ___qtablewidgetitem9->setText(QCoreApplication::translate("Player_Rank", "6", nullptr));
        QTableWidgetItem *___qtablewidgetitem10 = RankView->verticalHeaderItem(6);
        ___qtablewidgetitem10->setText(QCoreApplication::translate("Player_Rank", "7", nullptr));
        QTableWidgetItem *___qtablewidgetitem11 = RankView->verticalHeaderItem(7);
        ___qtablewidgetitem11->setText(QCoreApplication::translate("Player_Rank", "9", nullptr));
        QTableWidgetItem *___qtablewidgetitem12 = RankView->verticalHeaderItem(8);
        ___qtablewidgetitem12->setText(QCoreApplication::translate("Player_Rank", "10", nullptr));
        BackToMenuButton->setText(QCoreApplication::translate("Player_Rank", "\351\207\215\347\216\251\344\270\200\345\261\200", nullptr));
        BackToGameButton->setText(QCoreApplication::translate("Player_Rank", "\350\277\224\345\233\236\346\270\270\346\210\217\347\225\214\351\235\242", nullptr));
        RestartButton->setText(QCoreApplication::translate("Player_Rank", "\350\277\224\345\233\236\346\270\270\346\210\217\345\210\227\350\241\250", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Player_Rank: public Ui_Player_Rank {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PLAYER_RANK_H
