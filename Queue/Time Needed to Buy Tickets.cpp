#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int timeRequiredToBuy(vector<int>& t, int k) {
        int n=t.size();
        int time=0;
        queue<int>q;
        //sari index(person) queue me
        for(int i=0;i<n;i++){
            q.push(i);
        }

        // know jab woh particular index par 0 na ho jaye
        while(t[k]!=0){
            //  1 sec for 1 tickect
            t[q.front()]--;
            if(t[q.front()]){
                q.push(q.front());
            }
                q.pop();
                time++;
        }
        return time;
    }
};