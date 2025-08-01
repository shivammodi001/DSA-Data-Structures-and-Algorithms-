// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main() {
    // char ch;
    // cin>>ch;
    // if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u' || ch=='A' || ch=='E' || ch=='I'|| ch=='O' || ch=='U'){
    //     cout<<"Vowels"<<endl;
    // }else{
    //     cout<<"Consonent"<<endl;
    // }
    int num;
    cout<<"enter num: ";
    cin>>num;
    if(num%3==0 && num%5==0){
        cout<<"divisible by 3 and 5";
    }else{
        cout<<"failed"<<endl;
    }

    return 0;
}