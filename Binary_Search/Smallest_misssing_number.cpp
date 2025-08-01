#include<bits/stdc++.h>
using namespace std;

int MissingElement(vector<int>arr,int n){
    // 1st apporach is broote force approach
    // for(int i=0;i<n;i++){
    //     if(arr[i]!=i){
    //         return i;
    //     }
    // }
    // return n;


    // 2nd is using Binary Search
    int st=0,end=n-1;
    int mid;
    int index;
    while(st<=end){
        mid = st+(end-st)/2;

        // if arr[mid] == mid ho mtlb use piche element sab present h 
        // so move right side
        if(arr[mid]==mid){
            st = mid+1;
            index = mid+1; //  for value is not present 
        }

        // agar arr[mid] != mid so toh usko index ko store krke
        // move left side
        else if(arr[mid]!=mid){
            index = mid;
            end = mid-1;
        }
    }
    return index;
}

int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    // in question array is in sorted form 
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }

    int index = MissingElement(arr,n);
    cout<<"Smallest missing element is: "<<index<<endl;


}