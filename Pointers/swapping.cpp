#include <iostream>
using namespace std;

void swapvalue (int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{
    int a, b;

    cout << "Enter two numbers: \n";
    cin >> a >> b;

    swapvalue(&a, &b);

    cout << "After swapping first and second number is "<<a <<" "<<b;
    return 0;
}
