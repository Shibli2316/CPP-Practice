#include <iostream>
using namespace std;

int print_array(int arr[], int size)
{
    cout << "[";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << "]" << endl;
}

void reverse_array(int arr[], int size)
{
    int *arr_new = new int[size];
    for (int i = size - 1; i >= 0; i--)
    {
        arr_new[size - 1 - i] = arr[i];
    }
    print_array(arr_new, size);
    delete[] arr_new;
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
    cout << "The array is ";
    print_array(arr, size);

    cout << "The reversed array is ";
    reverse_array(arr, size);

    delete[] arr;

    return 0;
}
