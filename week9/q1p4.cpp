#include <iostream>

int gcdNonRecursive(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main() {
    int num1, num2;
    std::cout << "Enter two integers: ";
    std::cin >> num1 >> num2;
    
    int result = gcdNonRecursive(num1, num2);
    std::cout << "GCD of " << num1 << " and " << num2 << " (using iteration) is: " << result << std::endl;
    
    return 0;
}
