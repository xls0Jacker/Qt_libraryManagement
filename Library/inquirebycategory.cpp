#include "inquirebycategory.h"
#include "ui_inquirebycategory.h"

#include "function_2_category.h"
#include "QMessageBox"
#include "QFile"

#include "updateitems.h"

inquireByCategory::inquireByCategory(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::inquireByCategory)
{
    ui->setupUi(this);

    QIcon con(":/iconHead.jpg");
    this->setWindowIcon(con);
}

inquireByCategory::~inquireByCategory()
{
    delete ui;
}

bool check7() {
    ifstream file;
    file.open("Parameter.txt");
    string s, temp;
    getline(file, temp);
    file >> s;
    file.close();
    bool flag = false;
    for(int i = 0; i < s.length(); i++) {
        if(s[i] == '1') {
            flag = true;
            break;
        }
    }
    if(flag) return true;
    else return false;
}

bool check8() {
    ifstream file;
    file.open("Parameter.txt");
    string s, temp;
    getline(file, temp);
    file >> s;
    file.close();
    bool flag = false;
    for(int i = 0; i < s.length(); i++) {
        if(s[i] == '2') {
            flag = true;
            break;
        }
    }
    if(flag) return true;
    else return false;
}

void inquireByCategory::on_BooksButton_clicked()
{
    if(!check7()) {
        QMessageBox::warning(this, "提示", "库中无图书类！");
    } else {
        Library L;
        L.inquireItemsByCategory_Books();
        QFile Cache("Cache.txt");
        Cache.open(QIODevice::ReadOnly);
        QByteArray text = Cache.readAll();
        ui->textEdit->setText(QString(text));
        Cache.close();
    }
}


void inquireByCategory::on_CDsButton_clicked()
{
    if(!check8()) {
        QMessageBox::warning(this, "提示", "库中无光盘类！");
    } else {
        Library L;
        L.inquireItemsByCategory_CDs();
        QFile Cache("Cache.txt");
        Cache.open(QIODevice::ReadOnly);
        QByteArray text = Cache.readAll();
        ui->textEdit->setText(QString(text));
        Cache.close();
    }
}


void inquireByCategory::on_exitButton_clicked()
{
    this->close();
}


void inquireByCategory::on_updateButton_clicked()
{
    if(ui->textEdit->document()->isEmpty()) {
        QMessageBox::warning(this, "提示", "请查询后再使用此功能！");
    } else {
        updateItems *w = new updateItems();
        w->show();
    }
}

