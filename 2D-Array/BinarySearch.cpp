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
    for(int i = 0; i< row;i++){
        int st = 0, end =col-1;
        int mid;
        while(st <= end){
            mid = (st + end) / 2; // Calculate the middle index
            if(arr[i][mid] == target){ // Check if the target is found
                cout << "Element found at (" << i << ", " << mid << ")" << endl;
                found = true;
                break; // Exit the loop if the element is found
            }
            else if(arr[i][mid] < target){ // If target is greater, search in the right half
                st = mid + 1;
            }
            else{ // If target is smaller, search in the left half
                end = mid - 1;
            }
        }

    }

    return 0;
}