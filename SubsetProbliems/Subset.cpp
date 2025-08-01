#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> subsets(vector<int> &nums)
{
    vector<vector<int>> res;
    vector<int> subset;

    createSubset(nums, 0, res, subset);
    return res;
}

void createSubset(vector<int> &nums, int index, vector<vector<int>> &res, vector<int> &subset)
{
    if (index == nums.size())
    {
        res.push_back(subset);
        return;
    }

    // Include the current element
    subset.push_back(nums[index]);
    createSubset(nums, index + 1, res, subset);

    // Exclude the current element
    subset.pop_back();
    createSubset(nums, index + 1, res, subset);
}
