#include <bits/stdc++.h>
using namespace std;

// Function to find the nearest smaller element on the left for each element
vector<int> leftSmaller(vector<int> arr)
{
    stack<int> s; // Stack to store indices of elements
    int n = arr.size();
    vector<int> ans(n, -1); // Initialize answer array with -1

    // Traverse from right to left
    for (int i = n - 1; i >= 0; i--)
    {
        // If stack is empty, just push the current index
        if (s.size() == 0)
        {
            s.push(i);
        }
        else
        {
            // If current element is greater than or equal to element at s.top(),
            // it cannot be the left smaller for any previous elements, so just push
            if (arr[s.top()] <= arr[i])
            {
                s.push(i);
            }
            else
            {
                // While stack is not empty and current element is smaller than
                // the element at s.top(), it's the left smaller for all those elements
                while (s.size() && arr[s.top()] > arr[i])
                {
                    ans[s.top()] = arr[i]; // Set current element as left smaller
                    s.pop(); // Remove the index from the stack
                }
                // Push the current index after processing
                s.push(i);
            }
        }
    }
    return ans; // Return the result
}
