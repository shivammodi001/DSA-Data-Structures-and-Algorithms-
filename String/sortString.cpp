#include<bits/stdc++.h>
using namespace std;

int main(){
    // need to sort O(N) time complexity
    string s;
    getline(cin,s);

    // creating a char freqay for storing the frequency of each character
    vector<int> freq(26,0);
    for (int i = 0; i< s.length(); i++) {
        freq[s[i]-'a']++;
    }

    // sorting the freqay 
    for (int i = 0; i< 26; i++) {
        char ch = 'a'+i;
        while(freq[i]--){
            cout<< ch<<" ";
        }
    }
}