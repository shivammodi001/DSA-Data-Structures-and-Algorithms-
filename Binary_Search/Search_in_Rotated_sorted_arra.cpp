#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int search(vector<int>& arr, int key) {
        int n = arr.size();
        int low = 0, high = n - 1;
        while(low <= high) {
            int mid = (low + high) / 2;
            if(arr[mid] == key)
                return mid;
            
            // Left part is sorted
            if(arr[low] <= arr[mid]) {
                if(arr[low] <= key && key < arr[mid]) {
                    high = mid - 1;
                } else {
                    low = mid + 1;
                }
            }
            // Right part is sorted
            else {
                if(arr[mid] < key && key <= arr[high]) {
                    low = mid + 1;
                } else {
                    high = mid - 1;
                }
            }
        }
        return -1;
    }
};

int main(){
    int n;
    cout<<"Enter size of array: ";
    cin>>n;
    int arr[n];
    cout<<" Enter elements of array: "; 
    for(int i=0;i<n; i++)
    {
        cin>> arr[i];
    }

    int key;
    cout<<" Enter element to be searched: ";
    cin>> key;

    int result = search(arr, key,n);
    if(result != -1)
    cout<<" Element is present at index "<< result;
    else
    cout<<" Element is not present in array";
    return 0;
 

    
}