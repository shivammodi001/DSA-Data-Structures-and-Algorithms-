#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, m;
    cin >> n >> m; // Input the dimensions of the 2D array

    vector<vector<int>> arr(n, vector<int>(m)); // Declare a 2D array using vector

    // Input elements into the 2D array
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            cin >> arr[i][j];
        }
    }

    // flip the 2d array vertically  (reverse each column)

    // [[1, 2, 3],          [[7 , 8 , 9],
    //  [4, 5, 6],   --->   [4 , 5 , 6],
    //  [7, 8, 9]]          [1 , 2 , 3]]

    for(int i = 0; i < n/2;i++) {
        for(int j = 0; j < m ; j++) {
            swap(arr[i][j], arr[n-1-i][j]); // Swap elements to flip the array vertically
        }
    }

    // Now flip the array horizontally (reverse each row)
    // [[7 , 8 , 9],          [[9 , 8 , 7],
    //  [4 , 5 , 6],   --->   [6 , 5 , 4],
    //  [1 , 2 , 3]]          [3 , 2 , 1]]

     for(int i = 0; i < n; i++) {
        for(int j = 0; j < m / 2; j++) {
            swap(arr[i][j], arr[i][m - j - 1]); // Swap elements to flip the array horizontally
        }
    }

    // Output the flipped 2D array
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
  

    return 0;
}