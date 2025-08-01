#include<bits/stdc++.h>
using namespace std;

int main(){
    int num;
    cout<<"Enter num:";
    cin>>num;
    int temp = num;
    int rev=0;
    while(num!=0){
        int rem = num%10;
        rev = 10*rev + rem;
        num/=10;
    }
    cout<<"Reverse of this "<< temp<<" number is : "<<rev<<endl;
}