#ifndef FUNCTION_1_BOOKS_H
#define FUNCTION_1_BOOKS_H

#include"iostream"
#include"string.h"
#include"vector"
#include"fstream"
#include"deque"
using namespace std;

class Center {
  protected:
    string ID, headLine, authorName;// 编号 标题 作者
    string Get_ID() { return ID; }
    string Get_headLine() { return headLine; }
    string Get_authorName() { return authorName; }
  public:
    Center(): ID(0), headLine(0), authorName(0){}
    Center(string id, string hL, string aN): ID(id), headLine(hL), authorName(aN){}
    virtual ~Center(){}
    /* 基础功能 */
    virtual void Add_items() = 0;// 添加物品
};

class CDs:public Center {
  string Producer, productionTime, videoLength;// 出品商 出品时间 视频时常
  public:
    CDs(): Center(), Producer(0), productionTime(0), videoLength(0) {}
    CDs(string id, string hL, string aN, string Pro, string pT, string vL): Center(id, hL, aN), Producer(Pro), productionTime(pT), videoLength(vL) {}
    string Get_Producer() { return Producer; }
    string Get_productionTime() { return productionTime; }
    string Get_videoLength() { return videoLength; }
    void Add_items();
};

void CDs::Add_items() {
  /* check */
  ifstream file;
  file.open("Library.txt");
  string s, temp;
  bool flag = true;
  /* Operation */
  if(flag) {
    file.close();
    ofstream file2;
    file2.open("Library.txt", ios::app);
    if(file2.is_open()) {
      file2 << (*this).Get_ID() << " " << (*this).Get_headLine() << " " << (*this).Get_authorName() << " " << (*this).Get_Producer() << " " << (*this).Get_productionTime() << " " << (*this).Get_videoLength() << endl;
    }
    file2.close();
    /* Closing */
    ifstream file3;
    file3.open("Parameter.txt");
    int size;
    file3 >> size;
    size++;
    string order, maxSize;
    file3 >> maxSize >> order;
    file3.close();
    order += '2';
    ofstream file4;
    file4.open("Parameter.txt", ios::trunc);
    file4 << size << " " << maxSize << endl
          << order;
    file4.close();
  }
}
class Library {
public:
  Library() {}
  ~Library() {}
  void Add_items(Center &item) { item.Add_items(); }
};

#endif
