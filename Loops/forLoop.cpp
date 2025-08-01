#include<bits/stdc++.h>
using namespace std;


/// code for prime number
int prime(int x){
    if(x==0 || x==1) return 0;
    for(int i=2;i<x;i++){
        if(x%i==0){
            return 0;
        }
    }
    return 1;
}

int main(){
    int n;
    cout<<"Enter num: ";
    cin>>n;
    if(prime(n)){
        cout<<n<<" is a prime number."<<endl;
    }else{
        cout<<n<<" is not a prime number."<<endl;
    }

}