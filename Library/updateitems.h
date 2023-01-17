#ifndef UPDATEITEMS_H
#define UPDATEITEMS_H

#include <QWidget>

#include "updatebooks.h"
#include "updatecds.h"

namespace Ui {
class updateItems;
}

class updateItems : public QWidget
{
    Q_OBJECT

public:
    explicit updateItems(QWidget *parent = nullptr);
    ~updateItems();

signals:
  void sendData(QString s);

private slots:
    void on_exitButton_clicked();

    void on_confirmButton_clicked();

    void getData(QString);

private:
    Ui::updateItems *ui;
    updateBooks *w1 = new updateBooks();
    updateCDs *w2 = new updateCDs();
};

#endif // UPDATEITEMS_H
