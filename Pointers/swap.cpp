#include <iostream>
using namespace std;

void swapNumbers(double *num1, double *num2) {
    double temp = *num1;
    *num1 = *num2;
    *num2 = temp;
}

int main() {
    double num1, num2;

    cout << "Enter the first number: ";
    cin >> num1;

    cout << "Enter the second number: ";
    cin >> num2;

    cout << "Original numbers: " << num1 << " and " << num2 << endl;

    swapNumbers(&num1, &num2);

    cout << "Swapped numbers: " << num1 << " and " << num2 << endl;

    return 0;
}
