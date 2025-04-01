#include <iostream>
using namespace std;
#include <bits/stdc++.h>
class Node
{
public:
    int data;
    Node *next;
    Node(int value)
    {
        data = value;
        next = NULL;
    }
};
//Merge K sorted linked lists
class Compare
{
public:
    bool operator()(Node *a, Node *b)
    {
        return a->data > b->data; // creating min  heap; heap ke case me ye ulta kaam karta hai
    }
};
Node *mergeKLists(vector<Node *> &arr)
{
    priority_queue<Node *, vector<Node *>, Compare> p(arr.begin(), arr.end());

    Node *root = new Node(0);
    Node *tail = root;
    Node *temp;
    while (!p.empty())
    {
        temp = p.top();
        p.pop();
        tail->next = temp;
        tail = tail->next;
        if (temp->next)
            p.push(temp->next);
    }
    return root->next;
}
int main()
{

    return 0;
}