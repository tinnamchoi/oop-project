#include <fstream>
#include <iostream>

using namespace std;

int main() {
  ifstream backup("backup.txt");
  string name;
  backup >> name;
  cout << name << endl;
  // print rest of file as ints line by line
  for (int i = 0; i < 7; i++) {
    int id;
    backup >> id;
    cout << id << endl;
  }
}
