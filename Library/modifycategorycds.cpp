#include "modifycategorycds.h"
#include "ui_modifycategorycds.h"

#include "function_1_CDs.h"
#include "QMessageBox"

modifycategoryCDs::modifycategoryCDs(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::modifycategoryCDs)
{
    ui->setupUi(this);

    connect(ui->CDs_1,SIGNAL(editingFinished()),
            ui->CDs_2,SLOT(setFocus()));
    connect(ui->CDs_2,SIGNAL(editingFinished()),
            ui->CDs_3,SLOT(setFocus()));
    connect(ui->CDs_3,SIGNAL(editingFinished()),
            ui->CDs_4,SLOT(setFocus()));
    connect(ui->CDs_4,SIGNAL(editingFinished()),
            ui->CDs_5,SLOT(setFocus()));
    connect(ui->CDs_5,SIGNAL(editingFinished()),
            ui->CDs_6,SLOT(setFocus()));
    connect(
    ui->CDs_6,
    SIGNAL(returnPressed()),
    ui->addItemsButton,
    SIGNAL(clicked()),
    Qt::UniqueConnection
    );

    QIcon con(":/iconHead.jpg");
    this->setWindowIcon(con);
}

modifycategoryCDs::~modifycategoryCDs()
{
    delete ui;
}

bool check3(string ID) { // 编号查重 重复时返回 0
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

bool check4() {
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


void modifycategoryCDs::on_addItemsButton_clicked()
{
    if(ui->CDs_1->text() == "" || ui->CDs_2->text() == "" || ui->CDs_3->text() == "" || ui->CDs_4->text() == "" || ui->CDs_5->text() == "" || ui->CDs_6->text() == "") {
        QMessageBox::warning(this, "提示", "请完善物品消息！");
    } else if(!check3(ui->CDs_1->text().toStdString())) {
        QMessageBox::warning(this, "提示", "编号重复！");
    } else if(!check4()) {
        QMessageBox::warning(this, "提示", "物品库已满！");
    } else {
        Library L;
        CDs C(ui->CDs_1->text().toStdString(), ui->CDs_2->text().toStdString(), ui->CDs_3->text().toStdString(), ui->CDs_4->text().toStdString(), ui->CDs_5->text().toStdString(), ui->CDs_6->text().toStdString());
        L.Add_items(C);
        this->close();
    }
}


void modifycategoryCDs::on_exitButton_clicked()
{
    this->close();
}

