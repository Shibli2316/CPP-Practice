#include <iostream>
using namespace std;

class Number1 {
private:
    int value1;
    int value2;

public:
    Number1(int v1, int v2) : value1(v1), value2(v2) {}

    friend Number1 operator+(const Number1& num1, const Number1& num2) {
        return Number1(num1.value1 + num2.value1, num1.value2 + num2.value2);
    }

    friend Number1 operator-(const Number1& num1, const Number1& num2) {
        return Number1(num1.value1 - num2.value1, num1.value2 - num2.value2);
    }

    friend Number1 operator*(const Number1& num1, const Number1& num2) {
        return Number1(num1.value1 * num2.value1, num1.value2 * num2.value2);
    }

    friend Number1 operator/(const Number1& num1, const Number1& num2) {
        if (num2.value1 != 0 && num2.value2 != 0) {
            return Number1(num1.value1 / num2.value1, num1.value2 / num2.value2);
        } else {
            cerr << "Division by zero is not allowed." << endl;
            return Number1(0, 0);
        }
    }

    void display() const {
        cout << "Value1: " << value1 << ", Value2: " << value2 << endl;
    }
};

int main() {
    int v1, v2;

    cout << "Enter the 2 values for Number1 (separate values by space): ";
    cin >> v1 >> v2;
    Number1 numObj1(v1, v2);

    cout << "Enter the 2 values for Number2 (separate values by space): ";
    cin >> v1 >> v2;
    Number1 numObj2(v1, v2);

    Number1 resultAdd = numObj1 + numObj2;
    Number1 resultSub = numObj1 - numObj2;
    Number1 resultMul = numObj1 * numObj2;
    Number1 resultDiv = numObj1 / numObj2;

    cout << "Addition: ";
    resultAdd.display();

    cout << "Subtraction: ";
    resultSub.display();

    cout << "Multiplication: ";
    resultMul.display();

    cout << "Division: ";
    resultDiv.display();

    return 0;
}