#include <bits/stdc++.h>
using namespace std;

// Ye function find karega minimum max pages jo students ko allocate karni hongi
// taki sabhi pages k students me equally aur minimum maximum pages ke sath divide ho jaye
int findPages(vector<int> &arr, int k)
{
    int n = arr.size();

    int end = 0;         // Total pages ka sum store karenge yahan
    int start = INT_MIN; // Sabse bada page count jo kisi ek book me hai, wo start point hoga

    // Loop chalakar total pages ka sum aur max pages nikal rahe hain
    for (int i = 0; i < n; i++)
    {
        end += arr[i];               // Har book ke pages add karte jao total me
        start = max(start, arr[i]);  // Jo sabse bada page count hai, usko track karo
    }

    int ans = -1; // Final answer store karne ke liye

    // Binary search start aur end ke beech
    while (start <= end)
    {
        int mid = start + (end - start) / 2; // Mid ko consider karenge as max pages per student

        int sum = 0;   // Current student ko allocate kiye gaye pages ka sum
        int count = 1; // Students count, kam se kam ek student hoga

        // Check karte hain ki mid ke according kitne students chahiye
        for (int i = 0; i < n; i++)
        {
            sum += arr[i]; // Current book ke pages add karo current student ke sum me

            // Agar sum mid se bada ho jaye matlab current student ko zyada pages mil rahe hain
            if (sum > mid)
            {
                sum = arr[i]; // Next student ke liye sum reset karo current book ke pages se
                count++;      // Student count badhao
            }
        }

        // Agar students ki count k se kam ya barabar hai, iska matlab mid feasible hai
        if (count <= k)
        {
            ans = mid;      // Answer update karo
            end = mid - 1;  // Try karo aur chhota max pages find karne ke liye
        }
        else
        {
            // Agar zyada students lag rahe hain toh mid bahut chhota hai,
            // isliye start badhao taaki zyada pages ek student ko allocate ho
            start = mid + 1;
        }
    }

    return ans; // Minimum maximum pages return karo
}

int main()
{
    int n;
    cout << "Enter size of array: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter elements of array: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i]; // Pages enter karo har book ke liye
    }

    int k;
    cout << "Enter number of students: ";
    cin >> k; // Kitne students me pages batne hain

    int result = findPages(arr, k); // Function call karke result lo
    cout << "Minimum number of pages allocated: " << result << endl;

    return 0;
}
