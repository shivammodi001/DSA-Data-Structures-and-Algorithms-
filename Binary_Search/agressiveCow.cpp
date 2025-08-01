// User function Template for C++
#include <bits/stdc++.h>
using namespace std;

int aggressiveCows(vector<int> &arr, int k)
{

    // Total stalls ka size
    int n = arr.size();

    // Step 1: Stall positions ko sort kar lo
    sort(arr.begin(), arr.end());

    // Step 2: Binary Search ke liye initial range set karo
    int st = 1;                    // Minimum possible distance
    int end = arr[n - 1] - arr[0]; // Maximum possible distance
    int ans, mid;

    // Binary Search on distance
    while (st <= end)
    {
        mid = st + (end - st) / 2; // Mid distance try kar rahe hain

        int count = 1;        // Pehli cow ko arr[0] pe rakh diya
        int lastPos = arr[0]; // Last placed cow ki position

        // Check karo kitni cows rakh sakte ho is distance par
        for (int i = 1; i < n; i++)
        {
            if (arr[i] - lastPos >= mid)
            {
                count++;
                lastPos = arr[i];
            }
        }

        if (count >= k)
        {
            // Agar k ya usse zyada cows rakh pa rahe hain, to distance badhao
            ans = mid;
            st = mid + 1;
        }
        else
        {
            // Nahi rakh pa rahe, to distance kam karo
            end = mid - 1;
        }
    }

    // Final answer return karo
    return ans;
}
