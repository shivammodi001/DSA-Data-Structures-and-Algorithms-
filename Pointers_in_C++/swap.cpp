#include<bits/stdc++.h>
using namespace std;

void swapUsingPointer(int *a, int *b) {
    int temp = *a; // Store the value pointed by a in temp
    *a = *b;       // Assign the value pointed by b to the location pointed by a
    *b = temp;    // Assign the value stored in temp to the location pointed by b
}

void swapUsingReference(int &a, int &b) {
    int temp = a; // Store the value of a in temp
    a = b;        // Assign the value of b to a
    b = temp;    // Assign the value stored in temp to b
}

void swapUsingValue(int a, int b) {
    int temp = a; // Store the value of a in temp
    a = b;        // Assign the value of b to a
    b = temp;    // Assign the value stored in temp to b
}

int main() {
    int x = 10, y = 20;

    cout << "Before swapUsingPointer: x = " << x << ", y = " << y << endl;
    swapUsingPointer(&x, &y);
    cout << "After swapUsingPointer: x = " << x << ", y = " << y << endl;

    // Reset values
    x = 10; y = 20;
    cout << "Before swapUsingReference: x = " << x << ", y = " << y << endl;
    swapUsingReference(x, y);
    cout << "After swapUsingReference: x = " << x << ", y = " << y << endl;

    // Reset values
    x = 10; y = 20;
    cout << "Before swapUsingValue: x = " << x << ", y = " << y << endl;
    swapUsingValue(x, y);
    // no change in x and y since we passed by value
    cout << "After swapUsingValue: x = " << x << ", y = " << y << endl;

    return 0;
}
