#include <iostream>
using namespace std;
float add(float a, float b){
    return a + b;
}
float subtract(float a, float b){
    return a - b;
}
float multiply(float a, float b){
    return a * b;
}
float divide(float a, float b){
    if (b != 0){
        return a / b;
    }
    else{
        cout << "Error! Division by zero is not allowed.";
        return 0;
    }
}

int main(){
    float num1, num2, result;
    char operation;

    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter second number: ";
    cin >> num2;

    cout << "Choose an operation:" << endl;
    cout << "1. Addition (+)" << endl;
    cout << "2. Subtraction (-)" << endl;
    cout << "3. Multiplication (*)" << endl;
    cout << "4. Division (/)" << endl;
    cout << "Enter your choice (1/2/3/4): ";
    cin >> operation;

    switch (operation){
    case '1':
        result = add(num1, num2);
        cout << "Result: " << result;
        break;
    case '2':
        result = subtract(num1, num2);
        cout << "Result: " << result;
        break;
    case '3':
        result = multiply(num1, num2);
        cout << "Result: " << result;
        break;
    case '4':
        result = divide(num1, num2);
        cout << "Result: " << result;
        break;
    default:
        cout << "Invalid choice!";
    }

    return 0;
}