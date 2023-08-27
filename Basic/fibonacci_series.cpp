#include <iostream>
using namespace std;

int fib(int n)
{
    if (n <= 1)
    {
        return 1;
    }

    else
    {
        return fib(n-1) + fib(n-2);
    }
}

int main()
{
    int num;
    cout << "Enter number: ";
    cin >> num;
    cout << "The fibonacci series : " << endl;
    for(int i = 0; i <= num; i++){
        cout << fib(i) << endl;
    }
    return 0;
}
