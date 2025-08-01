#include<bits/stdc++.h>
using namespace std;

int main(){
    int num;
    cout<<"Enter num:";
    cin>>num;
    vector<int>v;
    while(num!=0){
        int rem = num%2;
        v.push_back(rem);
        num/=2;
    }
    reverse(v.begin(),v.end());
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }

}


// use bitset<32> b(num)

#include <bitset>
#include <iostream>

int main() {
    std::bitset<8> b(13); // binary representation of 13 in 8 bits: 00001101

    std::cout << b << std::endl; // prints: 00001101

    std::cout << "Number of 1 bits: " << b.count() << std::endl; // prints: 3

    // Access individual bits
    for (int i = 0; i < 8; i++) {
        std::cout << "Bit " << i << ": " << b[i] << std::endl;
    }

    return 0;
}
