include <iostream>
#include <cstring>
using namespace std;

int main() {
    char source[100], dest[100];
    cout << "Enter a string: ";
    cin.getline(source, 100);

    strncpy(dest, source, 5);
    dest[5] = '\0'; // null-terminate

    cout << "First 5 characters copied: " << dest;
    return 0;
}
