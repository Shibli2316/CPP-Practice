#include <iostream>
using namespace std;

class Number
{
private:
    int value1;
    int value2;

public:
    Number(int v1, int v2) : value1(v1), value2(v2) {}

    // Overloaded addition operator
    Number operator+(const Number& other) const
    {
        Number result(value1 + other.value1, value2 + other.value2);
        return result;
    }

    // Overloaded subtraction operator
    Number operator-(const Number& other) const
    {
        Number result(value1 - other.value1, value2 - other.value2);
        return result;
    }

    // Overloaded multiplication operator
    Number operator*(const Number& other) const
    {
        Number result(value1 * other.value1, value2 * other.value2);
        return result;
    }

    // Overloaded division operator
    Number operator/(const Number& other) const
    {
        // Check if divisor's values are not zero
        if (other.value1 != 0 && other.value2 != 0)
        {
            Number result(value1 / other.value1, value2 / other.value2);
            return result;
        }
        else
        {
            cerr << "Error: Division by zero\n";
            exit(1);
        }
    }

    // Display function to show the values
    void display() const
    {
        cout << "Value1: " << value1 << ", Value2: " << value2 << endl;
    }
};

int main()
{
    // Taking input from the user
    int input1, input2;
    cout << "Enter the values for num1 (space-separated): ";
    cin >> input1 >> input2;
    Number num1(input1, input2);

    cout << "Enter the values for num2 (space-separated): ";
    cin >> input1 >> input2;
    Number num2(input1, input2);

    Number sum = num1 + num2;
    Number difference = num1 - num2;
    Number product = num1 * num2;
    Number quotient = num1 / num2;

    cout << "Sum: ";
    sum.display();

    cout << "Difference: ";
    difference.display();

    cout << "Product: ";
    product.display();

    cout << "Quotient: ";
    quotient.display();

    return 0;
}