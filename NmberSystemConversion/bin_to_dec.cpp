#include<bits/stdc++.h>
using namespace std;

int main(){
    int num;
    cout<<"Enter num:";
    cin>>num;
    int dec=0;
    int i=0;
    while(num!=0){
        int rem = num%10;
       dec += rem * pow(2,i);
       i++;
        num/=10;
    }
   cout<<dec<<endl;

}