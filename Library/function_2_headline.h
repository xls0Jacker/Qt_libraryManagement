#ifndef FUNCTION_2_HEADLINE_H
#define FUNCTION_2_HEADLINE_H

#include"iostream"
#include"string.h"
#include"vector"
#include"fstream"
#include"deque"
using namespace std;

class Library {
public:
  Library() {}
  ~Library() {}
  void inquireItemsByHeadline(string headline);
};

void Library::inquireItemsByHeadline(string headline) {
  /* Operation */
  ifstream file;
  file.open("Library.txt");
  string s , temp;
  vector<string> Content;
  if(file.is_open()) {
    while(!file.eof()) {
      getline(file, temp);
      if(temp == "") break;
      bool flag = false;
      int pos_1, pos_2;
      pos_1 = temp.find(" ");
      temp.erase(pos_1, 1);
      pos_2 = temp.find(" ");
      s = temp.substr(pos_1, pos_2 - pos_1);
      if(s == headline) {
        temp.insert(pos_1, " ");
        Content.push_back(temp);
      }
    }
  }
  file.close();
  /* Closing */
  ofstream file2;
  file2.open("Cache.txt", ios::trunc);
  for(int i = 0; i < Content.size(); i++) {
      file2 << Content[i] << endl;
  }
  file2.close();
}

#endif // FUNCTION_2_HEADLINE_H
