#include<bits/stdc++.h>
using namespace std;

int main(){
    int row, col;
    cin >> row >> col; // Input the dimensions of the 2D array

    vector<vector<int>> arr(row, vector<int>(col)); // Declare a 2D array using vector

    // Input elements into the 2D array
    for(int i = 0; i < row; i++) {
        for(int j = 0; j < col; j++) {
            cin >> arr[i][j];
        }
    }

    // vector<vector<int>> transpose(col, vector<int>(row)); // Declare a 2D array for the transpose
    
    // for(int i = 0; i < row; i++) {
    //     for(int j = 0; j < col; j++) {
    //         transpose[j][i] = arr[i][j]; // Assign the transposed value
    //     }
    // }


    // cout<<"Transposed 2D Array:" << endl;

    // // Output the transposed 2D array
    // for(int i = 0; i < col; i++) {
    //     for(int j = 0; j < row; j++) {
    //         cout << transpose[i][j] << " ";
    //     }
    //     cout << endl;
    // }

    // method 2
    for (int i = 0; i < row-1; i++)
    {
        for(int j = i+1; j < col; j++)
        {
            swap(arr[i][j], arr[j][i]); // Swap elements to transpose the matrix
        }
    }
    
    for(int i = 0; i < row; i++) {
        for(int j = 0; j < col; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    
    return 0;
}