#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int max_ele = *max_element(arr.begin(),arr.end());
    cout<<"max: "<<max_ele<<endl;

    vector<int>fre(max_ele , 0);


     for(int i=0;i<n;i++){
        fre[arr[i]]++;
    }

    for(int i=1;i<n;i++){
        if(fre[i]==0){
            cout<<"Missing element: "<<i<<endl;
            return 0;
        }
    }
    cout<<n+1;
    return 0;

}