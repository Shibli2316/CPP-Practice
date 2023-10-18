#include <iostream>

// Function to find the sum of elements in an array using recursion
int arraySum(int arr[], int size, int index) {
    if (index < 0) {
        return 0; // Base case: return 0 when index is negative
    }
    
    // Recursively sum the current element and the sum of the rest of the elements
    return arr[index] + arraySum(arr, size, index - 1);
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);
    
    int sum = arraySum(arr, size, size - 1);
    
    std::cout << "Sum of array elements using recursion: " << sum << std::endl;
    
    return 0;
}
