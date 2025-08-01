#include <bits/stdc++.h>
using namespace std;

// using dp
int climbStairs(int n)
{
    if (n < 0)
    {
        return 0;
    }
    if (n == 0)
    {
        return 1;
    }
    if (n == 1)
    {
        return 1;
    }
    if (n == 2)
    {
        return 2;
    }
    if (n == 3)
    {
        return 3;
    }

    vector<int> ans(n + 1);
    ans[0] = 1;
    ans[1] = 1;
    ans[2] = 2;
    ans[3] = 3;
    for (int i = 4; i <= n; i++)
    {
        ans[i] = ans[i - 1] + ans[i - 2];
    }
    return ans[n];
}

// using recursion to find the number of ways to climb n stairs
int climbingStairs(int n)
{
    if (n == 0)
        return 1; // Base case: 1 way to climb 0 stairs (do nothing)
    if (n == 1)
        return 1; // Base case: 1 way to climb 1 stair (single step)
    if (n == 2)
        return 2; // Base case: 2 ways to climb 2 stairs (1+1 or 2)
    if (n == 3)
        return 3;                                         // Base case: 3 ways to climb 3 stairs (1+1+1, 1+2, or 2+1)
    return climbingStairs(n - 1) + climbingStairs(n - 2); // Recursive case: sum of ways to climb n-1 and n-2 stairs
}

int main()
{
    int n;
    cout << "Enter the number of stairs: ";
    cin >> n;
    cout << "Number of ways to climb " << n << " stairs: " << climbingStairs(n) << endl;
    return 0;
}