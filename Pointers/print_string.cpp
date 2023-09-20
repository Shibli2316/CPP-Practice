#include <iostream>
using namespace std;

int main()
{
    string strr;
    cout << "Enter a string: ";
    getline(cin, strr);
    string *ptr = &strr;
    cout << "The string address is " << ptr << endl;
    cout << "The string is " << *ptr;
}
