#include <iostream>
unsigned long long factorialRecursive(int n) {
    if (n == 0 || n == 1)
        return 1;
    return n * factorialRecursive(n - 1);
}

int main() {
    int n;
    std::cout << "Enter a non-negative integer: ";
    std::cin >> n;
    if (n < 0) {
        std::cout << "Factorial is not defined for negative numbers." << std::endl;
    } else {
        unsigned long long result = factorialRecursive(n);
        std::cout << "Factorial of " << n << " (using recursion) is: " << result << std::endl;
    }
    
    return 0;
}
