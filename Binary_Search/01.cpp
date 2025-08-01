#include<bits/stdc++.h>
using namespace std;


int BinarySearch(vector<int> arr , int target , int n){
    //binary search O(logn)
    int st=0;
    int end = n-1;
    int mid;
    while(st<=end){
        mid = st+(end-st)/2;
        if(arr[mid]==target){
            return mid;
        }else if(arr[mid]>target){
            end = mid - 1;
        }else{
            st = mid+1;
        }
    }
    return -1;
}

int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }

    int target;
    cout<<"Enter target: ";
    cin>>target;
    int res = BinarySearch(arr,target,n);
    if(res!=-1){
        cout<<"Element present "<<res;
    }else{
        cout<<"Not found"<<endl;
    }
    
    
}