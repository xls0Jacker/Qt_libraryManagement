#include "mainwindow.h"
#include "ui_mainwindow.h"

#include "QFile"
#include "inquirefunction.h"
#include "deleteitems.h"

#include "QMessageBox"
#include "fstream"
using namespace std;

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    QIcon con(":/iconHead.jpg");
    this->setWindowIcon(con);

    ui->textEdit->setReadOnly(true);

    ui->closeItemsButton->hide();
    ui->refreshItemsButton->hide();
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_showItemsButton_clicked()
{
    QFile library("Library.txt");
    library.open(QIODevice::ReadOnly);
    QByteArray text = library.readAll();
    ui->textEdit->setText(QString(text));
    library.close();

    ui->showItemsButton->hide();
    ui->closeItemsButton->show();
    ui->refreshItemsButton->show();
}


void MainWindow::on_addItemsButton_clicked()
{
    categoryChoosingWindow * w1 = new categoryChoosingWindow();
    w1->show();
}

bool check5() {
    /* check */
    ifstream file0;
    file0.open("Parameter.txt");
    if(!file0.is_open()) qWarning("无法打开！");
    int n;
    file0 >> n;
    file0.close();
    if(n == 0) {
        return false;
    } else {
        return true;
    }
}

void MainWindow::on_inquireItemsButton_clicked()
{
    if(!check5()) {
        QMessageBox::warning(this, "提示", "库为空！");
    } else {
        inquireFunction *w = new inquireFunction();
        w->show();
    }
}


void MainWindow::on_deleteItemsButton_clicked()
{
    if(!check5()) {
        QMessageBox::warning(this, "提示", "库为空！");
    } else {
        deleteItems *w = new deleteItems();
        w->show();
    }
}


void MainWindow::on_refreshItemsButton_clicked()
{
    QFile library("Library.txt");
    library.open(QIODevice::ReadOnly);
    QByteArray text = library.readAll();
    ui->textEdit->setText(QString(text));
    library.close();
}


void MainWindow::on_closeItemsButton_clicked()
{
    ui->textEdit->clear();
    ui->showItemsButton->show();
    ui->closeItemsButton->hide();
    ui->refreshItemsButton->hide();
}

