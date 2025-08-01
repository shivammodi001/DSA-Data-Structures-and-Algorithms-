// Left most and right most index
// gfg

#include <bits/stdc++.h>
using namespace std;

int LeftMostIndex(vector<long long> arr, long long target)
{
    // binary search O(logn)
    int n = arr.size();
    int st = 0;
    int end = n - 1;
    int mid;
    // left most index
    int left = -1;
    while (st <= end)
    {
        mid = st + (end - st) / 2;
        if (arr[mid] == target)
        {
            left = mid; // element is present so store index and move futher in 
            end = mid - 1; // left side
        }
        else if (arr[mid] > target)
        {
            end = mid - 1;
        }
        else
        {
            st = mid + 1;
        }
    }
    return left;
}
int RightMostIndex(vector<long long> arr, long long target)
{
    // binary search O(logn)
    int n = arr.size();
    int st = 0;
    int end = n - 1;
    int mid;
    // right most index
    int right = -1;
    while (st <= end)
    {
        mid = st + (end - st) / 2;
        if (arr[mid] == target)
        {
            right = mid; // if element found phir right most ke right me jao
            st = mid + 1;
        }
        else if (arr[mid] > target)
        {
            end = mid - 1;
        }
        else
        {
            st = mid + 1;
        }
    }
    return right;
}

pair<long, long> indexes(vector<long long> v, long long x)
{
    // code here
    long left = LeftMostIndex(v,x);
    long right = RightMostIndex(v,x);

    return {left,right};
}

int main()
{
    int n;
    cin >> n;
    vector<long long> arr(n); // Use long long to match function signatures
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    long long target;
    cout << "Enter target: ";
    cin >> target;

    pair<long, long> res = indexes(arr, target);
    if (res.first != -1)
    {
        cout << "Leftmost Index: " << res.first << "\n";
        cout << "Rightmost Index: " << res.second << "\n";
    }
    else
    {
        cout << "Element not found\n";
    }

    return 0;
}