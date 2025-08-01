#include<bits/stdc++.h>
using namespace std;

// array sum using recursion
int arraySum(const vector<int>& arr, int n) {
    if (n == 0) return 0;
    return arr[n - 1] + arraySum(arr, n - 1);
}

// Linear Search using recursion
int linearSearch(const vector<int>&arr,int n,int target){
    if(n == 0) return -1;
     if(arr[n-1] == target) return n - 1; // Found the target
    return linearSearch(arr, n - 1, target); // Search in the rest of the array
}

// Binary Search using recursion
int BinarySearch(vector<int>& arr,int left , int right,int target){
    int mid;
    while(left<=right){
        mid = left + (right-left)/2;
        if(arr[mid] == target){
            return mid; // Found the target
        }else if(arr[mid] < target){
            return BinarySearch(arr, mid + 1, right, target); // Search in the right half
        }else{
            return BinarySearch(arr, left, mid - 1, target);  // Search in the left half
        }
    }
    return -1; // Target not found
}

int main(){
    int n;
    cout << "Enter the number of elements in the array: ";
    cin >> n;
    vector<int> arr(n);
    cout << "Enter the elements of the array: ";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int sum = arraySum(arr, n);
    cout << "Sum of the array elements: " << sum << endl;

    int target;
    cout << "Enter the target element to search: ";
    cin >> target;

    // Linear Search
    cout << "Performing Linear Search..." << endl;
    int index = linearSearch(arr, n, target);
    if (index != -1) {
        cout << "Element found at index: " << index << endl;
    } else {
        cout << "Element not found in the array." << endl;
    }

    // Binary Search
    sort(arr.begin(), arr.end()); // Ensure the array is sorted for binary search
    cout << "Performing Binary Search..." << endl;
    index = BinarySearch(arr, 0, n - 1, target);
    if (index != -1) {
        cout << "Element found at index: " << index << endl;
    } else {
        cout << "Element not found in the array." << endl;
    }

    return 0;
}