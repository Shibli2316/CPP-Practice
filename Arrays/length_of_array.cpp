#include <iostream>
using namespace std;

int length_array(int arr[], int size){
    int count = 0;
    for (int i = 0; i < size; i++){
        count++;
    }
    cout << count;
    return count;
}

void print_array(int arr[], int size){
    cout << "[ ";
    for (int i = 0; i < size; i++){
        cout << arr[i] << " ";
    }
    cout << "]" << endl;
}

int main(){
    int size;
    cout << "Enter size for the array: ";
    cin >> size;
    
    int *arr = new int[size]; // Allocate memory after getting the size
    
    for (int i = 0; i < size; i++){
        cout << "-> ";
        cin >> arr[i];
    }
    cout << "The array is ";
    print_array(arr, size);
    cout << "The length of the array is ";
    length_array(arr, size);
    
    // Don't forget to release the dynamically allocated memory
    delete[] arr;
}
