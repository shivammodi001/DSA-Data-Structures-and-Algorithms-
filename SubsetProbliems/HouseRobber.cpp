#include<bits/stdc++.h>
using namespace std;

void rob(vector<int>& nums, int& sum, int index, int total) {
    int n = nums.size();
    if(index >= n) {
        sum = max(sum, total);
        return;
    }

    // Not pick the current house, move to next
    rob(nums, sum, index + 1, total);

    // Pick the current house, move to index + 2
    rob(nums, sum, index + 2, total + nums[index]);
}

int main(){
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int sum= 0;
    int index = 0;
    int total = 0;
    rob(arr, sum ,index, total);
    cout << sum << endl;
    return 0;
}