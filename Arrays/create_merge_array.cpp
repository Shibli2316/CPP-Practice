#include <iostream>
using namespace std;

void sorted(int arr[], int size)
{
    for(int i = 0; i < size; i++)
    {
        for (int j = i+1; j < size; j++)
        {
            if (arr[j] < arr[i])
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

void mergeAndSort(int arr1[], int size1, int arr2[], int size2, int result[])
{
    int i = 0, j = 0, k = 0;

    while (i < size1 && j < size2)
    {
        if (arr1[i] <= arr2[j])
        {
            result[k] = arr1[i];
            i++;
        }
        else
        {
            result[k] = arr2[j];
            j++;
        }
        k++;
    }

    // Copy remaining elements from arr1, if any
    while (i < size1)
    {
        result[k] = arr1[i];
        i++;
        k++;
    }

    // Copy remaining elements from arr2, if any
    while (j < size2)
    {
        result[k] = arr2[j];
        j++;
        k++;
    }

    // Sort the merged array
    sorted(result, k);
}


void insertion(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << "-> ";
        cin >> arr[i];
    }
}

void print_array(int arr[], int size)
{
    cout << "[";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i];
        if (i < size - 1)
            cout << " ";
    }
    cout << "]" << endl;
}

int main()
{
    int size1, size2;
    cout << "----------- ARRAY 1 ----------" << endl;
    cout << "Enter size for the array: ";
    cin >> size1;

    int *arr1 = new int[size1];

    insertion(arr1, size1);

    cout << "Original Array: ";
    print_array(arr1, size1);

    sorted(arr1, size1);

    cout << "\nSorted Array: ";
    print_array(arr1, size1);

    cout << "----------- ARRAY 2 ----------" << endl;
    cout << "Enter size for the array: ";
    cin >> size2;

    int *arr2 = new int[size2];

    insertion(arr2, size2);

    cout << "Original Array: ";
    print_array(arr2, size2);

    sorted(arr2, size2);

    cout << "\nSorted Array: ";
    print_array(arr2, size2);

     // Merge and Sort Arrays
    int mergedSize = size1 + size2;
    int *mergedArray = new int[mergedSize];

    mergeAndSort(arr1, size1, arr2, size2, mergedArray);

    cout << "----------- MERGED & SORTED ARRAY ----------" << endl;
    cout << "Merged and Sorted Array: ";
    print_array(mergedArray, mergedSize);

    delete[] arr1;
    delete[] arr2;
    delete[] mergedArray;

    return 0;
}
