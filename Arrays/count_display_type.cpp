#include <iostream>
using namespace std;

const int MAX_SIZE = 100;

void print_array(int arr[], int size){
    cout << "[";
    for (int i = 0; i < size; i++){
        cout << arr[i] << " ";
    }
    cout << "]" << endl;
}

int main(){
    int arr[MAX_SIZE];
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;
    cout << "Enter the elements of the array:" << endl;
    for (int i = 0; i < n; i++){
        cout << "-> ";
        cin >> arr[i];
    }
    cout << "Actual Array: ";
    print_array(arr, n);
    int positive[MAX_SIZE];
    int negative[MAX_SIZE];
    int even[MAX_SIZE];
    int odd[MAX_SIZE];
    int positiveCount = 0;
    int negativeCount = 0;
    int evenCount = 0;
    int oddCount = 0;
    for (int i = 0; i < n; i++){
        if (arr[i] > 0){
            positive[positiveCount] = arr[i];
            positiveCount++;
        } else if (arr[i] < 0){
            negative[negativeCount] = arr[i];
            negativeCount++;
        }
        if (arr[i] % 2 != 0){
            odd[oddCount] = arr[i];
            oddCount++;
        } else {
            even[evenCount] = arr[i];
            evenCount++;
        }
    }
    cout << "Number of Positive Numbers: " << positiveCount << endl;
    cout << "Positive numbers: ";
    print_array(positive, positiveCount);
    cout << "Number of Negative Numbers: " << negativeCount << endl;
    cout << "Negative numbers: ";
    print_array(negative, negativeCount);
    cout << "Number of Even Numbers: " << evenCount << endl;
    cout << "Even numbers: ";
    print_array(even, evenCount);
    cout << "Number of Odd Numbers: " << oddCount << endl;
    cout << "Odd numbers: ";
    print_array(odd, oddCount);
}
