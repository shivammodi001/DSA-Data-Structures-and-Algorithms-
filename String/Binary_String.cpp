// gfg problem
// Given a binary string S. The task is to count the number of substrings that start and end with 1. For example, if the input string is “00100101”, then there are three substrings “1001”, “100101” and “101”.

// Example 1:

// Input:
// N = 4
// S = 1111
// Output: 6
// Explanation: There are 6 substrings from
// the given string. They are 11, 11, 11,
// 111, 111, 1111.

// count of 1 is 4
// 4C2 = 6 ans is 6

//  Approach is that count all 1's present in the string
// than for the substrnig we only need 2 times 1's
// like we can do nc2 = n*(n-1)/2 where n is the count of 1's in the string

#include <bits/stdc++.h>
using namespace std;
// Function to count the number of substrings that start and end with 1.
long binarySubstring(int n, string a)
{

    // Your code here
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] == '1')
        {
            count++;
        }
    }
    long ans = (long)count * (count - 1) / 2;
    return ans;
}

int main()
{
    int n = 4;
    string a = "1111";

    cout << binarySubstring(n, a) << endl; // Output: 6

    return 0;
}
