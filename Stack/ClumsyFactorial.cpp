#include<bits/stdc++.h>
using namespace std;

int clumsyFactorial(int n){
    stack<int> s;
    s.push(n);
    n--;
    int i=0;
    // i=0 means multiply, 1 means divide, 2 means add, 3 means subtract 
    // 1st priority is multiply, then divide, then add, then subtract
    // phale multiply or divide karke hi last mein add or subtract karna hai
    while(n){
        // for *
        if(i==0){
            int num = s.top();
            s.pop();
            num *= n;
            s.push(num);
        }else if(i==1){
            // for divide /
            int num = s.top();
            s.pop();
            num /= n;
            s.push(num);
        }else if(i==2){
            // for +
            s.push(n);
        }else{
            // for -
            s.push(-n);
        }
        i = (i + 1) % 4;
        n--;
    }

    // now we have to add all the elements in the stack
    //kyuki multiply or divide karke hi add or subtract karna hai
    int result = 0;
    while(!s.empty()){
        result += s.top();
        s.pop();
    }
    return result;
}
int main(){
    int n;
    cin >> n;
    cout << clumsyFactorial(n) << endl;
    return 0;
}
