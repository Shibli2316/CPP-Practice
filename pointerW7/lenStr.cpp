#include <iostream>
#include <cstring>

using namespace std;

int stringLength(const char *str) {
    int length = 0;
    while (*str) {
        length++;
        str++; 
    }
    return length;
}

int main() {
    char inputString[100];

    cout << "Enter a string: ";
    cin.getline(inputString, sizeof(inputString));

    int length = stringLength(inputString);

    cout << "Length of the string: " << length << endl;
    return 0;
}
