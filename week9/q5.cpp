#include <iostream>

void displayArray(int arr[], int size, int index) {
    if (index == size) {
        return; 
    }    
    std::cout << arr[index] << " ";    
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
