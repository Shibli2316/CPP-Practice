#include <iostream>

// User-defined data type
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

    // Example 1: From basic type to user-defined data type
    int intValue;

    cout << "Example 1: Basic type to User-defined type" << endl;
    cout << "Enter an integer value: ";
    cin >> intValue;

    // Explicitly convert int to MyInteger
    MyInteger myInt = static_cast<MyInteger>(intValue);

    cout << "Original int value: " << intValue << endl;
    cout << "Converted MyInteger value: " << myInt.getValue() << endl;
    cout << endl;

    // Example 2: From user-defined data type to basic type
    int myValue;

    cout << "Example 2: User-defined type to Basic type" << endl;
    cout << "Enter a MyInteger value: ";
    cin >> myValue;

    // Explicitly convert MyInteger to int
    int convertedInt = static_cast<int>(myValue);

    cout << "Original MyInteger value: " << myValue << endl;
    cout << "Converted int value: " << convertedInt << endl;

    return 0;
}