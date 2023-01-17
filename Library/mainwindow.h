#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

#include "categorychoosingwindow.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_showItemsButton_clicked();

    void on_addItemsButton_clicked();

    void on_inquireItemsButton_clicked();

    void on_deleteItemsButton_clicked();

    void on_refreshItemsButton_clicked();

    void on_closeItemsButton_clicked();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
