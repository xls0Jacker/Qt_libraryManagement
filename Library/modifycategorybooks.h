#ifndef MODIFYCATEGORYBOOKS_H
#define MODIFYCATEGORYBOOKS_H

#include <QWidget>

//#include "libraryManagementSystem.h"

namespace Ui {
class modifyCategoryBooks;
}

class modifyCategoryBooks : public QWidget
{
    Q_OBJECT

public:
    explicit modifyCategoryBooks(QWidget *parent = nullptr);
    ~modifyCategoryBooks();

private slots:
    void on_addItemsButton_clicked();

    void on_exit_clicked();

private:
    Ui::modifyCategoryBooks *ui;
};

#endif // MODIFYCATEGORYBOOKS_H
