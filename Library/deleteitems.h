#ifndef DELETEITEMS_H
#define DELETEITEMS_H

#include <QWidget>

namespace Ui {
class deleteItems;
}

class deleteItems : public QWidget
{
    Q_OBJECT

public:
    explicit deleteItems(QWidget *parent = nullptr);
    ~deleteItems();

private slots:
    void on_exitButton_clicked();

    void on_deleteButton_clicked();

private:
    Ui::deleteItems *ui;
};

#endif // DELETEITEMS_H
