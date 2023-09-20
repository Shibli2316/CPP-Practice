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
        cin >> *(arr + i);
    }

    // pointer for printing data of array
    cout << "The array is ";
    cout << "[";
    for (int i = 0; i < size; i++)
    {
        cout << *(arr + i) << " ";
    }
    cout << "]" << endl;


}
