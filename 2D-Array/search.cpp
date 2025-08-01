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

    int target;
    cin >> target; // Input the target element to search for
    bool found = false;
    // Search for the target element in the 2D array


    for(int i = 0; i < row; i++) {
        for(int j = 0; j < col; j++) {
            if(target==arr[i][j]){
                cout << "Element found at (" << i << ", " << j << ")" << endl;
                found = true;
                break; // Exit the inner loop if the element is found               
            }
        }
        cout << endl;
    }
    if(!found) {
        cout << "Element not found in the array." << endl; // If the element is not found
    }
    return 0;
}