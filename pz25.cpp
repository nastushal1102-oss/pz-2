#include <iostream>
#include <forward_list>
#include <string>
using namespace std;
int main()
{
    forward_list<string> osList = { "Windows", "Linux", "Android", "macOS", "Ubuntu" };
    string searchElement = "Linux";
    string newElement = "Fedora";

    auto it = osList.begin();
    while (it != osList.end())
    {
        if (*it == searchElement)
        {
            // Вставка нового елемента після знайденого
            osList.insert_after(it, newElement);
            break;
        }

        ++it;
    }

    if (it == osList.end())
    {
        cout << "Елемент не знайдено" << endl;
    }

    for (auto i = osList.begin(); i != osList.end(); ++i)
    {
        cout << *i << " ";
    }

    return 0;
}