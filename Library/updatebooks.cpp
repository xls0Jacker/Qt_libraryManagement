#include "updatebooks.h"
#include "ui_updatebooks.h"

#include "function_4_update.h"
#include "QMessageBox"

updateBooks::updateBooks(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::updateBooks)
{
    ui->setupUi(this);
    ui->item2->hide();
    ui->IDShow->hide();

    QIcon con(":/iconHead.jpg");
    this->setWindowIcon(con);
}

updateBooks::~updateBooks()
{
    delete ui;
}

void updateBooks::getData(QString s)
{
  ui->Books_1->setText(s);
}

void updateBooks::on_refreshButton_clicked()
{

    string ID = ui->Books_1->text().toStdString();

    ifstream file;
    file.open("Library.txt");
    string s, temp, temp2, temp3, temp4, temp5;
    if(file.is_open()) {
      while(!file.eof()) {
        file >> s;
        if(s == ID) {
          file >> temp >> temp2 >> temp3 >> temp4 >> temp5;
          break;
        }
        for (int i = 0; i < 5; i++) {
          file >> temp;
        }
      }
    }
    file.close();
    ui->Books_2->setText(QString::fromStdString(temp));
    ui->Books_3->setText(QString::fromStdString(temp2));
    ui->Books_4->setText(QString::fromStdString(temp3));
    ui->Books_5->setText(QString::fromStdString(temp4));
    ui->Books_6->setText(QString::fromStdString(temp5));
    ui->refreshButton->hide();
    ui->item->hide();
    ui->IDShow->setText(QString::fromStdString(ID));
    ui->IDShow->setReadOnly(true);
    ui->item2->show();
    ui->IDShow->show();
}


void updateBooks::on_exitButton_clicked()
{
    this->close();
}

bool check11(string ID) { // 编号查重 重复时返回 0
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

void updateBooks::on_confirmButton_clicked()
{
    string ID = ui->Books_1->text().toStdString();
    string temp = ui->Books_2->text().toStdString();
    string temp2 = ui->Books_3->text().toStdString();
    string temp3 = ui->Books_4->text().toStdString();
    string temp4 = ui->Books_5->text().toStdString();
    string temp5 = ui->Books_6->text().toStdString();

    string Del = ui->IDShow->text().toStdString();

    if(!check11(ID) && ID != Del) {
        QMessageBox::warning(this, "提示", "编辑后编号与库冲突！");
    } else {
        Library L;
        L.updateItems(ID, temp, temp2, temp3, temp4, temp5, Del);
        QMessageBox::information(this, "提示", "编辑成功！");
        this->close();
    }
}

