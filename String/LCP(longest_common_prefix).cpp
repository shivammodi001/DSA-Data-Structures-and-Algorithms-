#include<bits/stdc++.h>
using namespace std;

string longestCommonPrefix(vector<string> &strs)
{
    int count = 0;       // Kitne characters match hue hain prefix ke roop mein, uska count
    int m = INT_MAX;     // Sabse chhoti string ki length ko store karne ke liye
    int n = strs.size(); // Total kitni strings hain input mein

    // Sabse chhoti string ki length nikal rahe hain
    for (int i = 0; i < n; i++)
    {
        if (m > strs[i].size())
        {
            m = strs[i].size(); // Agar current string chhoti hai, toh m update karo
        }
    }

    // Har position pe character check karenge (jitni smallest string ki length hai)
    for (int i = 0; i < m; i++)
    {
        // Har string ke same position ke character ko compare karo
        for (int j = 1; j < n; j++)
        {
            // Agar kisi bhi string mein character alag mila, toh ab tak ka prefix return kar do
            if (strs[j - 1][i] != strs[j][i])
            {
                if (count)
                {
                    return strs[0].substr(0, count); // ab tak jo match hua uska substring return karo
                }
                else
                {
                    return ""; // Agar ek bhi character match nahi hua, toh empty string return karo
                }
            }
        }
        count++; // Agar sab mein character same hai toh count badha do
    }

    // Loop ke baad bhi agar match hota raha toh prefix return karo
    if (count)
    {
        return strs[0].substr(0, count); // Total match hua prefix return karo
    }
    return ""; // Agar kuch bhi match nahi hua toh empty string return karo
}

int main()
{
    vector<string> strs = {"flower", "flow", "flight"}; // Example input
    cout << longestCommonPrefix(strs) << endl; // Function call karke result print karo
}
