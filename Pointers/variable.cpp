#include <iostream>
using namespace std;

int main() {
    int number;
    cout << "Enter a number: ";
    cin >> number;
    int *ptr = &number;
    cout << "Address of the variable: " << ptr << endl;

    return 0;
}
