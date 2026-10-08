#include <iostream>
#include <forward_list>
#include <string>
using namespace std;

int main() {
forward_list<string> osList {"Windows", "Linux", "Android", "macOS", "Ubuntu"};
osList.push_front ("iOS");
osList.push_front ("Debian");
cout << "Елементи списку операційних систем:" << endl;
for (string osList: osList)
{
    cout << osList << endl;

}
osList.pop_front();
cout << endl;
cout << "Після видалення першої професії:" << endl;
for (string osList: osList)
{
    cout << osList << endl;
}

  return 0;
}