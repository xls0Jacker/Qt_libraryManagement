#ifndef MODIFYCATEGORYCDS_H
#define MODIFYCATEGORYCDS_H

#include <QWidget>

//#include "libraryManagementSystem.h"

namespace Ui {
class modifycategoryCDs;
}

class modifycategoryCDs : public QWidget
{
    Q_OBJECT

public:
    explicit modifycategoryCDs(QWidget *parent = nullptr);
    ~modifycategoryCDs();

private slots:
    void on_addItemsButton_clicked();

    void on_exitButton_clicked();

private:
    Ui::modifycategoryCDs *ui;
};

#endif // MODIFYCATEGORYCDS_H
