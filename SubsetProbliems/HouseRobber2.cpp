#include <bits/stdc++.h>
using namespace std;

void robbery(vector<int>& nums, int& sum, int index, int total) {
    int n = nums.size();
    if(index >= n) {
        sum = max(sum, total);
        return;
    }

    // Not pick the current house
    robbery(nums, sum, index + 1, total);

    // Pick the current house
    robbery(nums, sum, index + 2, total + nums[index]);
}

int rob(vector<int>& nums) {
    int n = nums.size();
    if(n == 0) return 0;
    if(n == 1) return nums[0];
    if(n == 2) return max(nums[0], nums[1]);

    int sum1 = 0, sum2 = 0;

    // Rob houses from 0 to n-2
    vector<int> temp1(nums.begin(), nums.end() - 1);
    robbery(temp1, sum1, 0, 0);

    // Rob houses from 1 to n-1
    vector<int> temp2(nums.begin() + 1, nums.end());
    robbery(temp2, sum2, 0, 0);

    return max(sum1, sum2);
}

int main() {
    int n;
    cin >> n;
    vector<int> houses(n);
    for(int i = 0; i < n; ++i) {
        cin >> houses[i];
    }

    cout << rob(houses) << endl;

    return 0;
}
