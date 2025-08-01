#include<bits/stdc++.h>
using namespace std;

int main(){
    int num;
    cout<<"Enter num:";
    cin>>num;

    int count=0;
    while(num!=0){
        // int rem = num%10;
        count++;
        num/=10;
    }
    cout<<"Total number of digits in this number is : "<<count<<endl;
}