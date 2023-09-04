#include <iostream>
using namespace std;

const int MAX_SIZE = 100;

int main(){
    int arr[MAX_SIZE];
    int n, target;

    cout << "Enter the size of the array: ";
    cin >> n;
    cout << "Enter the elements of the array:" << endl;
    for (int i = 0; i < n; i++){
        cout << "--> ";
        cin >> arr[i];
    }

    cout << "Enter the number to find its frequency: ";
    cin >> target;
    int frequency = 0;
    for (int i = 0; i < n; i++){
        if (arr[i] == target){
            frequency++;
        }
    }
    cout << "The frequency of " << target << " in the array is: " << frequency << endl;
    return 0;
}
