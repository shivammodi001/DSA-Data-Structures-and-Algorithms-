#include<bits/stdc++.h>
using namespace std;

int main(){
    int num = 5;
    int *ptr = &num; // it will store the address of num
    cout<< "Value of num: " << num << endl;
    cout<< "Address of num: " << &num << endl;
    cout<< "Value of ptr: " << ptr << endl;
    cout<< "Value pointed by ptr: " << *ptr << endl; // dereferencing the pointer(value at that address)
    cout<< "Address of ptr: " << &ptr << endl; // address of the pointer itself

    // update the value of num using pointer
    *ptr = 10; // dereferencing the pointer to change the value at that address

    //now num will be 10
    cout<< "Updated value of num: " << num << endl;

    int arr[5] = {1, 2, 3, 4, 5};
    int *ptr = arr; // Pointer to the first element of the array (arr is equivalent to &arr[0])
    cout << "Array elements using pointer:" << endl;
    for (int i = 0; i < 5; i++) {
        cout << "Value at arr[" << i << "] using ptr[" << i << "]: " << ptr[i] << endl;
    }

    // Accessing array elements using pointer arithmetic
    for (int i = 0; i < 5; i++) {
        cout << "Value at arr[" << i << "] using *(arr + " << i << "): " << *(arr + i) << endl;
    }

    // we can apply operations on pointers but not in the array
    ptr += 2; // Move the pointer to the third element of the array
    cout << "Value at ptr after moving 2 positions: " << *ptr << endl; // Should print 3
    return 0;
}