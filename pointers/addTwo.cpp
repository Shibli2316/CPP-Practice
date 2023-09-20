#include <iostream>
using namespace std;

int main() {
    double num1, num2;

    cout << "Enter the first number: ";
    cin >> num1;

    cout << "Enter the second number: ";
    cin >> num2;

    double *ptr1 = &num1;
    double *ptr2 = &num2;

    double sum = *ptr1 + *ptr2;

    cout << "The sum of " << *ptr1 << " and " << *ptr2 << " is: " << sum << endl;

    return 0;
}
