#include <iostream>

using namespace std;

int main()
{
    int num;

    cout << "Enter Number: ";
    cin >> num;

    string result = (num % 2 == 0) ? "The number is Even." : "The number is Odd.";
    cout << result;
    return 0;
}
