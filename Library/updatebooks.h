#ifndef UPDATEBOOKS_H
#define UPDATEBOOKS_H

#include <QWidget>

namespace Ui {
class updateBooks;
}

class updateBooks : public QWidget
{
    Q_OBJECT

public:
    explicit updateBooks(QWidget *parent = nullptr);
    ~updateBooks();

signals:
  void sendData(QString s);

private slots:

  void getData(QString);//得到数据的槽函数

  void on_refreshButton_clicked();

  void on_exitButton_clicked();

  void on_confirmButton_clicked();

private:
    Ui::updateBooks *ui;
};

#endif // UPDATEBOOKS_H
