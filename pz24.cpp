#include <iostream>
#include <forward_list>
#include <string>
using namespace std;

int main() {
forward_list<string> osList = {"Windows", "Linux", "Android", "macOS", "Ubuntu"};
int sum = 0;
for (string osList: osList)
{
    sum = sum + osList.length();
}
cout << "Загальна кількість символів:" << sum;
return 0;
}