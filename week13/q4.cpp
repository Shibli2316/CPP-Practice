#include <iostream>

class MyInteger {
private:
    int value;

public:
    MyInteger(int val) : value(val) {}

    int getValue() const {
        return value;
    }
};

int main() {
    using namespace std;
    int intValue;

    cout << "Example 1: Basic type to User-defined type" << endl;
    cout << "Enter an integer value: ";
    cin >> intValue;

    MyInteger myInt = static_cast<MyInteger>(intValue);

    cout << "Original int value: " << intValue << endl;
    cout << "Converted MyInteger value: " << myInt.getValue() << endl;
    cout << endl;

    int myValue;

    cout << "Example 2: User-defined type to Basic type" << endl;
    cout << "Enter a MyInteger value: ";
    cin >> myValue;

    int convertedInt = static_cast<int>(myValue);

    cout << "Original MyInteger value: " << myValue << endl;
    cout << "Converted int value: " << convertedInt << endl;

    return 0;
}