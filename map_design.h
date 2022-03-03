#ifndef MAP_DESIGN_H
#define MAP_DESIGN_H

#include <QWidget>
#include "base.h"
#include "help.h"

namespace Ui {
class Map_Design;
}

class Map_Design : public BaseWidget
{
    Q_OBJECT

public:
    explicit Map_Design(QWidget *parent = nullptr, QString Filename = "");
    ~Map_Design();
    void closeEvent(QCloseEvent *event);


signals:
    void back();
private slots:
    void on_BackButton_clicked();

    void on_BlockType_currentTextChanged(const QString &text);

    void on_SaveButton_clicked();

    void on_HelpButton_clicked();

private:
    Ui::Map_Design *ui;
    Help* help_widget;
};

#endif // MAP_DESIGN_H
