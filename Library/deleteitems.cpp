#include "deleteitems.h"
#include "ui_deleteitems.h"

#include "function_3_delete.h"
#include "QMessageBox"

#include "QFile"

deleteItems::deleteItems(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::deleteItems)
{
    ui->setupUi(this);

    connect(
    ui->lineEdit,
    SIGNAL(returnPressed()),
    ui->deleteButton,
    SIGNAL(clicked()),
    Qt::UniqueConnection
    );

    QIcon con(":/iconHead.jpg");
    this->setWindowIcon(con);
}

deleteItems::~deleteItems()
{
    delete ui;
}

void deleteItems::on_exitButton_clicked()
{
    this->close();
}

bool check8(string ID) { // 编号判存
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

void deleteItems::on_deleteButton_clicked()
{
    string ID = ui->lineEdit->text().toStdString();
    if(!check8(ID)) {
        QMessageBox::warning(this, "提示", "编号不存在！");
    } else {
        Library L;
        L.Delete_items(ID);
        QMessageBox::information(this, "提示", "物品删除成功！");
        this->close();
    }
}

