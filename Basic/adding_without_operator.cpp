#include <iostream>
using namespace std;

int adding(int x, int y)
{
    while (y != 0)
    {
        int carry = x & y;
        x = x ^ y;
        y = carry << 1;
    }
    return x;
}

int main()
{
    int num1, num2;

    cout << "Enter Number 1: ";
    cin >> num1;

    cout << "Enter Number 2: ";
    cin >> num2;

    cout << "The sum is " << adding(num1, num2);
    return 0;
}

