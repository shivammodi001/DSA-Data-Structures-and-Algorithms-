#include <bits/stdc++.h>
using namespace std;

// Pivot element is chosen as the last element of the array
// Now Abb jo bhi element Pivot se Small h hain left me jaye
// Jo bhi element Pivot se bde h wo right me jaye
// divide and conquer approach -> repeat the process for left and right subarrays

// two pointer approach use karenge
// first pointer and second pointer
// if(arr[second] <= pivot)
// then swap first and second pointer and inc first pointer as well as second pointer
// if(arr[second] > pivot)
// then just inc second pointer

int partition(int arr[], int st, int end)
{
    int pivot = arr[end];
    int first = st;
    int second = st;
    while (second <= end)
    {
        if (arr[second] <= pivot)
        {
            swap(arr[first], arr[second]);
            first++;
            second++;
        }else{
            // agar arr[second] > pivot hai to sirf second pointer ko inc karna hai
            second++;
        }
    }
    return first - 1; // pivot ka sahi index return karna hai
}

// QuickSort function
void quickSort(int arr[], int st, int end)
{
    // base case
    if (st >= end)
    {
        return; // agar sirf ek element ya zero element hai to sort nahi karna
    }
    // partition karo, pivot ka sahi index milega
    int pi = partition(arr, st, end);

    // left side ko sort karo
    quickSort(arr, st, pi - 1);
    // right side ko sort karo
    quickSort(arr, pi + 1, end);
}

int main()
{
    int arr[] = {10, 7, 8, 9, 1, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    quickSort(arr, 0, n - 1);
    cout << "Sorted array: \n";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
    return 0;
}