#include <bits/stdc++.h>
using namespace std;

vector<int> makeBeautiful(vector<int> arr)
{
    stack<int> s;
    for (int i = 0; i < arr.size(); i++)
    {
        if (s.empty())
        {
            s.push(arr[i]);
        }
        else
        {
            // check opposite signs
            if ((s.top() >= 0 && arr[i] < 0) || (s.top() < 0 && arr[i] >= 0))
            {
                s.pop(); // remove the opposite pair
            }
            else
            {
                s.push(arr[i]); // push same sign
            }
        }
    }

    vector<int> ans;
    while (!s.empty())
    {
        ans.push_back(s.top());
        s.pop();
    }
    reverse(ans.begin(), ans.end());
    return ans;
}

int main()
{
    vector<int> arr = {4, 2, -2, 1};
    vector<int> result = makeBeautiful(arr);
    for (int x : result)
    {
        cout << x << " ";
    }
    return 0;
}
