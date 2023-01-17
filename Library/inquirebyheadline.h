#ifndef INQUIREBYHEADLINE_H
#define INQUIREBYHEADLINE_H

#include <QWidget>

namespace Ui {
class inquireByHeadline;
}

class inquireByHeadline : public QWidget
{
    Q_OBJECT

public:
    explicit inquireByHeadline(QWidget *parent = nullptr);
    ~inquireByHeadline();

private slots:
    void on_exitButton_clicked();

    void on_inquireItemsButton_clicked();

    void on_updateButton_clicked();

private:
    Ui::inquireByHeadline *ui;
};

#endif // INQUIREBYHEADLINE_H
