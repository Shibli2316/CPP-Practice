#include <iostream>
using namespace std;

int main()
{
    int a;
    int *ptr;
    cout << "Enter a number: ";
    cin >> a;
    ptr = &a;
    cout << "\n[a  ]:Value of A = " << a;
    cout << "\n[*pt]:Value of A = " << *ptr;
    cout << "\n[&a ]:Address of A = " << &a;
    cout << "\n[pt ]:Address of A = " << ptr;
    cout << "\n[&pt]:Address of pt = " << &ptr;
    cout << "\n[pt ]:Value of pt = " << ptr;
    return 0;
}
