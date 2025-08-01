#include<bits/stdc++.h>
using namespace std;

int main(){
    int num;
    cout<<"Enter num:";
    cin>>num;
    vector<int>v;
    while (num!=0)
    {
        /* code */
        int Xor = (num%10) ^ 1;
        v.push_back(Xor);
        num/=10;

    }
    for(int i=v.size()-1;i>=0;i--){
        cout<<v[i]<<" ";
    }
    

}