#include <iostream>
using namespace std;

int main()
{
    int size;
    cout << "Enter size of the array: ";
    cin >> size;

    int *arr = new int[size];

        for(int i = 0; i < size; i++)
    {
        cout << "-> ";
        cin >> arr[i];
    }

    // pointer initialization to first element
    int *ptr1 = &arr[0];
    cout << "The address of the first element is " << ptr1 << endl;
    cout << "The first element using pointer is " << *ptr1 << endl;

    // pointer for printing data of array
    cout << "The array is ";
    cout << "[";
    for (int i = 0; i < size; i++)
    {
        cout << *(arr + i) << " ";
    }
    cout << "]" << endl;
}
