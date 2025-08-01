// 2D Array with Pointers - Full Demonstration
#include <iostream>
using namespace std;

int main() {
    // Static 2D Array
    int arr[3][3] = {
        {1, 2, 3}, 
        {4, 5, 6}, 
        {7, 8, 9}
    };

    // Pointer Explanation
    // arr           → Address of the first row (same as &arr[0])
    // &arr          → Address of the entire 2D array
    // &arr[0]       → Address of the first row
    // &arr[0][0]    → Address of the first element

    // *arr[0]       → First element of the first row → 1
    // *(arr + 0)    → Address of first row (same as &arr[0])
    // *(*(arr + 0)) → First element of first row → 1

    // *arr[1]       → First element of second row → 4
    // *(arr + 1)    → Address of second row (i.e., &arr[1])
    // *(*(arr + 1)) → First element of second row → 4
    // *(*(arr + 1) + 1) → Second element of second row → 5

    // -------------------------------
    // Pointers and Addresses
    cout << "Static 2D Array Info:\n";
    cout << "Address of arr             : " << arr << endl;
    cout << "Address of &arr            : " << &arr << endl;
    cout << "Address of &arr[0]         : " << &arr[0] << endl;
    cout << "Address of &arr[0][0]      : " << &arr[0][0] << endl;

    // Accessing values using pointers
    cout << "\nAccessing Values via Pointer:\n";
    cout << "First element of 1st row   : " << *arr[0] << endl;
    cout << "First element of 2nd row   : " << *(*(arr + 1)) << endl;
    cout << "Second element of 2nd row  : " << *(*(arr + 1) + 1) << endl;

    // -------------------------------
    // Double Pointer Concept
    int num = 10;
    int *p = &num;     //    Pointer to int
    int **pp = &p;     // Pointer to pointer

    cout << "\nDouble Pointer Demo:\n";
    cout << "Value of num               : " << num << endl;
    cout << "Access via *p              : " << *p << endl;
    cout << "Access via **pp            : " << **pp << endl;

    // -------------------------------

    // Dynamin 1D Array Using Pointer
 
    // function to take input and display a dynamic array

    // void func1(int *arr, int size) {
    //     for (int i = 0; i < size; ++i) {
    //         cout << arr[i] << " "; // Displaying the array
    //     }
    //     cout << endl;
    // }

    int *arr1 = new int[5]; // Dynamic array of 5 integers
    cout << "\nEnter 5 integers for dynamic array:\n";
    for (int i = 0; i < 5; ++i) {
        cin >> arr1[i]; // Taking input
    }
    cout << "\nYou entered:\n";
    for (int i = 0; i < 5; ++i) {
        cout << arr1[i] << " "; // Displaying the array
    }
    // func1(arr1, 5); // Calling function to display the array
    cout << endl;

    // Freeing allocated memory
    delete[] arr1; // heap se memory delete karni padti h stack se apne aap se delete ho jata h


// -----------------------------------------------------------

    // Dynamic 2D Array Using Double Pointer

    // void func2(int **arr, int rows, int cols) {
    //     for (int i = 0; i < rows; ++i) {
    //         for (int j = 0; j < cols; ++j) {
    //             cout << arr[i][j] << " "; // Displaying the array
    //         }
    //         cout << endl;
    //     }
    // }

    int **ptr = new int*[3]; // Array of 3 pointers (rows)

    for (int i = 0; i < 3; ++i) {
        ptr[i] = new int[3]; // Each row has 3 integers (columns)
    }

    // Taking input from user
    cout << "\nEnter elements for 3x3 dynamic array:\n";
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            cin >> ptr[i][j];
        }
    }

    // Displaying the dynamic 2D array
    cout << "\nYou entered:\n";
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            cout << ptr[i][j] << " ";
        }
        cout << endl;
    }

    // Freeing allocated memory
    for (int i = 0; i < 3; ++i) {
        delete[] ptr[i];
    }
    delete[] ptr;

    return 0;
}
