#include<bits/stdc++.h>
using namespace std;

void BirthdayWish(int day){
    if(day==0){
        cout<<"Happy Birthday!"<<endl;
        return;
    }
    cout << "Only " << day << " days left until your birthday!" << endl;
    // Recursive call with day decreased by 1
    return BirthdayWish(day-1);
}

int main(){
    int day;
    cout << "Enter the number of days until your birthday: ";
    cin >> day;
    BirthdayWish(day);
    return 0;
}