#include<bits/stdc++.h>
using namespace std;

int main(){
    queue<int> q;
    q.push(20);
    q.push(30);
    q.push(40);
    cout << q.front() << endl; // prints 20
    q.pop(); // removes 20
    cout << q.front() << endl; // prints 30
    if(q.empty()) {
        cout << "Queue is empty!" << endl;
    } else {
        cout << "Queue is not empty!" << endl;
    }
    q.push(20);
    q.push(30);
    cout<<"Size of queue: " << q.size() << endl; // prints 3

    // printing all elements in the queue
    cout << "Elements in the queue: ";
    while(!q.empty()) {
        cout << q.front() << " ";
        q.pop();
    }
    return 0;
}