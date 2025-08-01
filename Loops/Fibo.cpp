#include <bits/stdc++.h>
using namespace std;

int main(){
    int num;
    cout<<"Enter num: ";
    cin>>num;
    if(num<=1){
        cout<<num;
        return 0;
    }
    int a=0 , b=1;
    cout<<a<<" "<<b<<" ";
    int c;
    for(int i=2;i<=num;i++){
        c=a+b;
        a=b;
        b=c; 
        cout<<c<<" ";
    }
    return 0;
}