#ifndef INQUIREFUNCTION_H
#define INQUIREFUNCTION_H

#include <QWidget>

namespace Ui {
class inquireFunction;
}

class inquireFunction : public QWidget
{
    Q_OBJECT

public:
    explicit inquireFunction(QWidget *parent = nullptr);
    ~inquireFunction();

private slots:
    void on_inquireByHeadline_clicked();

    void on_inquireByCategory_clicked();

private:
    Ui::inquireFunction *ui;
};

#endif // INQUIREFUNCTION_H
