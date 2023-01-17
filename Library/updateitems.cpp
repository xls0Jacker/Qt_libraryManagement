#include "updateitems.h"
#include "ui_updateitems.h"

#include "string.h"
#include "fstream"
using namespace std;

#include "QMessageBox"

#include "updatecds.h"

updateItems::updateItems(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::updateItems)
{
    ui->setupUi(this);
    connect(this, SIGNAL(sendData(QString)), w1, SLOT(getData(QString)));
    connect(this, SIGNAL(sendData(QString)), w2, SLOT(getData(QString)));

    connect(
    ui->lineEdit,
    SIGNAL(returnPressed()),
    ui->confirmButton,
    SIGNAL(clicked()),
    Qt::UniqueConnection
    );

    QIcon con(":/iconHead.jpg");
    this->setWindowIcon(con);
}

updateItems::~updateItems()
{
    delete ui;
}

void updateItems::on_exitButton_clicked()
{
    this->close();
}

bool check9(string ID) { // 编号判存
  ifstream file;
  file.open("Library.txt");
  string s, temp;
  bool flag = false;
  if(file.is_open()) {
    while(!file.eof()) {
      file >> s;
      if(s == ID) {
        flag = true;
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

int check10(string ID) {
  ifstream file;
  file.open("Library.txt");
  string s, temp;
  int counter = 0;
  if(file.is_open()) {
    while(!file.eof()) {
      file >> s;
      if(s == ID) {
        break;
      }
      for (int i = 0; i < 5; i++) {
        file >> temp;
      }
      counter++;
    }
  }
  return counter;
}

void updateItems::on_confirmButton_clicked()
{
    /* Preparation */
    string ID = ui->lineEdit->text().toStdString();
    ifstream file;
    file.open("Parameter.txt");
    string s;
    getline(file, s);
    file >> s;
    file.close();
    /* Operation */
    if(!check9(ID)) {
        QMessageBox::warning(this, "提示", "编号不存在！");
    } else {
        if(s[check10(ID)] == '1') {
            QString str = ui->lineEdit->text();
            emit sendData(str);
            w1->show();
            this->close();
        } else {
            QString str = ui->lineEdit->text();
            emit sendData(str);
            w2->show();
            this->close();
        }
    }
}

void updateItems::getData(QString s) {
    ui->lineEdit->setText(s);
}
