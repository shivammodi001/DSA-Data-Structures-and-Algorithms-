#include<bits/stdc++.h>
using namespace std;

bool isBalanced(string k) {
    stack<char> s;
    for(int i = 0; i < k.length(); i++) {
        //for opening brackets, push onto stack
        if(k[i]=='(' || k[i]=='{' || k[i]=='['){
            s.push(k[i]);
        }
        // for closing brackets, check if stack is empty or if top of stack matches
        else if(k[i]==')' || k[i]=='}' || k[i]==']'){
            // like start with close bracket, return false
            if(s.empty()) return false;
            char top = s.top();
            s.pop();
            if((k[i]==')' && top!='(') || (k[i]=='}' && top!='{') || (k[i]==']' && top!='[')) {
                return false;
            }
        }
    }
    return s.empty(); // If stack is empty, all parentheses are balanced
    
}