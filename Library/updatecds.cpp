#include "updatecds.h"
#include "ui_updatecds.h"

#include "function_4_update2.h"
#include "QMessageBox"

updateCDs::updateCDs(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::updateCDs)
{
    ui->setupUi(this);

    QIcon con(":/iconHead.jpg");
    this->setWindowIcon(con);
}

updateCDs::~updateCDs()
{
    delete ui;
}

void updateCDs::getData(QString s)
{
  ui->CDs_1->setText(s);
}

void updateCDs::on_exitButton_clicked()
{
    this->close();
}


void updateCDs::on_refreshButton_clicked()
{
    string ID = ui->CDs_1->text().toStdString();

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
    ui->CDs_2->setText(QString::fromStdString(temp));
    ui->CDs_3->setText(QString::fromStdString(temp2));
    ui->CDs_4->setText(QString::fromStdString(temp3));
    ui->CDs_5->setText(QString::fromStdString(temp4));
    ui->CDs_6->setText(QString::fromStdString(temp5));
    ui->refreshButton->hide();
    ui->item->hide();
    ui->IDShow->setText(QString::fromStdString(ID));
    ui->IDShow->setReadOnly(true);
    ui->item2->show();
    ui->IDShow->show();
}

bool check12(string ID) { // 编号查重 重复时返回 0
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

void updateCDs::on_confirmButton_clicked()
{
    string ID = ui->CDs_1->text().toStdString();
    string temp = ui->CDs_2->text().toStdString();
    string temp2 = ui->CDs_3->text().toStdString();
    string temp3 = ui->CDs_4->text().toStdString();
    string temp4 = ui->CDs_5->text().toStdString();
    string temp5 = ui->CDs_6->text().toStdString();

    string Del = ui->IDShow->text().toStdString();

    if(!check12(ID) && ID != Del) {
        QMessageBox::warning(this, "提示", "编辑后编号与库冲突！");
    } else {
        Library L;
        L.updateItems2(ID, temp, temp2, temp3, temp4, temp5, Del);
        QMessageBox::information(this, "提示", "编辑成功！");
        this->close();
    }
}

