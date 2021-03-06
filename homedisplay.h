#ifndef HOMEDISPLAY_H
#define HOMEDISPLAY_H

#include <QWidget>
#include "customqtui.h"
namespace Ui {
class HomeDisplay;
}

class HomeDisplay : public QWidget, public CustomQtUI
{
    Q_OBJECT

public:
    explicit HomeDisplay(QWidget *parent = 0);
    ~HomeDisplay();

    QSize sizeHint();

private slots:
    void on_Borrowing_clicked();

    void on_Equipments_clicked();

    void on_Subjects_clicked();

private:
    Ui::HomeDisplay *ui;
};

#endif // HOMEDISPLAY_H
