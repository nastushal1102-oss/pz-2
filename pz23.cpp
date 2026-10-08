#include <iostream>
#include <forward_list>
#include <string>
using namespace std;

int main() {
forward_list<string> osList = {"Windows", "Linux", "Android", "macOS", "Ubuntu"};
string searchosList;
cout << "Введіть елемент списку операційних систем:" << endl;
cin >> searchosList;

auto it = osList.begin();
    while (it != osList.end())
    {
        if (*it == searchosList)
        {
            cout << "Елемент знайдено" << endl;
            break;
        }
        ++it;
    }
    if (it == osList.end())
    {
        cout << "Елемент не знайдено" << endl;
    }

    return 0;
}