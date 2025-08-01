// A frog jumps either 1, 2, or 3 steps to go to the top. In how many ways can it reach the top of nth step.

// Examples:

// Input: n = 4
// Output: 7
// Explanation: Below are the 7 ways to reach 4th step:
// 1 step + 1 step + 1 step + 1 step
// 1 step + 2 step + 1 step
// 2 step + 1 step + 1 step
// 1 step + 1 step + 2 step
// 2 step + 2 step
// 3 step + 1 step
// 1 step + 3 step

#include<bits/stdc++.h>
using namespace std;

int countWays(int n){
    if(n==1) return 1; // Only one way to reach the first step
    if(n==2) return 2; // Two ways to reach the second step (1+1 or 2)
    if(n==3) return 4; // Four ways to reach the third step (1+1+1, 1+2, 2+1, 3)

    return countWays(n-1) + countWays(n-2) + countWays(n-3);
}

int main(){
    int n;
    cout << "Enter the number of steps: ";
    cin >> n;
    cout << "Number of ways to reach the top: " << countWays(n) << endl;
    return 0;
}