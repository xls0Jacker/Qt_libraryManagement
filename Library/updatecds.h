#ifndef UPDATECDS_H
#define UPDATECDS_H

#include <QWidget>

namespace Ui {
class updateCDs;
}

class updateCDs : public QWidget
{
    Q_OBJECT

public:
    explicit updateCDs(QWidget *parent = nullptr);
    ~updateCDs();

signals:
  void sendData(QString s);

private slots:

  void getData(QString);//得到数据的槽函数

  void on_exitButton_clicked();

  void on_refreshButton_clicked();

  void on_confirmButton_clicked();

private:
    Ui::updateCDs *ui;
};

#endif // UPDATECDS_H
