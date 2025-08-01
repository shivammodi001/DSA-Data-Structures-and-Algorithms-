#include <iostream>
using namespace std;

// Function takes reference to a 2D array with 3 columns
void printArray(int (&arr)[3][3]) {
    int rows = sizeof(arr) / sizeof(arr[0]);         // total size / row size
    int cols = sizeof(arr[0]) / sizeof(arr[0][0]);   // row size / element size

    cout << "Rows: " << rows << ", Columns: " << cols << endl;

    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    int arr[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    printArray(arr);
    return 0;
}
