#include <iostream>
using namespace std;

class NumberProcessor;

double func1(const NumberProcessor& processor, double num1, double num2);

double func2(const NumberProcessor& processor, double num1, double num2, double num3);

class NumberProcessor {
private:
    double num1, num2, num3, num4, num5;

public:
    NumberProcessor(double n1, double n2, double n3, double n4, double n5)
        : num1(n1), num2(n2), num3(n3), num4(n4), num5(n5) {}

    friend double func1(const NumberProcessor& processor, double num1, double num2);

    friend double func2(const NumberProcessor& processor, double num1, double num2, double num3);

    double calculateAverage() const {
        return (num1 + num2 + num3 + num4 + num5) / 5.0;
    }
};

double func1(const NumberProcessor& processor, double num1, double num2) {
    return (processor.num1 + processor.num2 + num1 + num2) / 4.0;
}

double func2(const NumberProcessor& processor, double num1, double num2, double num3) {
    return (processor.num1 + processor.num2 + processor.num3 + num1 + num2 + num3) / 6.0;
}

int main() {
    double n1, n2, n3, n4, n5;
    cout << "Enter five different numbers: ";
    cin >> n1 >> n2 >> n3 >> n4 >> n5;

    NumberProcessor processor(n1, n2, n3, n4, n5);

    double average1 = func1(processor, 6.0, 7.0);
    cout << "Average using func1: " << average1 << endl;

    double average2 = func2(processor, 8.0, 9.0, 10.0);
    cout << "Average using func2: " << average2 << endl;

    double average3 = processor.calculateAverage();
    cout << "Average using member function: " << average3 << endl;

    return 0;
}