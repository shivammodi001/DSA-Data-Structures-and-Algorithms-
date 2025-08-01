// gfg

#include <bits/stdc++.h>
using namespace std;

int makeProdectOne(int arr[], int N)
{
    int count_zero = 0;
    int step = 0;
    int mul = 1;
    for (int i = 0; i < N; i++)
    {
        // if +ve number make it 1
        if (arr[i] > 0)
        {
            step += arr[i] - 1; 
            mul = mul*1;
        }
        // if -ve number make it -1
        else if (arr[i] < 0)
        {
            step += (-1 - arr[i]);
            mul *=-1;
        }else{
            // if n==0 hain toh hum keval 1 step aage yah piche ja skte hain
            // but yeh depend krta h kitnr 0 hain
            step+=1;
            count_zero++;
        }
    }
    if(mul==1 || count_zero>0){
        return step;
    }
    return step+2; // ahr mul -1 aa raha h toh 2 step aage jake 1 kr dege
}

int main()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    // to find min step to make array product is 1
    // if (+)ve number = 1 banayge
    // if (-)ve number = -1 banayge
    // if n==0 kuch bhi banao but check krna numbers of -1 should be even times

    // agar kisi me positive number jayda h toh -vs wale ko bhi 1 me convert kr denge

    return 0;
}