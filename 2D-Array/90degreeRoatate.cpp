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
    // for 90 degree rotation

    // 1 st transpose the matrix than reverse each row

    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<m;j++){
            swap(arr[i][j], arr[j][i]); // Swap elements to transpose the matrix
        }
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<m/2;j++){
            swap(arr[i][j],arr[i][m-1-j]); // Reverse each row to achieve 90 degree rotation
        }
    }

    // Output the rotated 2D array
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}