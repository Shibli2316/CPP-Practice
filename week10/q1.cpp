#include <iostream>
using namespace std;

struct Complex {
    float real;
    float imag;
};
void readComplexNumber(Complex &num) {
    cout << "Enter real part: ";
    cin >> num.real;
    cout << "Enter imaginary part: ";
    cin >> num.imag;
}
void writeComplexNumber(const Complex &num) {
    cout << "Complex Number: " << num.real;
    if (num.imag >= 0) cout << " + " << num.imag << "i";
    else cout << " - " << -num.imag << "i";
    cout << endl;
}
Complex addComplexNumbers(const Complex &num1, const Complex &num2) {
    Complex result;
    result.real = num1.real + num2.real;
    result.imag = num1.imag + num2.imag;
    return result;
}
Complex subtractComplexNumbers(const Complex &num1, const Complex &num2) {
    Complex result;
    result.real = num1.real - num2.real;
    result.imag = num1.imag - num2.imag;
    return result;
}

Complex multiplyComplexNumbers(const Complex &num1, const Complex &num2) {
    Complex result;
    result.real = num1.real * num2.real - num1.imag * num2.imag;
    result.imag = num1.real * num2.imag + num1.imag * num2.real;
    return result;
}

int main() {
    Complex num1, num2, sum, difference, product;
    cout << "Enter first complex number:\n";
    readComplexNumber(num1);
    cout << "Enter second complex number:\n";
    readComplexNumber(num2);
    sum = addComplexNumbers(num1, num2);
    difference = subtractComplexNumbers(num1, num2);
    product = multiplyComplexNumbers(num1, num2);
    cout << "\nSum of the complex numbers:\n";
    writeComplexNumber(sum);
    cout << "\nDifference of the complex numbers:\n";
    writeComplexNumber(difference);
    cout << "\nProduct of the complex numbers:\n";
    writeComplexNumber(product);
    return 0;
}
