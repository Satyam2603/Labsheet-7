#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char str[100], ch;
    cout << "Enter a string: ";
    cin.getline(str, 100);

    cout << "Enter character to search: ";
    cin >> ch;

    char* pos = strrchr(str, ch);

    if (pos)
        cout << "Last occurrence at index: " << pos - str;
    else
        cout << "Character not found";

    return 0;
}
