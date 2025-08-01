#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    // n=5
    // arr = [1 2 3 4 5]
    // 1 2 3 4 5
    // 1 2 3 4
    // 1 2 3
    // 1 2
    // 1
    int x = n;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < x; j++)
        {
            cout << arr[j] << " ";
        }
        x--;
        cout << endl;
    }

    // n = 5
    // arr = [1 2 3 4 5]
    // 1 2 3 4 5
    // 2 3 4 5
    // 3 4 5
    // 4 5
    // 5

    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            cout << arr[j] << " ";
        }
        cout << endl;
    }

    // n = 5 reverse order patter
    // arr = [5 4 3 2 1]
    // 1 2 3 4 5
    // 2 3 4 5
    // 3 4 5
    // 4 5
    // 5

    for (int i = 0; i < n; i++)
    {
        for (int j = x - 1; j >= 0; j--)
        {
            cout << arr[j] << " ";
        }
        x--;
        cout << endl;
    }
    return 0;
}
