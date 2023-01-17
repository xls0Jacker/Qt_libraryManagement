#ifndef FUNCTION_3_DELETE_H
#define FUNCTION_3_DELETE_H

#include"iostream"
#include"string.h"
#include"vector"
#include"fstream"
#include"deque"
using namespace std;

int rm_BlankLine(string file){// 删除文本空行
  fstream targetFile("Library.txt",fstream::in | fstream::out);
  string line;//作为读取的每一行
  string temp;//作为缓存使用
  deque<string> noBlankLineQueue;//双向队列,只在队首和队尾操作时性能较好
  //记录文件开始位置
  auto StartPos = targetFile.tellp();
  //循环读取判断文件的空行并放入队列
  while(getline(targetFile,line)) {
    if(!line.empty()) {
      noBlankLineQueue.push_back(line);
    }
  }
  targetFile.close();
  //使用ofstream打开再关闭文件是为了清空源文件
  ofstream emptyFile(file);
  emptyFile.close();
  //重新打开文本文件
  fstream target(file,fstream::out | fstream::in);
  //获取队首和队尾
  auto begin = noBlankLineQueue.begin();
  auto end = noBlankLineQueue.end();
  //遍历双向队列中的元素
  //并写回文件
  while(begin != end){
      temp = *begin;
      target << temp << endl;
      ++begin;
  }
  target.close();
  return EXIT_SUCCESS;
}

class Library {
public:
  Library() {}
  ~Library() {}
  void Delete_items(string ID);
};

string CharToStr(char * contentChar)// 辅助删除函数
{
    string tempStr;
    for (int i=0;contentChar[i]!='\0';i++)
    {
        tempStr+=contentChar[i];
    }
    return tempStr;
}

void Library:: Delete_items(string ID) { // 删除物品
  /* Preparation */
  ifstream file0;
  file0.open("Parameter.txt");
  string order;
  getline(file0, order);
  file0 >> order;
  file0.close();
  int counter = 0;// 判断类别
  /* Seeking */
  ifstream file;
  file.open("Library.txt");
  string id, temp;
  int lineNum = 1;
  while(!file.eof()) {
    getline(file, temp);
    id = temp.substr(0, temp.find(" "));
    if(id == ID) {
      break;
    }
    lineNum++;
    counter++;
  }
  /* Operation */
  file.seekg(0, ios::beg);
  string strFileData = "";
  int line = 1;
  char lineData[1024] = {0};
    while(file.getline(lineData, sizeof(lineData))) {
        if (line == lineNum) {
            strFileData += "\n";
        }
        else {
            strFileData += CharToStr(lineData);
            strFileData += "\n";
        }
        line++;
    }
    file.close();
  // 文件改写
    ofstream file1;
    file1.open("Library.txt");
    file1.flush();
    file1<<strFileData;
    file1.close();
  /* Closing */
  ifstream file2;
  file2.open("Parameter.txt");
  int size;
  file2 >> size;
  size--;
  string temp0 = "", maxSize;
  file2 >> maxSize;
  file2.close();
  for (int i = 0; i < order.length(); i++) {
    if(i != counter) {
      temp0 += order[i];
    }
  }
  ofstream file3;
  file3.open("Parameter.txt", ios::trunc);
  file3 << size << " " << maxSize << endl
        << temp0;
  file3.close();
  rm_BlankLine("Library.txt");
}

#endif // FUNCTION_3_DELETE_H
