#include<bits/stdc++.h>
using namespace std;

vector<int> findDiagonalOrder(vector<vector<int>>& mat) {
    int n = mat.size();           // Total number of rows
    int m = mat[0].size();        // Total number of columns

    int row = 0, col = 0;         // Starting position
    vector<int> ans;              // Result vector to store the diagonal order
    bool up = true;               // Direction flag: true for upward-right, false for downward-left

    while (row < n && col < m) {
        ans.push_back(mat[row][col]);  // Add the current element to the result

        if (up == true) {  // Moving upward-right
            while (row > 0 && col < m - 1) {
                row--; col++;           // Move up and right
                ans.push_back(mat[row][col]);  // Add current element to result
            }
            if (col == m - 1) {  // If we hit the last column, move down to start next diagonal
                row++;
            } else {             // Otherwise, move right to start next diagonal
                col++;
            }
        } else {  // Moving downward-left
            while (col > 0 && row < n - 1) {
                row++; col--;           // Move down and left
                ans.push_back(mat[row][col]);  // Add current element to result
            }
            if (row == n - 1) {  // If we hit the last row, move right to start next diagonal
                col++;
            } else {             // Otherwise, move down to start next diagonal
                row++;
            }
        }
        up = !up;  // Toggle the direction
    }

    return ans;  // Return the diagonal order traversal
}


int main(){
    int n,m;
    cin>>n>>m;
    int a[n][m];
    // input array elements
    for(int i=0;i<n; i++)
    for(int j=0;j<m ; j++)
    cin>> a[i][j];

    // print element diagonally from top left to bottom right
    
}