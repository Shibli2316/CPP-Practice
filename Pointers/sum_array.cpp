#include <iostream>
using namespace std;

int main(){
    int size;
    cout << "Enter size of the array: ";
    cin >> size;
    int *arr = new int[size];
    for(int i = 0; i < size; i++){
        cout << "-> ";
        cin >> arr[i];
    }
    int sum = 0;
    cout << "The array is ";
    cout << "[";
    for (int i = 0; i < size; i++){
        cout << *(arr + i) << " ";
        sum += *(arr + i);
    }
    cout << "]" << endl;
    cout << "The sum of the array is " << sum;
}
// sum of certain  number of elements defined by the user