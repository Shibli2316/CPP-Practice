#include <iostream>
using namespace std;

int main()
{
    int num1, num2, *ptr1, *ptr2;
    cout << "Enter the first number: ";
    cin >> num1;

    cout << "Enter the second number: ";
    cin >> num2;

    ptr1 = &num1;
    ptr2 = &num2;

    int sum = *ptr1 + *ptr2;
    cout << "The sum is " << sum;
    return 0;
}
