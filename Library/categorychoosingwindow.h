#ifndef CATEGORYCHOOSINGWINDOW_H
#define CATEGORYCHOOSINGWINDOW_H

#include <QWidget>

namespace Ui {
class categoryChoosingWindow;
}

class categoryChoosingWindow : public QWidget
{
    Q_OBJECT

public:
    explicit categoryChoosingWindow(QWidget *parent = nullptr);
    ~categoryChoosingWindow();

private slots:
    void on_categoryBooks_clicked();

    void on_categoryCDs_clicked();

private:
    Ui::categoryChoosingWindow *ui;
};

#endif // CATEGORYCHOOSINGWINDOW_H
