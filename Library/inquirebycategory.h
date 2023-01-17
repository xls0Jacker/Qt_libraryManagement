#ifndef INQUIREBYCATEGORY_H
#define INQUIREBYCATEGORY_H

#include <QWidget>

namespace Ui {
class inquireByCategory;
}

class inquireByCategory : public QWidget
{
    Q_OBJECT

public:
    explicit inquireByCategory(QWidget *parent = nullptr);
    ~inquireByCategory();

private slots:

    void on_BooksButton_clicked();

    void on_CDsButton_clicked();

    void on_exitButton_clicked();

    void on_updateButton_clicked();

private:
    Ui::inquireByCategory *ui;
};

#endif // INQUIREBYCATEGORY_H
