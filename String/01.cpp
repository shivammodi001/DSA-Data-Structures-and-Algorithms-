#include <bits/stdc++.h>
using namespace std;

int main() {
    // Input first string
    string str1;
    // cin >> str1;
    getline(cin,str1);

    // for taking input from user with space
    // string str1;
    // getline(cin, str1);
    // cout << str1 <<endl;

    // Length of first string
    int n = str1.length();

    // Input second string
    string str2;
    // cin >> str2;
    getline(cin,str2);

    // Concatenation using '+'
    string str3 = str1 + str2;
    cout << "Concatenation using '+': " << str3 << endl;

    // Concatenation using append()
    str3 = str1.append(str2);
    cout << "Concatenation using append(): " << str3 << endl;

    // Push back a character
    str1.push_back('a');

    // Insert a character at the end
    str1.insert(str1.size(), "a");  // Use string "a" instead of char 'a'

    // Pop back the last character
    str1.pop_back();

    // Sort the string
    sort(str1.begin(), str1.end());

    // Reverse the string
    reverse(str1.begin(), str1.end());

    // Output final state of str1
    cout << "Final str1 after push, insert, sort, and reverse: " << str1 << endl;

    return 0;
}
