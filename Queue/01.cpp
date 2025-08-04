#include <bits/stdc++.h>
using namespace std;

class Queue
{
private:
    vector<int> arr;
    int frontIndex;
    int rearIndex;

public:
    Queue() : frontIndex(0), rearIndex(0) {}

    void enqueue(int value)
    {
        arr.push_back(value);
        rearIndex++;
    }

    void dequeue()
    {
        if (frontIndex < rearIndex)
        {
            arr.erase(arr.begin() + frontIndex);
            frontIndex++;
            // Adjust frontIndex if it exceeds rearIndex
            if (frontIndex > rearIndex)
            {
                frontIndex = rearIndex;
            }
        }
        else
        {
            cout << "Queue is empty!" << endl;
        }
    }

    int front()
    {
        if (frontIndex < rearIndex)
        {
            return arr[frontIndex];
        }
        else
        {
            throw out_of_range("Queue is empty!");
        }
    }

    bool isEmpty()
    {
        return frontIndex == rearIndex;
    }

    int size()
    {
        return rearIndex - frontIndex;
    }
};

int main()
{
    Queue q;
    q.enqueue(1);
    q.enqueue(2);
    q.enqueue(3);
    cout << "Front element: " << q.front() << endl; // Output: 1
    q.dequeue();
    cout << "Front element after dequeue: " << q.front() << endl; // Output: 2
    return 0;
}