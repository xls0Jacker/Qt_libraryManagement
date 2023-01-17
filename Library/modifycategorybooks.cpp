#include "modifycategorybooks.h"
#include "ui_modifycategorybooks.h"

#include "function_1_Books.h"
#include "QMessageBox"

#include "string.h"
#include "fstream"
using namespace std;

modifyCategoryBooks::modifyCategoryBooks(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::modifyCategoryBooks)
{
    ui->setupUi(this);

    connect(ui->Books_1,SIGNAL(editingFinished()),
            ui->Books_2,SLOT(setFocus()));
    connect(ui->Books_2,SIGNAL(editingFinished()),
            ui->Books_3,SLOT(setFocus()));
    connect(ui->Books_3,SIGNAL(editingFinished()),
            ui->Books_4,SLOT(setFocus()));
    connect(ui->Books_4,SIGNAL(editingFinished()),
            ui->Books_5,SLOT(setFocus()));
    connect(ui->Books_5,SIGNAL(editingFinished()),
            ui->Books_6,SLOT(setFocus()));
    connect(
    ui->Books_6,
    SIGNAL(returnPressed()),
    ui->addItemsButton,
    SIGNAL(clicked()),
    Qt::UniqueConnection
    );

    QIcon con(":/iconHead.jpg");
    this->setWindowIcon(con);
}

modifyCategoryBooks::~modifyCategoryBooks()
{
    delete ui;
}

bool check1(string ID) { // 编号查重 重复时返回 0
  ifstream file;
  file.open("Library.txt");
  string s, temp;
  bool flag = true;
  if(file.is_open()) {
    while(!file.eof()) {
      file >> s;
      if(s == ID) {
        flag = false;
        break;
      }
      for (int i = 0; i < 5; i++) {
        file >> temp;
      }
    }
  }
  if(!flag)
    return false;
  else
    return true;
}

bool check2() {
      ifstream file1;
      file1.open("Parameter.txt");
      int size, maxSize;
      file1 >> size >> maxSize;
      if(size >= maxSize) {
          return false;
      } else {
          return true;
      }
}


void modifyCategoryBooks::on_addItemsButton_clicked()
{
    if(ui->Books_1->text() == "" || ui->Books_2->text() == "" || ui->Books_3->text() == "" || ui->Books_4->text() == "" || ui->Books_5->text() == "" || ui->Books_6->text() == "") {
        QMessageBox::warning(this, "提示", "请完善物品消息！");
    } else if(!check1(ui->Books_1->text().toStdString())) {
        QMessageBox::warning(this, "提示", "编号重复！");
    } else if(!check2()) {
        QMessageBox::warning(this, "提示", "物品库已满！");
    } else {
        Library L;
        Books B(ui->Books_1->text().toStdString(), ui->Books_2->text().toStdString(), ui->Books_3->text().toStdString(), ui->Books_4->text().toStdString(), ui->Books_5->text().toStdString(), ui->Books_6->text().toStdString());
        L.Add_items(B);
        this->close();
    }
}


void modifyCategoryBooks::on_exit_clicked()
{
    this->close();
}

