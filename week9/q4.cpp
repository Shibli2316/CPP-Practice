#include <iostream>
void swap_value(int a, int b) {
    int temp = a;
    a = b;
    b = temp;
}
void swap_reference(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}
int main() {
    int num1, num2;
    int choice;
    std::cout << "Enter two numbers: ";
    std::cin >> num1 >> num2;
    std::cout << "Choose swapping mechanism:" << std::endl;
    std::cout << "1. Call by Value" << std::endl;
    std::cout << "2. Call by Reference" << std::endl;
    std::cin >> choice;
    switch (choice) {
        case 1:
            swap_value(num1, num2);
            std::cout << "Swapped numbers (Call by Value): " << num1 << " " << num2 << std::endl;
            break;
        case 2:
            swap_reference(num1, num2);
            std::cout << "Swapped numbers (Call by Reference): " << num1 << " " << num2 << std::endl;
            break;
        default:
            std::cout << "Invalid choice. Please enter 1 or 2." << std::endl;
    }
    return 0;
}