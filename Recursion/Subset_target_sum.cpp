#include<bits/stdc++.h>
using namespace std;

bool Subset_sum(vector<int>&arr,int n,int sum,int index,int total){
    if(index == n) {
        return total == sum;
    }
    // not included                                              // included
    return Subset_sum(arr, n, sum, index + 1, total) || Subset_sum(arr, n, sum, index + 1, total + arr[index]);
    
}

int main(){
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int sum;
    cin >> sum;
    int index = 0;
    int total = 0;
    cout<<Subset_sum(arr, n, sum,index, total) << endl;

}