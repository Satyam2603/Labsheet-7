#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char fname[100], lname[100];
    cout << "Enter first name: ";
    cin.getline(fname, 100);
    cout << "Enter last name: ";
    cin.getline(lname, 100);

    strcat(fname, " ");
    strcat(fname, lname);

    cout << "Full name = " << fname;
    return 0;
}
