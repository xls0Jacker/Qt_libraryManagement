#include "inquirebyheadline.h"
#include "ui_inquirebyheadline.h"

#include "QMessageBox"
#include "function_2_headline.h"
#include "QFile"

#include "updateitems.h"

inquireByHeadline::inquireByHeadline(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::inquireByHeadline)
{
    ui->setupUi(this);

    connect(
    ui->text,
    SIGNAL(returnPressed()),
    ui->inquireItemsButton,
    SIGNAL(clicked()),
    Qt::UniqueConnection
    );

    QIcon con(":/iconHead.jpg");
    this->setWindowIcon(con);
}

inquireByHeadline::~inquireByHeadline()
{
    delete ui;
}

void inquireByHeadline::on_exitButton_clicked()
{
    this->close();
}

bool check6(string Headline) { // 标题判存
  ifstream file;
  file.open("Library.txt");
  string s, temp;
  bool flag = false;
  if(file.is_open()) {
    while(!file.eof()) {
      file >> temp;
      file >> s;
      if(s == Headline) {
        flag = true;
        break;
      }
      for (int i = 0; i < 4; i++) {
        file >> temp;
      }
    }
  }
  if(!flag)
    return false;
  else
    return true;
}

void inquireByHeadline::on_inquireItemsButton_clicked()
{
    string Headline = ui->text->text().toStdString();
    if(!check6(Headline)) {
        QMessageBox::warning(this, "提示", "查询标题不存在！");
    } else {
        Library L;
        L.inquireItemsByHeadline(Headline);
        QFile Cache("Cache.txt");
        Cache.open(QIODevice::ReadOnly);
        QByteArray text = Cache.readAll();
        ui->textEdit->setText(QString(text));
        Cache.close();
    }
}


void inquireByHeadline::on_updateButton_clicked()
{
    if(ui->textEdit->document()->isEmpty()) {
        QMessageBox::warning(this, "提示", "请查询后再使用此功能！");
    } else {
        updateItems *w = new updateItems();
        w->show();
    }
}

