#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char s1[200], s2[100];
    cout << "Enter first string: ";
    cin.getline(s1, 200);
    cout << "Enter second string: ";
    cin.getline(s2, 100);

    strcat(s1, s2);

    cout << "Concatenated string = " << s1;
    return 0;
}
