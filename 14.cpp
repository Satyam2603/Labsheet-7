#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char text[200], sub[100];
    cout << "Enter main string: ";
    cin.getline(text, 200);

    cout << "Enter substring: ";
    cin.getline(sub, 100);

    char* pos = strstr(text, sub);

    if (pos)
        cout << "Substring found at index: " << pos - text;
    else
        cout << "Substring not found";

    return 0;
}
