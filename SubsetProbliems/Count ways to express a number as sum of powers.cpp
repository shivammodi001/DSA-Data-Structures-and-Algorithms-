// Count ways to express a number as sum of powers
// Example 1:

// Input: x = 10, n = 2
// Output: 1
// Explanation: We can express n as the following: x = 32 + 12 = 10.
// It can be shown that it is the only way to express 10 as the sum of the 2nd power of unique integers.
// Example 2:

// Input: x = 4, n = 1
// Output: 2
// Explanation: We can express n in the following ways:
// - x = 41 = 4.
// - x = 31 + 11 = 4.

#include <bits/stdc++.h>
using namespace std;

int countWaysUtil(int x, int n, int num)
{
    // Base cases
    int val = (x - pow(num, n));
    if (val == 0)
        return 1;
    if (val < 0)
        return 0;

    // Consider two possibilities, num is
                                                // included and num is not included.
    return countWaysUtil(val, n, num + 1) + countWaysUtil(x, n, num + 1);
}
int countWays(int x, int n)
{
    return countWaysUtil(x, n, 1);
}
int main()
{
    int x = 100, n = 2;
    cout << countWays(x, n);
    return 0;
}