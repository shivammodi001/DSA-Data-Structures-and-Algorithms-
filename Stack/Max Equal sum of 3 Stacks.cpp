#include <bits/stdc++.h>
using namespace std;
// Input:
// N1 = 3, N2 = 4, N3 = 2
// S1 = {4,2,3}
// S2 = {1,1,2,3}
// S3 = {1,4}
// Output:
// 5
// Explanation:
// We can pop 1 element from the 1st stack, and 2
// elements from the 2nd stack. Now remaining elements
// yield the equal sum of the three stacks, that is 5.

int maxEqualSum(int N1, int N2, int N3, vector<int> &S1, vector<int> &S2,
                vector<int> &S3)
{
    int sum1 = 0;
    int sum2 = 0;
    int sum3 = 0;
    for (int i = 0; i < N1; i++)
    {
        sum1 += S1[i];
    }
    for (int i = 0; i < N2; i++)
    {
        sum2 += S2[i];
    }
    for (int i = 0; i < N3; i++)
    {
        sum3 += S3[i];
    }
    int i = 0;
    int j = 0;
    int k = 0;
    while (true)
    {
        if (i == N1 && j == N2 && N3 == N3)
        {
            return 0;
        }
        if (sum1 == sum2 && sum2 == sum3)
        {
            return sum1;
        }

        if (sum1 >= sum2 && sum1 >= sum3)
        {
            sum1 -= S1[i++];
        }
        else if (sum2 >= sum1 && sum2 >= sum3)
        {
            sum2 -= S2[j++];
        }
        else
        {
            sum3 -= S3[k++];
        }
    }
}
