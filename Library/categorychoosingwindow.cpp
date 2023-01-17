#include "categorychoosingwindow.h"
#include "ui_categorychoosingwindow.h"

#include "modifycategorybooks.h"
#include "modifycategorycds.h"

categoryChoosingWindow::categoryChoosingWindow(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::categoryChoosingWindow)
{
    ui->setupUi(this);
    QPixmap pixOfBooks(":/Books.jpg");
    ui->pictureOfBooks->setPixmap(pixOfBooks);
    QPixmap pixOfCDs(":/CDs.jpg");
    ui->pictureOfCDs->setPixmap(pixOfCDs);

    QIcon con(":/iconHead.jpg");
    this->setWindowIcon(con);
}

categoryChoosingWindow::~categoryChoosingWindow()
{
    delete ui;
}

void categoryChoosingWindow::on_categoryBooks_clicked()
{
    modifyCategoryBooks *w1 = new modifyCategoryBooks();
    w1->show();
}


void categoryChoosingWindow::on_categoryCDs_clicked()
{
    modifycategoryCDs *w2 = new modifycategoryCDs();
    w2->show();
}

