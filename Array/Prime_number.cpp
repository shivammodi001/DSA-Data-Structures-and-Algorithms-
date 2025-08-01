#include<bits/stdc++.h>
using namespace std;

int isPrime(int x){
    if(x==0 || x==1){
        return 0;
    }
    for(int i=2;i<x;i++){
        if(x%i==0){
            return 0;
        }
    }
    return 1;
}

int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    vector<int>ans;


     for(int i=0;i<n;i++){
        if(isPrime(arr[i])){
            ans.push_back(arr[i]);
        }
    }

    cout<<"Prime Element present in the array is: ";
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
    
    return 0;

}