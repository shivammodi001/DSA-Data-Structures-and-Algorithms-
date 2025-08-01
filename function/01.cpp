#include<bits/stdc++.h>
using namespace std;

int  isEvenOdd(int num){
    if(num%2==0){
        return 1;
    }
    return 0;
}

int Fibo(int num){
    if(num<=1){
        return num;
    }
    return Fibo(num-1) + Fibo(num-2);
}

int main(){
    int num;
    cout<<"Enter num:";
    cin>>num;
    
    if(isEvenOdd(Fibo(num))){
        cout<<"this number's fibo is even "<<Fibo(num)<<endl;
    }else{
        cout<<"This is odd fibo "<<Fibo(num)<<endl;
    }
}