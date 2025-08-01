#include<bits/stdc++.h>
using namespace std;


int MountainIndex(vector<int> arr ,int n){

    int st=0;
    int end = n-1;
    int mid;
    while(st<=end){
        mid = end+(st-end)/2;
        if(arr[mid]>arr[mid+1] && arr[mid] > arr[mid-1]){
            return mid;
        }else if(arr[mid] > arr[mid-1]){
            st = mid+1;
        }else{
            end = mid - 1;
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

    
    int res = MountainIndex(arr,n);
    if(res!=-1){
        cout<<"index: "<<res;
    }else{
        cout<<"Not found"<<endl;
    }
    
    
}