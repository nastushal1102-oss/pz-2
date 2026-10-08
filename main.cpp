#include <iostream>
#include <forward_list>
#include <string>
using namespace std;

int main() {
forward_list<string>
osList = {"Windows", "Linux", "Android", "macOS", "Ubuntu"};
cout << "Елементи списку операційних систем:" << endl;
for (string osList: osList){
  cout << osList << endl;
  }
  return 0;
}