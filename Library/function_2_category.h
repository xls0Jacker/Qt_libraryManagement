#ifndef FUNCTION_2_CATEGORY_H
#define FUNCTION_2_CATEGORY_H

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
  void inquireItemsByCategory_Books();
  void inquireItemsByCategory_CDs();
};

void Library:: inquireItemsByCategory_Books() {
  /* Preparation */
  ifstream file;
  file.open("Parameter.txt");
  string s, temp;
  getline(file, temp);
  file >> s;
  file.close();
  /* Operation */
  vector<string> Books;
  ifstream file1;
  file1.open("Library.txt");
  for(int i = 0; i < s.length(); i++) {
      if(s[i] == '1') {
          getline(file1, temp);
          Books.push_back(temp);
      } else {
          getline(file1, temp);
      }
  }
  file1.close();
  /* Closing */
  ofstream file2;
  file2.open("Cache.txt", ios::trunc);
  for(int i = 0; i < Books.size(); i++) {
      file2 << Books[i] << endl;
  }
  file2.close();
}

void Library:: inquireItemsByCategory_CDs() {
  /* Preparation */
  ifstream file;
  file.open("Parameter.txt");
  string s, temp;
  getline(file, temp);
  file >> s;
  file.close();
  /* Operation */
  vector<string> CDs;
  ifstream file1;
  file1.open("Library.txt");
  for(int i = 0; i < s.length(); i++) {
      if(s[i] == '2') {
          getline(file1, temp);
          CDs.push_back(temp);
      } else {
          getline(file1, temp);
      }
  }
  file1.close();
  /* Closing */
  ofstream file2;
  file2.open("Cache.txt", ios::trunc);
  for(int i = 0; i < CDs.size(); i++) {
      file2 << CDs[i] << endl;
  }
  file2.close();
}
#endif // FUNCTION_2_CATEGORY_H
