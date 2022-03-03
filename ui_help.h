/********************************************************************************
** Form generated from reading UI file 'help.ui'
**
** Created by: Qt User Interface Compiler version 5.14.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HELP_H
#define UI_HELP_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Help
{
public:
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QTabWidget *tabWidget;
    QWidget *tab;
    QWidget *verticalLayoutWidget_3;
    QVBoxLayout *verticalLayout_3;
    QTextEdit *textEdit_2;
    QWidget *tab_2;
    QWidget *verticalLayoutWidget_2;
    QVBoxLayout *verticalLayout_2;
    QTextEdit *textEdit;
    QWidget *tab_3;
    QWidget *verticalLayoutWidget_4;
    QVBoxLayout *verticalLayout_4;
    QTextEdit *textEdit_3;
    QTableWidget *BlockView;
    QWidget *tab_4;
    QWidget *verticalLayoutWidget_5;
    QVBoxLayout *verticalLayout_5;
    QTextEdit *textEdit_4;
    QWidget *tab_5;
    QWidget *verticalLayoutWidget_6;
    QVBoxLayout *verticalLayout_6;
    QTextEdit *textEdit_5;
    QPushButton *BackButton;

    void setupUi(QWidget *Help)
    {
        if (Help->objectName().isEmpty())
            Help->setObjectName(QString::fromUtf8("Help"));
        Help->resize(620, 620);
        verticalLayoutWidget = new QWidget(Help);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(0, 0, 621, 621));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(10, 10, 10, 10);
        tabWidget = new QTabWidget(verticalLayoutWidget);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        verticalLayoutWidget_3 = new QWidget(tab);
        verticalLayoutWidget_3->setObjectName(QString::fromUtf8("verticalLayoutWidget_3"));
        verticalLayoutWidget_3->setGeometry(QRect(0, 0, 601, 501));
        verticalLayout_3 = new QVBoxLayout(verticalLayoutWidget_3);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        textEdit_2 = new QTextEdit(verticalLayoutWidget_3);
        textEdit_2->setObjectName(QString::fromUtf8("textEdit_2"));

        verticalLayout_3->addWidget(textEdit_2);

        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        verticalLayoutWidget_2 = new QWidget(tab_2);
        verticalLayoutWidget_2->setObjectName(QString::fromUtf8("verticalLayoutWidget_2"));
        verticalLayoutWidget_2->setGeometry(QRect(0, 0, 601, 501));
        verticalLayout_2 = new QVBoxLayout(verticalLayoutWidget_2);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        textEdit = new QTextEdit(verticalLayoutWidget_2);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));
        textEdit->setReadOnly(true);

        verticalLayout_2->addWidget(textEdit);

        tabWidget->addTab(tab_2, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QString::fromUtf8("tab_3"));
        verticalLayoutWidget_4 = new QWidget(tab_3);
        verticalLayoutWidget_4->setObjectName(QString::fromUtf8("verticalLayoutWidget_4"));
        verticalLayoutWidget_4->setGeometry(QRect(0, 0, 601, 501));
        verticalLayout_4 = new QVBoxLayout(verticalLayoutWidget_4);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        textEdit_3 = new QTextEdit(verticalLayoutWidget_4);
        textEdit_3->setObjectName(QString::fromUtf8("textEdit_3"));
        textEdit_3->setReadOnly(true);

        verticalLayout_4->addWidget(textEdit_3);

        BlockView = new QTableWidget(verticalLayoutWidget_4);
        if (BlockView->columnCount() < 3)
            BlockView->setColumnCount(3);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        BlockView->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        BlockView->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        BlockView->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        if (BlockView->rowCount() < 9)
            BlockView->setRowCount(9);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        BlockView->setVerticalHeaderItem(0, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        BlockView->setVerticalHeaderItem(1, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        BlockView->setVerticalHeaderItem(2, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        BlockView->setVerticalHeaderItem(3, __qtablewidgetitem6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        BlockView->setVerticalHeaderItem(4, __qtablewidgetitem7);
        QTableWidgetItem *__qtablewidgetitem8 = new QTableWidgetItem();
        BlockView->setVerticalHeaderItem(5, __qtablewidgetitem8);
        QTableWidgetItem *__qtablewidgetitem9 = new QTableWidgetItem();
        BlockView->setVerticalHeaderItem(6, __qtablewidgetitem9);
        QTableWidgetItem *__qtablewidgetitem10 = new QTableWidgetItem();
        BlockView->setVerticalHeaderItem(7, __qtablewidgetitem10);
        QTableWidgetItem *__qtablewidgetitem11 = new QTableWidgetItem();
        BlockView->setVerticalHeaderItem(8, __qtablewidgetitem11);
        QTableWidgetItem *__qtablewidgetitem12 = new QTableWidgetItem();
        BlockView->setItem(0, 0, __qtablewidgetitem12);
        QTableWidgetItem *__qtablewidgetitem13 = new QTableWidgetItem();
        BlockView->setItem(1, 0, __qtablewidgetitem13);
        QTableWidgetItem *__qtablewidgetitem14 = new QTableWidgetItem();
        BlockView->setItem(2, 0, __qtablewidgetitem14);
        QTableWidgetItem *__qtablewidgetitem15 = new QTableWidgetItem();
        BlockView->setItem(3, 0, __qtablewidgetitem15);
        QTableWidgetItem *__qtablewidgetitem16 = new QTableWidgetItem();
        BlockView->setItem(4, 0, __qtablewidgetitem16);
        QTableWidgetItem *__qtablewidgetitem17 = new QTableWidgetItem();
        BlockView->setItem(5, 0, __qtablewidgetitem17);
        QTableWidgetItem *__qtablewidgetitem18 = new QTableWidgetItem();
        BlockView->setItem(6, 0, __qtablewidgetitem18);
        QTableWidgetItem *__qtablewidgetitem19 = new QTableWidgetItem();
        BlockView->setItem(7, 0, __qtablewidgetitem19);
        QTableWidgetItem *__qtablewidgetitem20 = new QTableWidgetItem();
        BlockView->setItem(8, 0, __qtablewidgetitem20);
        BlockView->setObjectName(QString::fromUtf8("BlockView"));
        BlockView->setEditTriggers(QAbstractItemView::NoEditTriggers);
        BlockView->horizontalHeader()->setStretchLastSection(true);
        BlockView->verticalHeader()->setMinimumSectionSize(50);
        BlockView->verticalHeader()->setStretchLastSection(false);

        verticalLayout_4->addWidget(BlockView);

        verticalLayout_4->setStretch(0, 2);
        verticalLayout_4->setStretch(1, 1);
        tabWidget->addTab(tab_3, QString());
        tab_4 = new QWidget();
        tab_4->setObjectName(QString::fromUtf8("tab_4"));
        verticalLayoutWidget_5 = new QWidget(tab_4);
        verticalLayoutWidget_5->setObjectName(QString::fromUtf8("verticalLayoutWidget_5"));
        verticalLayoutWidget_5->setGeometry(QRect(0, -1, 601, 501));
        verticalLayout_5 = new QVBoxLayout(verticalLayoutWidget_5);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        verticalLayout_5->setContentsMargins(0, 0, 0, 0);
        textEdit_4 = new QTextEdit(verticalLayoutWidget_5);
        textEdit_4->setObjectName(QString::fromUtf8("textEdit_4"));
        textEdit_4->setReadOnly(true);

        verticalLayout_5->addWidget(textEdit_4);

        tabWidget->addTab(tab_4, QString());
        tab_5 = new QWidget();
        tab_5->setObjectName(QString::fromUtf8("tab_5"));
        verticalLayoutWidget_6 = new QWidget(tab_5);
        verticalLayoutWidget_6->setObjectName(QString::fromUtf8("verticalLayoutWidget_6"));
        verticalLayoutWidget_6->setGeometry(QRect(0, 0, 601, 501));
        verticalLayout_6 = new QVBoxLayout(verticalLayoutWidget_6);
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        verticalLayout_6->setContentsMargins(0, 0, 0, 0);
        textEdit_5 = new QTextEdit(verticalLayoutWidget_6);
        textEdit_5->setObjectName(QString::fromUtf8("textEdit_5"));
        textEdit_5->setReadOnly(true);

        verticalLayout_6->addWidget(textEdit_5);

        tabWidget->addTab(tab_5, QString());

        verticalLayout->addWidget(tabWidget);

        BackButton = new QPushButton(verticalLayoutWidget);
        BackButton->setObjectName(QString::fromUtf8("BackButton"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(BackButton->sizePolicy().hasHeightForWidth());
        BackButton->setSizePolicy(sizePolicy);
        BackButton->setMinimumSize(QSize(0, 0));
        BackButton->setMaximumSize(QSize(16777215, 16777215));
        BackButton->setStyleSheet(QString::fromUtf8("background-color: qconicalgradient(cx:0, cy:0, angle:135, stop:0 rgba(0, 255, 255, 69), stop:0.375 rgba(0, 73, 255, 69), stop:0.421296 rgba(0, 141, 255, 145), stop:0.43318 rgba(102, 168, 188, 171), stop:0.437788 rgba(85, 207, 195, 181), stop:0.442396 rgba(67, 225, 225, 192), stop:0.447005 rgba(56, 222, 244, 202), stop:0.45 rgba(0, 255, 238, 208), stop:0.456221 rgba(70, 253, 229, 191), stop:0.460829 rgba(27, 225, 251, 178), stop:0.470046 rgba(94, 209, 247, 151), stop:0.477581 rgba(71, 222, 255, 130), stop:0.520737 rgba(71, 197, 255, 130), stop:0.55 rgba(0, 234, 255, 255), stop:0.576037 rgba(0, 234, 255, 130), stop:0.625 rgba(36, 0, 255, 69), stop:1 rgba(0, 255, 255, 69));"));

        verticalLayout->addWidget(BackButton);

        verticalLayout->setStretch(0, 10);
        verticalLayout->setStretch(1, 1);

        retranslateUi(Help);

        tabWidget->setCurrentIndex(4);


        QMetaObject::connectSlotsByName(Help);
    } // setupUi

    void retranslateUi(QWidget *Help)
    {
        Help->setWindowTitle(QCoreApplication::translate("Help", "  \346\270\270\346\210\217\350\257\264\346\230\216", nullptr));
        textEdit_2->setHtml(QCoreApplication::translate("Help", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'SimSun'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'SimSun';\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'SimSun'; font-size:10pt;\">    \346\254\242\350\277\216\346\235\245\345\210\260\350\264\252\345\220\203\350\233\207\346\270\270\346\210\217\357\274\201</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'SimSun'; font-size:10pt;\"><br /></p"
                        ">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'SimSun'; font-size:10pt;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'SimSun'; font-size:10pt;\">    \346\270\270\346\210\217\350\257\264\346\230\216\357\274\232</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'SimSun'; font-size:10pt;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'SimSun'; font-size:10pt;\">    \346\234\254\346\270\270\346\210\217\345\210\206\344\270\272\347\273\217\345\205\270\346\250\241\345\274\217\345\222\214\351\227\257\345\205\263\346\250\241\345\274\217\357\274\214\344\270"
                        "\244\350\200\205\346\250\241\345\274\217\345\235\207\346\234\211\346\210\220\345\260\261\346\216\222\350\241\214\346\246\234\343\200\202</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'SimSun'; font-size:10pt;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'SimSun'; font-size:10pt;\">    \347\273\217\345\205\270\346\250\241\345\274\217\344\270\216\344\274\240\347\273\237\347\232\204\350\264\252\345\220\203\350\233\207\347\216\251\346\263\225\347\261\273\344\274\274\357\274\214\344\270\215\345\220\214\347\232\204\345\234\250\350\257\245\346\250\241\345\274\217\344\270\213\347\224\250\346\210\267\345\217\257\344\273\245\350\207\252\345\256\232\344\271\211\350\233\207\347\232\204\351\200\237\345\272\246\357\274\214\351\243\237\347\211\251\346\225\260\351\207\217\357\274\214\345"
                        "\234\260\345\233\276\345\244\247\345\260\217\357\274\214\350\233\207\346\222\236\345\210\260\350\272\253\344\275\223\346\210\226\345\242\231\347\232\204\347\212\266\345\206\265\343\200\202</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'SimSun'; font-size:10pt;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'SimSun'; font-size:10pt;\">    \351\227\257\345\205\263\346\250\241\345\274\217\357\274\214\345\210\231\346\230\257\345\234\250\345\237\272\346\234\254\347\232\204\350\264\252\345\220\203\350\233\207\347\216\251\346\263\225\344\270\213\345\242\236\345\212\240\344\272\206\351\232\234\347\242\215\347\211\251\345\222\214\345\215\207\347\272\247\345\212\237\350\203\275\343\200\202\347\216\251\345\256\266\345\217\257\344\273\245\350\207\252\345\256\232\344\271\211\345\234\260"
                        "\345\233\276\357\274\214\345\234\260\345\233\276\344\270\255\345\217\257\344\273\245\350\207\252\345\256\232\344\271\211\350\233\207\347\232\204\345\207\272\347\224\237\347\202\271\357\274\214\350\277\230\346\217\220\344\276\233\344\272\206\345\244\232\347\247\215\351\232\234\347\242\215\347\211\251\345\222\214\345\215\207\347\272\247\346\234\272\345\210\266\343\200\202\344\275\206\350\233\207\347\232\204\351\200\237\345\272\246\357\274\214\351\243\237\347\211\251\346\225\260\351\207\217\357\274\214\345\234\260\345\233\276\345\244\247\345\260\217\357\274\214\350\233\207\346\222\236\345\210\260\350\272\253\344\275\223\346\210\226\345\242\231\347\232\204\347\212\266\345\206\265\344\270\215\345\217\257\344\277\256\346\224\271\343\200\202</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'SimSun'; font-size:10pt;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; ma"
                        "rgin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'SimSun'; font-size:10pt;\">    \350\257\246\347\273\206\346\270\270\346\210\217\350\257\264\346\230\216\350\257\267\347\234\213\345\205\266\344\273\226\351\241\265\351\235\242\347\232\204\345\270\256\345\212\251\343\200\202</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'SimSun'; font-size:10pt;\"><br /></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'SimSun'; font-size:10pt;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'SimSun'; font-size:10pt;\">    \346\270\270\346\210\217\346\223\215\344\275\234\357\274\232</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; ma"
                        "rgin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'SimSun'; font-size:10pt;\">    W\357\274\214S\357\274\214A\357\274\214D\345\210\206\345\210\253\346\216\247\345\210\266\350\233\207\345\220\221\344\270\212\357\274\214\344\270\213\357\274\214\345\267\246\357\274\214\345\217\263\350\265\260\343\200\202\344\271\237\345\217\257\347\224\250\346\226\271\345\220\221\351\224\256\346\216\247\345\210\266\357\274\214\346\255\244\346\227\266\350\233\207\347\232\204\350\241\214\350\265\260\346\226\271\345\220\221\344\270\216\346\226\271\345\220\221\351\224\256\346\226\271\345\220\221\347\233\270\345\220\214\343\200\202</span></p></body></html>", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QCoreApplication::translate("Help", "\346\270\270\346\210\217\347\256\200\344\273\213", nullptr));
        textEdit->setHtml(QCoreApplication::translate("Help", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'SimSun'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'SimSun';\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'SimSun'; font-size:10pt;\">    \350\207\252\347\224\261\346\250\241\345\274\217\357\274\232</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'SimSun'; font-size:10pt;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-"
                        "left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'SimSun'; font-size:10pt;\">    \345\234\250\350\207\252\347\224\261\346\250\241\345\274\217\344\270\213\357\274\214\346\270\270\346\210\217\345\234\260\345\233\276\344\270\255\346\257\253\346\227\240\351\232\234\347\242\215\347\211\251\357\274\214\350\277\230\345\217\257\344\277\256\346\224\271\346\270\270\346\210\217\347\232\204\345\244\232\347\247\215\345\261\236\346\200\247\343\200\202\351\234\200\350\246\201\346\263\250\346\204\217\347\232\204\346\230\257\357\274\214\344\270\272\344\272\206\344\277\235\350\257\201\345\205\254\345\271\263\345\205\254\346\255\243\357\274\214\350\213\245\347\216\251\345\256\266\346\212\212\351\232\217\346\234\272\351\243\237\347\211\251\347\232\204\346\225\260\351\207\217\350\256\276\347\275\256\346\210\220\350\266\205\350\277\2071\357\274\214\346\210\226\350\200\205\346\270\270\346\210\217\346\250\241\345\274\217\344\270\255\357\274\214\350\233\207\346\222\236\345\210\260\350\276\271"
                        "\347\225\214\346\210\226\350\207\252\350\272\253\344\270\215\344\274\232\346\255\273\344\272\241\346\227\266\357\274\214\347\216\251\345\256\266\347\232\204\345\210\206\346\225\260\345\260\206\344\270\215\344\274\232\350\277\233\345\205\245\346\216\222\350\241\214\346\246\234\343\200\202</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'SimSun'; font-size:10pt;\">    </span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'SimSun'; font-size:10pt;\">    \346\270\270\346\210\217\346\223\215\344\275\234\350\257\264\346\230\216\350\257\267\347\234\213\342\200\234\346\270\270\346\210\217\347\256\200\344\273\213\342\200\235\343\200\202\345\234\250\346\270\270\346\210\217\350\277\207\347\250\213\344\270\255\357\274\214\347\216\251\345\256\266\345\217\257\344\273\245\351\232\217\346\227\266\346\232\202"
                        "\345\201\234\357\274\214\344\270\215\350\277\207\344\270\215\350\203\275\344\277\235\345\255\230\346\270\270\346\210\217\350\277\233\345\272\246\343\200\202\347\216\251\345\256\266\345\234\250\344\270\255\351\200\224\351\200\200\345\207\272\346\270\270\346\210\217\344\270\215\344\274\232\350\216\267\345\276\227\346\270\270\346\210\217\345\210\206\346\225\260\357\274\214\345\217\252\346\234\211\350\233\207\346\255\273\344\272\241\346\210\226\347\216\251\345\256\266\347\202\271\345\207\273\351\207\215\346\226\260\345\274\200\345\247\213\345\271\266\347\241\256\350\256\244\357\274\214\346\211\215\350\203\275\350\216\267\345\276\227\346\270\270\346\210\217\345\276\227\345\210\206\343\200\202</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'SimSun'; font-size:10pt;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:"
                        "0px;\"><span style=\" font-family:'SimSun'; font-size:10pt;\">    \345\275\223\350\233\207\345\220\203\346\216\211\344\270\200\344\270\252\351\243\237\347\211\251\346\227\266\357\274\214\347\216\251\345\256\266\345\276\2271\345\210\206\343\200\202\347\216\251\345\256\266\347\232\204\346\216\222\350\241\214\346\246\234\344\276\235\346\254\241\345\276\227\345\210\206\357\274\214\346\227\266\351\227\264\357\274\214\346\223\215\344\275\234\346\255\245\351\252\244\350\277\233\350\241\214\346\216\222\345\272\217\343\200\202\345\276\227\345\210\206\350\266\212\351\253\230\350\266\212\345\245\275\357\274\214\346\227\266\351\227\264\345\222\214\346\223\215\344\275\234\346\255\245\351\252\244\350\266\212\345\260\221\350\266\212\345\245\275\343\200\202</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'SimSun'; font-size:10pt;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:"
                        "0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'SimSun'; font-size:10pt;\">    \357\274\210\346\263\250\357\274\232\347\202\271\345\207\273\342\200\234\351\207\215\346\226\260\345\274\200\345\247\213\342\200\235\346\214\211\351\222\256\346\227\266\346\270\270\346\210\217\344\274\232\350\207\252\345\212\250\346\232\202\345\201\234\357\274\214\345\274\271\345\207\272\351\200\211\346\213\251\346\241\206\345\220\216\350\256\251\347\224\250\346\210\267\345\206\215\346\254\241\347\241\256\345\256\232\346\230\257\345\220\246\351\207\215\346\226\260\345\274\200\345\247\213\357\274\214\344\270\215\344\274\232\347\253\213\345\215\263\351\207\215\346\226\260\345\274\200\345\247\213\357\274\211</span></p></body></html>", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QCoreApplication::translate("Help", "\350\207\252\347\224\261\346\250\241\345\274\217", nullptr));
        textEdit_3->setHtml(QCoreApplication::translate("Help", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'SimSun'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'SimSun';\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'SimSun'; font-size:10pt;\">    \351\227\257\345\205\263\346\250\241\345\274\217\357\274\232</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'SimSun'; font-size:10pt;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-"
                        "left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'SimSun'; font-size:10pt;\">    \346\270\270\346\210\217\350\247\204\345\210\231\357\274\232</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'SimSun'; font-size:10pt;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'SimSun'; font-size:10pt;\">    \345\234\250\351\227\257\345\205\263\346\250\241\345\274\217\344\270\213\357\274\214\347\216\251\345\256\266\345\217\257\344\273\245\350\207\252\347\224\261\351\200\211\346\213\251\344\270\215\345\220\214\345\234\260\345\233\276\343\200\202\345\234\260\345\233\276\344\270\255\346\234\200\345\244\232\345\207\272\347\216\2608\347\247\215\344\270\215\345\220\214\347\232\204\351\232\234\347\242\215\347\211\251\343\200\202\345\257\271\345\272\224"
                        "\344\273\2160~8\345\205\253\344\270\252\347\255\211\347\272\247\357\274\214\347\272\246\351\253\230\347\255\211\347\272\247\347\232\204\351\232\234\347\242\215\347\211\251\350\266\212\345\235\232\347\241\254\357\274\214\350\200\214\350\233\207\347\232\204\347\255\211\347\272\247\344\271\237\345\217\257\344\273\245\345\210\206\344\270\2720~8\345\205\253\344\270\252\347\255\211\347\272\247\357\274\214\347\254\254i\344\270\252\347\255\211\347\272\247\347\232\204\350\233\207\345\217\257\344\273\245\347\240\264\345\235\217\346\216\211\345\260\217\344\272\216\347\255\211\344\272\216\347\254\254i\344\270\252\347\255\211\347\272\247\347\232\204\351\232\234\347\242\215\347\211\251\343\200\202</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'SimSun'; font-size:10pt;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;"
                        "\"><span style=\" font-family:'SimSun'; font-size:10pt;\">    \350\213\245\350\233\207\347\242\260\345\210\260\346\257\224\350\207\252\350\272\253\347\255\211\347\272\247\346\233\264\351\253\230\347\232\204\351\232\234\347\242\215\347\211\251\357\274\214\345\210\231\344\274\232\346\255\273\344\272\241\343\200\202\345\220\214\346\227\266\357\274\214\350\233\207\345\244\264\346\222\236\345\210\260\350\207\252\345\267\261\347\232\204\350\272\253\344\275\223\346\210\226\345\234\260\345\233\276\350\276\271\347\225\214\357\274\214\344\271\237\344\274\232\346\255\273\344\272\241\343\200\202</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'SimSun';\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'SimSun';\">    </span><span style=\" font-family:'SimSun'; font-size:10pt;\">\345\275\223"
                        "\350\233\207\345\220\203\346\216\211\344\270\200\344\270\252\351\243\237\347\211\251\346\227\266\357\274\214\347\216\251\345\256\266\345\276\2271\345\210\206\357\274\214\350\233\207\345\220\203\346\216\211\344\270\200\344\270\252\347\211\271\346\256\212\351\243\237\347\211\251\357\274\214\347\216\251\345\256\266\345\276\2273\345\210\206\357\274\214\345\271\266\346\217\220\345\215\207\344\270\200\347\272\247\343\200\202\347\216\251\345\256\266\347\232\204\346\216\222\350\241\214\346\246\234\344\276\235\346\254\241\345\276\227\345\210\206\357\274\214\346\227\266\351\227\264\357\274\214\346\223\215\344\275\234\346\255\245\351\252\244\350\277\233\350\241\214\346\216\222\345\272\217\343\200\202\345\276\227\345\210\206\350\266\212\351\253\230\350\266\212\345\245\275\357\274\214\346\227\266\351\227\264\345\222\214\346\223\215\344\275\234\346\255\245\351\252\244\350\266\212\345\260\221\350\266\212\345\245\275\343\200\202\345\277\205\351\241\273\350\246\201\345\234\250\345\267\262\347\273\217\345\256\232\345\236\213\347"
                        "\232\204\345\234\260\345\233\276\344\270\212\347\216\251\345\256\266\346\211\215\350\203\275\350\216\267\345\217\226\346\270\270\346\210\217\345\210\206\346\225\260\357\274\214\345\220\246\345\210\231\344\270\215\350\203\275\343\200\202\345\205\263\344\272\216\342\200\234\345\234\260\345\233\276\345\256\232\345\236\213\342\200\235\347\232\204\346\246\202\345\277\265\350\257\246\350\247\201\345\270\256\345\212\251\346\226\207\346\241\243\347\232\204\342\200\234\345\234\260\345\233\276\350\256\276\350\256\241\342\200\235\343\200\202</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'SimSun'; font-size:10pt;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'SimSun'; font-size:10pt;\">   \350\233\207\347\232\204\346\250\241\346\240\267\344\274\232\345\233\240\344\270\272\350\233\207"
                        "\347\232\204\347\255\211\347\272\247\350\200\214\346\224\271\345\217\230\357\274\214\344\270\213\350\241\250\345\261\225\347\244\272\344\272\206\350\233\207\347\232\204\347\255\211\347\272\247\357\274\214\350\233\207\347\232\204\346\250\241\346\240\267\345\222\214\350\203\275\347\240\264\345\235\217\347\232\204\346\234\200\347\241\254\347\232\204\351\232\234\347\242\215\347\211\251\347\232\204\345\257\271\347\205\247\350\241\250\343\200\202</span></p></body></html>", nullptr));
        QTableWidgetItem *___qtablewidgetitem = BlockView->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("Help", "\350\233\207\347\232\204\347\255\211\347\272\247", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = BlockView->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("Help", "\350\233\207\347\232\204\351\242\234\350\211\262", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = BlockView->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("Help", "\350\203\275\347\240\264\345\235\217\347\232\204\346\234\200\347\241\254\347\232\204\346\226\271\345\235\227", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = BlockView->verticalHeaderItem(0);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("Help", "\347\211\271\346\256\212\351\243\237\347\211\251", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = BlockView->verticalHeaderItem(1);
        ___qtablewidgetitem4->setText(QCoreApplication::translate("Help", "\351\232\234\347\242\215\347\211\251", nullptr));
        QTableWidgetItem *___qtablewidgetitem5 = BlockView->verticalHeaderItem(2);
        ___qtablewidgetitem5->setText(QCoreApplication::translate("Help", "\351\232\234\347\242\215\347\211\251", nullptr));
        QTableWidgetItem *___qtablewidgetitem6 = BlockView->verticalHeaderItem(3);
        ___qtablewidgetitem6->setText(QCoreApplication::translate("Help", "\351\232\234\347\242\215\347\211\251", nullptr));
        QTableWidgetItem *___qtablewidgetitem7 = BlockView->verticalHeaderItem(4);
        ___qtablewidgetitem7->setText(QCoreApplication::translate("Help", "\351\232\234\347\242\215\347\211\251", nullptr));
        QTableWidgetItem *___qtablewidgetitem8 = BlockView->verticalHeaderItem(5);
        ___qtablewidgetitem8->setText(QCoreApplication::translate("Help", "\351\232\234\347\242\215\347\211\251", nullptr));
        QTableWidgetItem *___qtablewidgetitem9 = BlockView->verticalHeaderItem(6);
        ___qtablewidgetitem9->setText(QCoreApplication::translate("Help", "\351\232\234\347\242\215\347\211\251", nullptr));
        QTableWidgetItem *___qtablewidgetitem10 = BlockView->verticalHeaderItem(7);
        ___qtablewidgetitem10->setText(QCoreApplication::translate("Help", "\351\232\234\347\242\215\347\211\251", nullptr));
        QTableWidgetItem *___qtablewidgetitem11 = BlockView->verticalHeaderItem(8);
        ___qtablewidgetitem11->setText(QCoreApplication::translate("Help", "\351\232\234\347\242\215\347\211\251", nullptr));

        const bool __sortingEnabled = BlockView->isSortingEnabled();
        BlockView->setSortingEnabled(false);
        QTableWidgetItem *___qtablewidgetitem12 = BlockView->item(0, 0);
        ___qtablewidgetitem12->setText(QCoreApplication::translate("Help", "0", nullptr));
        QTableWidgetItem *___qtablewidgetitem13 = BlockView->item(1, 0);
        ___qtablewidgetitem13->setText(QCoreApplication::translate("Help", "0", nullptr));
        QTableWidgetItem *___qtablewidgetitem14 = BlockView->item(2, 0);
        ___qtablewidgetitem14->setText(QCoreApplication::translate("Help", "1", nullptr));
        QTableWidgetItem *___qtablewidgetitem15 = BlockView->item(3, 0);
        ___qtablewidgetitem15->setText(QCoreApplication::translate("Help", "2", nullptr));
        QTableWidgetItem *___qtablewidgetitem16 = BlockView->item(4, 0);
        ___qtablewidgetitem16->setText(QCoreApplication::translate("Help", "3", nullptr));
        QTableWidgetItem *___qtablewidgetitem17 = BlockView->item(5, 0);
        ___qtablewidgetitem17->setText(QCoreApplication::translate("Help", "4", nullptr));
        QTableWidgetItem *___qtablewidgetitem18 = BlockView->item(6, 0);
        ___qtablewidgetitem18->setText(QCoreApplication::translate("Help", "5", nullptr));
        QTableWidgetItem *___qtablewidgetitem19 = BlockView->item(7, 0);
        ___qtablewidgetitem19->setText(QCoreApplication::translate("Help", "6", nullptr));
        QTableWidgetItem *___qtablewidgetitem20 = BlockView->item(8, 0);
        ___qtablewidgetitem20->setText(QCoreApplication::translate("Help", "7", nullptr));
        BlockView->setSortingEnabled(__sortingEnabled);

        tabWidget->setTabText(tabWidget->indexOf(tab_3), QCoreApplication::translate("Help", "\351\227\257\345\205\263\346\250\241\345\274\217", nullptr));
        textEdit_4->setHtml(QCoreApplication::translate("Help", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'SimSun'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'SimSun';\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'SimSun'; font-size:10pt;\">    \345\234\260\345\233\276\347\232\204\345\242\236\345\210\240\346\223\215\344\275\234\345\217\257\344\273\245\345\234\250\351\227\257\345\205\263\346\250\241\345\274\217\344\270\255\347\232\204\351\200\211\346\213\251\345\234\260\345\233\276\345\205\263\345\215\241\347\232\204\347\225\214\351\235\242\350\277\233\350\241\214\343\200"
                        "\202\347\225\214\351\235\242\344\270\255\345\217\263\344\270\212\350\247\222\347\232\204\345\210\227\350\241\250\346\230\276\347\244\272\347\232\204\346\230\257\347\233\256\345\211\215\345\217\257\344\273\245\346\270\270\347\216\251\347\232\204\345\234\260\345\233\276\343\200\202\345\234\260\345\233\276\344\270\212\347\232\204\345\255\227\346\257\215H\357\274\214B\357\274\214T\345\210\206\345\210\253\350\241\250\347\244\272\350\233\207\345\244\264\357\274\214\350\233\207\350\272\253\357\274\214\350\233\207\345\260\276\347\232\204\345\207\272\347\224\237\347\202\271\357\274\214\350\200\214\344\270\224\350\233\207\347\232\204\351\225\277\345\272\246\344\270\2723.</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'SimSun'; font-size:10pt;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-"
                        "family:'SimSun'; font-size:10pt;\">    \345\210\227\350\241\250\344\270\213\346\226\271\346\234\211\344\270\252\342\200\234\345\234\260\345\233\276\345\256\232\345\236\213\342\200\235\345\255\227\346\240\267\347\232\204\351\200\211\346\213\251\346\241\206\357\274\214\350\241\250\347\244\272\345\234\260\345\233\276\346\230\257\345\220\246\345\256\232\345\236\213\343\200\202\345\205\263\344\272\216\345\234\260\345\233\276\345\256\232\345\236\213\347\232\204\346\246\202\345\277\265\357\274\214\350\257\246\350\247\201\345\270\256\345\212\251\346\226\207\346\241\243\347\232\204\342\200\234\345\234\260\345\233\276\350\256\276\350\256\241\342\200\235\343\200\202</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'SimSun'; font-size:10pt;\">    </span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'S"
                        "imSun'; font-size:10pt;\">    \351\200\211\344\270\255\347\225\214\351\235\242\345\217\263\344\270\212\350\247\222\345\210\227\350\241\250\344\270\255\347\232\204\345\234\260\345\233\276\345\220\216\357\274\214\347\216\251\345\256\266\345\217\257\344\273\245\347\202\271\345\207\273\342\200\234\345\274\200\345\247\213\342\200\235\357\274\214\342\200\234\347\274\226\350\276\221\342\200\235\346\214\211\351\222\256\350\277\233\345\205\245\345\234\260\345\233\276\345\274\200\345\247\213\346\270\270\346\210\217\346\210\226\350\200\205\350\277\233\345\205\245\345\234\260\345\233\276\350\277\233\350\241\214\347\274\226\350\276\221\343\200\202\347\202\271\345\207\273\342\200\234\345\210\240\351\231\244\342\200\235\346\214\211\351\222\256\345\217\257\344\273\245\345\210\240\351\231\244\345\234\260\345\233\276\343\200\202\350\213\245\350\246\201\346\226\260\345\273\272\345\234\260\345\233\276\357\274\214\345\210\231\347\233\264\346\216\245\347\202\271\345\207\273\342\200\234\346\226\260\345\273\272\342\200\235\345\215\263"
                        "\345\217\257\357\274\214\346\227\240\351\234\200\351\200\211\344\270\255\346\237\220\344\270\200\345\235\227\345\234\260\345\233\276\357\274\214\345\215\263\345\217\257\346\226\260\345\273\272\344\270\200\344\270\252\347\251\272\347\231\275\345\234\260\345\233\276\350\277\233\350\241\214\347\274\226\350\276\221\343\200\202</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'SimSun'; font-size:10pt;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'SimSun'; font-size:10pt;\">    \345\200\274\345\276\227\346\263\250\346\204\217\347\232\204\346\230\257\357\274\214\345\234\260\345\233\276\345\256\232\345\236\213\347\212\266\346\200\201\346\230\276\347\244\272\346\211\223\351\222\251\347\232\204\345\234\260\345\233\276\344\270\272\345\267\262\347\273\217\345\256\232\345\236\213\347\232"
                        "\204\345\234\260\345\233\276\357\274\214\345\215\263\346\230\257\346\227\240\346\263\225\344\277\256\346\224\271\347\232\204\345\234\260\345\233\276\343\200\202\351\200\211\344\270\255\345\234\260\345\233\276\350\277\233\350\241\214\347\274\226\350\276\221\346\227\266\357\274\214\350\213\245\350\257\245\345\234\260\345\233\276\345\267\262\345\256\232\345\236\213\357\274\214\345\210\231\346\227\240\346\263\225\345\234\250\345\216\237\345\234\260\345\233\276\344\270\212\344\277\256\346\224\271\357\274\214\345\217\252\350\203\275\344\273\245\345\256\232\345\236\213\347\232\204\345\234\260\345\233\276\344\270\272\345\237\272\347\241\200\357\274\214\346\226\260\345\273\272\344\270\200\344\270\252\345\234\260\345\233\276\343\200\202\350\257\246\347\273\206\346\223\215\344\275\234\350\247\201\345\270\256\345\212\251\346\226\207\346\241\243\347\232\204\342\200\234\345\234\260\345\233\276\350\256\276\350\256\241\342\200\235\343\200\202</span></p></body></html>", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_4), QCoreApplication::translate("Help", "\345\234\260\345\233\276\347\232\204\345\242\236\345\210\240\344\277\256\346\224\271", nullptr));
        textEdit_5->setHtml(QCoreApplication::translate("Help", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'SimSun'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'SimSun';\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'SimSun'; font-size:10pt;\">    \347\224\250\346\210\267\345\217\257\344\273\245\345\234\250\345\234\260\345\233\276\344\270\255\350\256\276\347\275\256\350\233\207\347\232\204\345\207\272\347\224\237\347\202\271\357\274\214\346\270\270\346\210\217\344\270\200\345\274\200\345\247\213\346\227\266\350\233\207\345\244\264\347\232\204\346\226\271\345\220\221\357\274"
                        "\214\345\222\214\347\273\230\345\210\266\345\244\232\347\247\215\351\232\234\347\242\215\347\211\251\347\232\204\345\234\260\345\233\276\357\274\214\345\222\214\350\256\276\347\275\256\347\211\271\346\256\212\351\243\237\347\211\251\345\207\272\347\216\260\347\232\204\344\275\215\347\275\256\343\200\202</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'SimSun'; font-size:10pt;\"><br /></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'SimSun'; font-size:10pt;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'SimSun'; font-size:10pt;\">    \345\237\272\346\234\254\346\223\215\344\275\234\346\226\271\345\274\217\357\274\232</span></p>\n"
"<p style=\"-qt-paragraph-ty"
                        "pe:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'SimSun'; font-size:10pt;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'SimSun'; font-size:10pt;\">    \345\234\250\350\256\276\347\275\256\346\226\271\345\235\227\347\232\204\347\273\204\345\220\210\346\241\206\344\270\255\351\200\211\346\213\251\347\216\251\345\256\266\350\246\201\344\275\277\347\224\250\347\232\204\346\226\271\345\235\227\357\274\214\345\234\250\345\234\260\345\233\276\347\274\226\350\276\221\351\241\265\351\235\242\345\267\246\350\276\271\347\232\204\345\244\247\347\275\221\346\240\274\344\270\255\357\274\214\351\274\240\346\240\207\345\267\246\351\224\256\345\215\263\345\217\257\345\234\250\351\274\240\346\240\207\344\275\215\347\275\256\347\232\204\346\226\271\346\240\274\344\270\255\346\224\276\347\275\256\357\274\214\351\274\240\346\240\207\345"
                        "\217\263\351\224\256\345\210\231\344\274\232\346\270\205\351\231\244\345\234\250\350\277\231\346\240\274\345\255\220\344\270\255\347\232\204\346\211\200\346\234\211\346\226\271\345\235\227\357\274\214\344\275\206\350\233\207\347\232\204\345\244\264\357\274\214\350\272\253\357\274\214\345\260\276\344\270\215\350\203\275\346\270\205\351\231\244\357\274\214\345\217\252\350\203\275\346\224\271\345\217\230\344\275\215\347\275\256\343\200\202\350\233\207\347\232\204\345\207\272\347\224\237\347\202\271\350\256\276\347\275\256\346\226\271\346\263\225\347\225\245\346\234\211\344\270\215\345\220\214\357\274\214\350\257\267\350\247\201\344\270\213\346\226\207\343\200\202</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'SimSun'; font-size:10pt;\"><br /></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px"
                        "; font-family:'SimSun'; font-size:10pt;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'SimSun'; font-size:10pt;\">    \350\256\276\347\275\256\350\233\207\347\232\204\345\207\272\347\224\237\347\202\271\357\274\232</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'SimSun'; font-size:10pt;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'SimSun'; font-size:10pt;\">    \351\231\244\344\272\206\350\233\207\347\232\204\345\207\272\347\224\237\347\202\271\345\244\226\357\274\214\347\211\271\346\256\212\351\243\237\347\211\251\345\222\214\351\232\234\347\242\215\347\211\251\347\255\211\346\226\271\345\235\227\347\232\204\346\224\276\347\275\256\346\226\271\345\274\217"
                        "\344\270\215\351\231\220\343\200\202\350\233\207\345\277\205\351\241\273\346\234\211\345\207\272\347\224\237\347\202\271\357\274\214\350\200\214\344\270\224\345\207\272\347\224\237\347\202\271\345\224\257\344\270\200\343\200\202\345\234\260\345\233\276\347\274\226\350\276\221\345\231\250\344\270\212\345\210\206\345\210\253\347\224\250head\357\274\214body\357\274\214tail\347\232\204\345\244\247\345\206\231\351\246\226\345\255\227\346\257\215H\357\274\214B\357\274\214T\350\241\250\347\244\272\350\233\207\345\244\264\357\274\214\350\233\207\350\272\253\357\274\214\350\233\207\345\260\276\343\200\202\345\210\206\345\210\253\345\257\271\345\272\224\351\225\277\345\272\246\344\270\2723\347\232\204\350\233\207\347\232\204\344\270\211\344\270\252\351\203\250\345\210\206</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'SimSun'; font-size:10pt;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bot"
                        "tom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'SimSun'; font-size:10pt;\">    \344\270\211\350\200\205\347\232\204\344\275\215\347\275\256\351\203\275\350\203\275\351\232\217\346\204\217\346\224\276\347\275\256\357\274\214\345\271\266\351\200\232\350\277\207\342\200\234\350\233\207\347\232\204\346\226\271\345\220\221\342\200\235\347\273\204\345\220\210\346\241\206\346\235\245\345\206\263\345\256\232\346\270\270\346\210\217\345\274\200\345\247\213\346\227\266\350\233\207\345\244\264\347\232\204\345\211\215\350\277\233\346\226\271\345\220\221\343\200\202\345\200\274\345\276\227\346\263\250\346\204\217\347\232\204\346\230\257\357\274\214\344\270\272\344\272\206\350\256\251\346\270\270\346\210\217\345\205\267\346\234\211\347\201\265\346\264\273\346\200\247\357\274\214\350\233\207\345\244\264\357\274\214\350\233\207\350\272\253\357\274\214\345\222\214\350\233\207\345\260\276\347\232\204\345\207\272\347\224\237\347\202\271\344\270\215\345\277\205\350\277"
                        "\236\345\234\250\344\270\200\350\265\267\357\274\214\350\200\214\346\270\270\346\210\217\345\274\200\345\247\213\345\220\216\350\233\207\347\232\2043\350\212\202\350\272\253\344\275\223\344\274\232\350\207\252\345\212\250\350\277\236\346\216\245\343\200\202\345\234\250\344\270\200\344\272\233\347\211\271\346\256\212\347\232\204\345\234\260\345\233\276\345\217\257\344\273\245\347\201\265\346\264\273\350\256\276\347\275\256\343\200\202</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'SimSun'; font-size:10pt;\"><br /></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'SimSun'; font-size:10pt;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'SimSun'; font-size:10pt;\""
                        ">    \345\234\260\345\233\276\345\256\232\345\236\213\357\274\232</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'SimSun'; font-size:10pt;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'SimSun'; font-size:10pt;\">    \344\270\272\344\272\206\344\277\235\350\257\201\346\270\270\346\210\217\347\232\204\345\205\254\345\271\263\346\200\247\357\274\214\346\270\270\346\210\217\345\212\240\345\205\245\344\272\206\345\234\260\345\233\276\345\256\232\345\236\213\345\212\237\350\203\275\343\200\202\351\241\276\345\220\215\346\200\235\344\271\211\357\274\214\345\267\262\347\273\217\345\256\232\345\236\213\347\232\204\345\234\260\345\233\276\345\260\206\346\227\240\346\263\225\350\277\233\350\241\214\344\277\256\346\224\271\357\274\214\344\277\235\350\257\201\344\272\206\347\216\251\345"
                        "\256\266\345\210\206\346\225\260\347\232\204\347\234\237\345\256\236\346\200\247\343\200\202\345\213\276\351\200\211\345\234\260\345\233\276\344\270\255\347\232\204\345\234\260\345\233\276\345\256\232\345\236\213\351\200\211\351\241\271\357\274\214\347\202\271\345\207\273\342\200\234\344\277\235\345\255\230\342\200\235\345\220\216\357\274\214\345\206\215\346\254\241\347\241\256\350\256\244\357\274\214\345\234\260\345\233\276\345\215\263\346\227\240\346\263\225\347\273\247\347\273\255\344\277\256\346\224\271\343\200\202\350\207\263\344\272\216\345\246\202\344\275\225\345\234\250\345\267\262\347\273\217\345\256\232\345\236\213\347\232\204\345\234\260\345\233\276\344\270\212\350\256\276\350\256\241\345\234\260\345\233\276\357\274\214\350\257\246\350\247\201\344\270\213\346\226\207\342\200\234\345\234\260\345\233\276\344\277\235\345\255\230\342\200\235\343\200\202</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-inden"
                        "t:0px; font-family:'SimSun'; font-size:10pt;\"><br /></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'SimSun'; font-size:10pt;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'SimSun'; font-size:10pt;\">    \345\234\260\345\233\276\344\277\235\345\255\230\357\274\232</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'SimSun'; font-size:10pt;\">    \347\202\271\345\207\273\342\200\234\344\277\235\345\255\230\342\200\235\346\214\211\351\222\256\345\215\263\345\217\257\344\277\235\345\255\230\345\234\260\345\233\276\343\200\202\345\205\266\344\270\255\342\200\234\346\226\207\344\273\266\345\220\215\342\200\235\351\207\214\345\241\253\347\232\204\346\230\257\344\277\235\345"
                        "\255\230\345\234\260\345\233\276\346\227\266\345\234\260\345\233\276\347\232\204\345\220\215\347\247\260\343\200\202\350\246\201\344\277\235\345\255\230\347\232\204\345\234\260\345\233\276\347\232\204\345\220\215\347\247\260\344\270\215\350\203\275\344\270\216\345\267\262\347\273\217\345\256\232\345\236\213\347\232\204\345\234\260\345\233\276\351\207\215\345\220\215\357\274\201\350\213\245\350\246\201\345\234\250\345\267\262\347\273\217\345\256\232\345\236\213\347\232\204\345\234\260\345\233\276\347\232\204\345\237\272\347\241\200\344\270\212\344\277\256\346\224\271\357\274\214\351\234\200\350\246\201\344\277\235\345\255\230\344\270\272\346\226\260\347\232\204\345\234\260\345\233\276\357\274\214\346\233\264\346\224\271\346\226\207\344\273\266\345\220\215\345\215\263\345\217\257\343\200\202</span></p></body></html>", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_5), QCoreApplication::translate("Help", "\345\234\260\345\233\276\350\256\276\350\256\241", nullptr));
        BackButton->setText(QCoreApplication::translate("Help", " \350\277\224\345\233\236", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Help: public Ui_Help {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HELP_H
