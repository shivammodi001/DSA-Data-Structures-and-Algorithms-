#include<iostream>
using namespace std;

// Arr  
// &Arr  ---> This gives the address of the first element of the array
// &Arr[0]
// these are same things giving the address of the first element of the array

int main() {
    int Arr[] = {10, 20, 30, 40, 50};

    cout << "Arr      : " << Arr << endl;
    cout << "&Arr     : " << &Arr << endl;
    cout << "&Arr[0]  : " << &Arr[0] << endl;

    // All the above will print the same address

    cout << "\nAccessing values:\n";
    cout << "*Arr         : " << *Arr << endl;        // prints first element (10)
    cout << "*&Arr[0]     : " << *&Arr[0] << endl;    // also prints first element (10)
    cout << "*(&Arr[0])   : " << *(&Arr[0]) << endl;  // same

    return 0;
}
