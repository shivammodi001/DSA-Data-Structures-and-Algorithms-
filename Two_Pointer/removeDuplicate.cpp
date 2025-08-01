#include<bits/stdc++.h>
using namespace std;

int remove_duplicate(vector<int>&arr,int n){
    int index = 0;
    int number=0;
    for(int i=0;i<n;i++){
        if(number != arr[i]){
            arr[index] = arr[i];
            index++;
            number = arr[i];
        }
    }
    return index;
}

int main(){
    int n;
    cout<<"enter the number of elements in the array";
    cin>>n;
    vector<int>arr(n);
    //array already sorted in increasing order
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int index = remove_duplicate(arr,n);
    for(int i=0;i<index;i++){
        cout<< arr[i]<<" ";
    }
    return 0;
    

}