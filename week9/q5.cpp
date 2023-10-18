#include <iostream>

// Function to display array elements using recursion
void displayArray(int arr[], int size, int index) {
    if (index == size) {
        return; // Base case: stop when the index reaches the array size
    }
    
    // Display the current element
    std::cout << arr[index] << " ";
    
    // Recursively call the function to display the next element
    displayArray(arr, size, index + 1);
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);
    
    std::cout << "Array elements using recursion: ";
    displayArray(arr, size, 0);
    
    std::cout << std::endl;
    
    return 0;
}
