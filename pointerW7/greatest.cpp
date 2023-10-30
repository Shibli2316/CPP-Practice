#include <iostream>
using namespace std;
class NumberPair {
private:
    double num1, num2;

public:
    NumberPair(double a, double b) {
        num1 = a;
        num2 = b;
    }
    double findGreater() {
        if (num1 > num2) {
            return num1;
        } else {
            return num2;
        }
    }
};

int main() {
    double a, b;
    cout << "Enter the first number: ";
    cin >> a;
    cout << "Enter the second number: ";
    cin >> b;
    NumberPair pair(a, b);
    double greatest = pair.findGreater();
    cout << "The greater number is: " << greatest << endl;
    return 0;
}
