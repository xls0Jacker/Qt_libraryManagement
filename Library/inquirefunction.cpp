#include "inquirefunction.h"
#include "ui_inquirefunction.h"

#include "inquirebyheadline.h"
#include "inquirebycategory.h"

inquireFunction::inquireFunction(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::inquireFunction)
{
    ui->setupUi(this);
    QPixmap pix(":/Inquire.png");
    ui->Picture->setPixmap(pix);

    QIcon con(":/iconHead.jpg");
    this->setWindowIcon(con);
}

inquireFunction::~inquireFunction()
{
    delete ui;
}

void inquireFunction::on_inquireByHeadline_clicked()
{
    inquireByHeadline *w = new inquireByHeadline();
    this->close();
    w->show();
}


void inquireFunction::on_inquireByCategory_clicked()
{
    inquireByCategory *w = new inquireByCategory();
    this->close();
    w->show();
}

