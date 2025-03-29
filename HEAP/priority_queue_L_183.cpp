#include <iostream>
using namespace std;
#include <bits/stdc++.h>

// priority queue implemented using max heap
void priority_using_maxHeap()
{
    priority_queue<int> p; // max heap
    p.push(10);
    p.push(20);
    p.push(11);
    p.push(18);
    p.push(15);
    cout << "top element is : " << p.top() << endl;
    cout << "size of queue : " << p.size() << endl;
    p.pop();
    cout << "after deletion top element is : " << p.top() << endl;
    cout << " empty check : " << p.empty() << endl;
    while (!p.empty())
    {
        cout << p.top() << " ";
        p.pop();
    }
}

// priority queue implemented using min heap
void priority_using_minHeap()
{
    priority_queue<int, vector<int>, greater<int>> p;
    p.push(10);
    p.push(20);
    p.push(11);
    p.push(18);
    p.push(15);
    cout << "top element is : " << p.top() << endl;
    cout << "size of queue : " << p.size() << endl;
    p.pop();
    cout << "after deletion top element is : " << p.top() << endl;
    cout << " empty check : " << p.empty() << endl;
    while (!p.empty())
    {
        cout << p.top() << " ";
        p.pop();
    }
}
int main()
{
    priority_using_maxHeap();
    cout<<endl<<endl;
    priority_using_minHeap();
    return 0;
}