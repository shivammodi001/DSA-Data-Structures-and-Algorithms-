#include <bits/stdc++.h>
using namespace std;

void reverseArrayUsingPointer(int *arr, int size)
{
    int start = 0;
    int end = size - 1;

    while (start < end)
    {
        // Correct function name: swap (not swab)
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}

void reverseArrayUsingReference(int arr[], int size)
{
    int start = 0;
    int end = size - 1;

    while (start < end)
    {
        // Correct function name: swap (not swab)
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}

int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);
    cout << "Original array: ";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    reverseArrayUsingPointer(arr, size);
    cout << "Reversed array using pointer: ";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    // Reset the array for reference example
    int arrRef[5] = {1, 2, 3, 4, 5};
    cout << "Original array for reference: ";
    for (int i = 0; i < size; i++)
    {
        cout << arrRef[i] << " ";
    }
    cout << endl;
    reverseArrayUsingReference(arrRef, size);
    cout << "Reversed array using reference: ";
    for (int i = 0; i < size; i++)
    {
        cout << arrRef[i] << " ";
    }
    return 0;
}