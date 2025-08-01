#include<bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> findUnion(vector<int> &a, vector<int> &b)
    {

        int i = 0, j = 0;
        int n = a.size(), m = b.size();
        vector<int> ans;

        while (i < n && j < m)
        {
            if (a[i] < b[j])
            {
                if (ans.empty() || ans.back() != a[i]) // checking duplicates
                    ans.push_back(a[i]);
                i++;
            }
            else if (a[i] > b[j])
            {
                if (ans.empty() || ans.back() != b[j])
                    ans.push_back(b[j]);
                j++;
            }
            else
            {
                if (ans.empty() || ans.back() != a[i])
                    ans.push_back(a[i]);
                i++;
                j++;
            }
        }

        while (i < n)
        {
            if (ans.empty() || ans.back() != a[i])
                ans.push_back(a[i]);
            i++;
        }

        while (j < m)
        {
            if (ans.empty() || ans.back() != b[j])
                ans.push_back(b[j]);
            j++;
        }

        return ans;
    }
    int main()
    {
        vector<int> a = {1, 1, 2, 2, 2, 4};
        vector<int> b = {2, 2, 4, 4};

        vector<int> res = findUnion(a, b);

        for (int i = 0; i < res.size(); i++)
            cout << res[i] << " ";

        return 0;
    }
};