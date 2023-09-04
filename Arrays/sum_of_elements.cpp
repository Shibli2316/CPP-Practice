#include <iostream>
using namespace std;

int sum_array(int arr[], int size){
    int sum = 0;
    for (int i = 0; i < size; i++){
        sum = arr[i] + sum;
    }
    cout << sum;
}
int print_array(int arr[], int size){
    cout << "[ ";
    for (int i = 0; i < size; i++){
        cout << arr[i] << " ";
    }
    cout << "]" << endl;
}

int main(){
    int size;
    int *arr = new int[size];
    cout << "Enter size for the array: ";
    cin >> size;
    for (int i = 0; i < size; i++){
        cout << "-> ";
        cin >> arr[i];
    }
    cout << "The array is ";
    print_array(arr, size);
    cout << "The sum of the elements of the array is ";
    sum_array(arr, size);
}
