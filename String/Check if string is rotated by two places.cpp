
#include <bits/stdc++.h>
using namespace std;

// method 1

// string antiClockwise(string s)
// {
//     int n = s.length();
//     return s.substr(2) + s.substr(0, 2); // Remove first 2 chars and append them to end
// }

// // Rotate clockwise by 2 positions
// string clockwise(string s)
// {
//     int n = s.length();
//     return s.substr(n - 2) + s.substr(0, n - 2); // Take last 2 chars and bring them to front
// }

// bool isRotated(string &s1, string &s2)
// {
//     if (s1.length() != s2.length())
//     {
//         return false;
//     }

//     // If strings have only 2 or fewer characters, any rotation gives same string
//     if (s1.length() <= 2)
//         return s1 == s2;

//     // Check if s2 is s1 rotated clockwise or anticlockwise by 2 positions
//     if (clockwise(s1) == s2 || antiClockwise(s1) == s2)
//     {
//         return true;
//     }

//     return false;
// }



// ------------------------------------------------------------------------------------------
// method using LPS (Longest Proper Prefix which is also a Suffix)
// amazon + $ + azonam
//   string temp = s1  + "$" + s2
// now find lps of this string
// and at answer is --->> (s1.length() - lps[ temp.size() -1] ) == 2 --> 2 is rotated by 2
bool isRotated(string s1, string s2)
{
   if (s1.length() != s2.length())
   {
      return false;
   }

   if(s1.length() <= 2)
      return s1 == s2;

    string temp = s1 + "$" + s2;
    vector<int> lps(temp.length(), 0);
    int len = 0;
    int i = 1;
    while(i<temp.length()){
        if(temp[i] == temp[len]){
            len++;
            lps[i] = len;
            i++;
        }
        else{
            if(len != 0){
                len = lps[len - 1];
            }
            else{
                lps[i] = 0;
                i++;
            }
        }
    }

    return (s1.length() - lps[temp.length() - 1]) == 2; // Check if the last value in lps is equal to 2

}



int main()
{
    string s1 = "abcde";
    string s2 = "cdeab";
    cout << (isRotated(s1, s2) ? "Yes" : "No") << endl;
}
