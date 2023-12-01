#include <iostream>
using namespace std;

class Number3 {

private:
    int value;

public:
    Number3(int initialValue) : value(initialValue) {}

    Number3 operator-() {
        Number3 result(-value);
        return result;
    }

    Number3 operator++() {
        ++value;
        return *this;
    }

    Number3 operator--() {
        --value;
        return *this;
    }

    int getValue() const {
        return value;
    }
};

int main() {

    cout << "Enter an initial integer value: ";
    int initialValue;
    cin >> initialValue;

    Number3 num(initialValue);

    Number3 negNum = -num;
    ++num;
    --num;

    cout << "Original Value: " << num.getValue() << endl;
    cout << "Negation: " << negNum.getValue() << endl;

    return 0;
}