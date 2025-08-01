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

    // row reverse the 2D array
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m / 2; j++) {
            swap(arr[i][j], arr[i][m - j - 1]); // Swap elements to reverse each row
        }
    }

    // Output the elements of the 2D array
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}