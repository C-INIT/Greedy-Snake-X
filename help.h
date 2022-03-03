#ifndef HELP_H
#define HELP_H

#include <QWidget>
#include <QLabel>
#include "base.h"

namespace Ui {
class Help;
}

class Help : public BaseWidget
{
    Q_OBJECT

public:
    explicit Help(int _index = 0, QWidget *parent = nullptr);
    ~Help();


private slots:
    void on_BackButton_clicked();

private:
    Ui::Help *ui;
};

#endif // HELP_H
