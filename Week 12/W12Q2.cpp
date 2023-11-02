#include <iostream>
using namespace std;

class Calculator
{
private:
    int num1, num2, num3, num4;

public:
    Calculator(int a, int b, int c, int d){
        num1 = a;
        num2 = b;
        num3 = c;
        num4 = d;
    }

    void performOperations(){
        cout << "Addition: " << num1 + num2 << endl;
        cout << "Subtraction: " << num1 - num2 << endl;
        cout << "Multiplication: " << num1 * num2 << endl;
        cout << "Division: " << num1 / num2 << endl;
        cout << "Modulus: " << num3 % num4 << endl;
    }
};

int main(){
    Calculator calc(10, 5, 8, 3);
    calc.performOperations();
    return 0;
}
