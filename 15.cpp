#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char text[200], sub[100];
    cout << "Enter main string: ";
    cin.getline(text, 200);

    cout << "Enter string to search: ";
    cin.getline(sub, 100);

    if (strstr(text, sub))
        cout << "String is present";
    else
        cout << "String is not present";

    return 0;
}
