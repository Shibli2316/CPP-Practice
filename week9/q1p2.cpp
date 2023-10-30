#include <iostream>


unsigned long long factorialNonRecursive(int n) {
    unsigned long long result = 1;
    for (int i = 2; i <= n; ++i) {
        result *= i;
    }
    return result;
}

int main() {
    int n;
    std::cout << "Enter a non-negative integer: ";
    std::cin >> n;
    
    if (n < 0) {
        std::cout << "Factorial is not defined for negative numbers." << std::endl;
    } else {
        unsigned long long result = factorialNonRecursive(n);
        std::cout << "Factorial of " << n << " (using iteration) is: " << result << std::endl;
    }
    
    return 0;
}
