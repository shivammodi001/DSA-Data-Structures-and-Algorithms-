// Example -> str = "abcd"
// Output -> [a , b , c , d , ab , bc , cd , abc , bcd , abcd]

// powerSet like that

#include<bits/stdc++.h>
using namespace std;

// Method 1 using for loop
// void Possible_subSet(string &s){
//     int n = s.length();
//     for(int i=0;i<n;i++){
//         for(int j=i;j<n;j++){
//             cout<< s.substr(i,j-i+1)<< endl;
//         }
//     }
// }

// Method 2 using recursion
void Possible_subSet(string &s, int i , string temp) {
    if(temp.length())
        cout << temp << endl;

    if(i == s.length())
        return;

    if(temp.length() == 0)
        Possible_subSet(s, i+1, temp); // skip only once at beginning

    Possible_subSet(s, i+1, temp + s[i]); // always include next character
}


int main() {
    string str = "abcd";
    int n = str.size();
    // Possible_subSet(str);
    Possible_subSet(str,0,"");
}
