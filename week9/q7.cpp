#include <iostream>

int findMax(int arr[], int size) {
    if (size == 1) {
        return arr[0]; 
    }
    int maxInRest = findMax(arr, size - 1);
    return (arr[size - 1] > maxInRest) ? arr[size - 1] : maxInRest;
}

int findMin(int arr[], int size) {
    if (size == 1) {
        return arr[0]; 
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
