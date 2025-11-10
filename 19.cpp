#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char result[300] = "";
    int n;
    cout << "Enter number of strings: ";
    cin >> n;
    cin.ignore();

    char temp[100];

    for (int i = 0; i < n; i++) {
        cout << "Enter string " << i + 1 << ": ";
        cin.getline(temp, 100);

        strcat(result, temp);
        strcat(result, " ");  // space between words
    }

    cout << "Joined sentence: " << result;
    return 0;
}
