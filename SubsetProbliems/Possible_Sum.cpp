#include<bits/stdc++.h>
using namespace std;

void Sum_Possible(vector<int>& arr, int sum, int index){
    int n = arr.size();
    if(index==n){
        cout << sum << endl;
        return;
    }
    // Include the current element
    Sum_Possible(arr, sum + arr[index], index + 1);
    // Exclude the current element
    Sum_Possible(arr, sum, index + 1);
}

int main(){
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int sum=0;
    int index = 0;
    Sum_Possible(arr, sum, index);
}