#include <bits/stdc++.h>
using namespace std;


void Double(int *A, int n)
{
    // A[] and *A -> A is pointer
    for (int i = 0; i < n; i++)
    {
        A[i] *= 2;
    }

    // this will do same as the upper one is doing
    for (int i = 0; i < n; i++)
    {
        // *(A + i) *= 2; // This doubles the value in the array permanently
        *A = *A * 2; // This doubles the value in the array permanently
        A++; // Move the pointer to the next element 
        // but we can not move arr[] like this => arr++ is not allowed
    }
}


int main()
{

    int n;
    cout << "Enter the size of array: ";
    cin >> n;
    int Arr[n];
    cout << "Enter the elements of array: ";
    for (int i = 0; i < n; i++)
    {
        cin >> Arr[i];
    }
    Double(Arr, n);
    cout << "The elements of array after doubling: ";
    for (int i = 0; i < n; i++)
    {
        cout << Arr[i] << " ";
    }
    cout << endl;

    return 0;
}