#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    // method 1 using frequency vector

    // int max = *max_element(arr.begin(),arr.end()); 

    // vector<int>fre(max,0);

    // for (int i = 0; i < n; i++)
    // {
    //     fre[arr[i]]++;
    // }

    // for(int i=0;i<fre.size();i++){
    //     if(fre[i]==1){
    //         cout<<"element is: "<<i<<endl;
    //         return 0;
    //     }
    // }

    // method 2: Using xor
    int ans = 1;
    for(int i=0;i<n;i++){
        ans ^= arr[i];
    }

    cout<<"element is: "<<ans<<endl;
    
    return 0;

}