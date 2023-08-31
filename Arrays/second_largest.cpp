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

int second_largest(int arr[], int size)
{
    if (size < 2)
    {
        cout << "Array size is too small to find the second largest element." << endl;
        return -1;
    }

    int max1 = arr[0];
    int max2 = arr[1];

    if (max1 < max2)
    {
        swap(max1, max2);
    }

    for (int i = 2; i < size; i++)
    {
        if (arr[i] > max1)
        {
            max2 = max1;
            max1 = arr[i];
        }
        else if (arr[i] > max2 && arr[i] != max1)
        {
            max2 = arr[i];
        }
    }

    return max1;
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

    cout << "Second Largest element in the array is " << second_largest(arr, size);

    return 0;
}
