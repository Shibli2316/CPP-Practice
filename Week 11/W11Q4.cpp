#include <iostream>
#include <bitset>
using namespace std;

int main() {
    int num;
    char choice;

    do {
        cout << "Enter an integer number: ";
        cin >> num;

        cout << "Binary equivalent: " << bitset<32>(num) << endl;
        cout << "Octal equivalent: 0" << oct << num << endl;
        cout << "Hexadecimal equivalent: 0x" << hex << num << endl;

        cout << "Do you want to continue? (y/n): ";
        cin >> choice;
    } while (choice == 'y' || choice == 'Y');

    return 0;
}
