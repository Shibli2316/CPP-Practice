#include <iostream>

// Function to find the maximum element in an array using recursion
int findMax(int arr[], int size) {
    if (size == 1) {
        return arr[0]; // Base case: when there is only one element
    }

    int maxInRest = findMax(arr, size - 1);

    return (arr[size - 1] > maxInRest) ? arr[size - 1] : maxInRest;
}

// Function to find the minimum element in an array using recursion
int findMin(int arr[], int size) {
    if (size == 1) {
        return arr[0]; // Base case: when there is only one element
    }

    int minInRest = findMin(arr, size - 1);

    return (arr[size - 1] < minInRest) ? arr[size - 1] : minInRest;
}

int main() {
    int arr[] = {12, 6, 25, 8, 15, 3};
    int size = sizeof(arr) / sizeof(arr[0]);

    int maxElement = findMax(arr, size);
    int minElement = findMin(arr, size);

    std::cout << "Maximum element in the array: " << maxElement << std::endl;
    std::cout << "Minimum element in the array: " << minElement << std::endl;

    return 0;
}
