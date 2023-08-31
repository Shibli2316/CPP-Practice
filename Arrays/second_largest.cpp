
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

int second_largest(int arr[], int size)
{
    int max1, max2 = 0, 0;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] > max1)
        {
            max1 = arr[i];
        }
        else if (max1 < max2)
        {
            max2 = max1;
        }
        cout << max1;
    }
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
