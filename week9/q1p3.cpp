#include <iostream>

int gcdRecursive(int a, int b) {
    if (b == 0)
        return a;
    return gcdRecursive(b, a % b);
}

int main() {
    int num1, num2;
    std::cout << "Enter two integers: ";
    std::cin >> num1 >> num2;
    
    int result = gcdRecursive(num1, num2);
    std::cout << "GCD of " << num1 << " and " << num2 << " (using recursion) is: " << result << std::endl;
    
    return 0;
}
