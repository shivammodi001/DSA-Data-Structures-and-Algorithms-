#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int num = arr[n-1];
    for(int i=n-1;i>=0;i--){
        arr[i] = arr[i-1];
    }
    arr[0] = num;


    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    
    return 0;

}