#include <iostream>
using namespace std;

int print_array(int arr[], int size)
{
    cout << "[";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << "]";
}

int main()
{
    int size;
    int *arr = new int[size];
    cout << "Enter size for the array: ";
    cin >> size;

    for (int i = 0; i < size; i++)
    {
        cout << "-> ";
        cin >> arr[i];
    }

    print_array(arr, size);

    return 0;
}
