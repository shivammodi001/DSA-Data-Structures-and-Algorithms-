// Example 1:

// Input: candidates = [2,3,6,7], target = 7
// Output: [[2,2,3],[7]]
// Explanation:
// 2 and 3 are candidates, and 2 + 2 + 3 = 7. Note that 2 can be used multiple times.
// 7 is a candidate, and 7 = 7.
// These are the only two combinations.

#include <bits/stdc++.h>
using namespace std;

void FindCombSum(vector<int> &candidates, int target, int index, vector<int> &currentCombination, vector<vector<int>> &result, int currentSum)
{
   if(currentSum > target) {
        return; // If current sum exceeds target, no need to proceed
    }
    if(currentSum == target) {
        result.push_back(currentCombination); // Found a valid combination
        return;
    }
    if(index >= candidates.size()) {
        return; // If index exceeds candidates size, no more elements to consider
    }
    // selected the element
    currentCombination.push_back(candidates[index]);
    FindCombSum(candidates,target,index,currentCombination,result,currentSum + candidates[index]);
    // not selected the element
    currentCombination.pop_back();
    FindCombSum(candidates, target, index + 1, currentCombination, result, currentSum);
}

vector<vector<int>> combinationSum(vector<int> &candidates, int target)
{
    vector<vector<int>> result;
    vector<int> currentCombination;
    int index = 0;
    int curr_sum = 0;
    FindCombSum(candidates, target, index, currentCombination, result, curr_sum);
    return result;
}
int main(){
    vector<int> candidates = {2, 3, 6, 7};
    int target = 7; 
    vector<vector<int>> result = combinationSum(candidates, target);
}