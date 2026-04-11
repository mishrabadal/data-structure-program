#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;

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

// Print Linked List
vector<int> printList(Node *head)
{
    Node *temp = head;
    vector<int> ans;
    while (temp != NULL)
    {
        ans.push_back(temp->data);
        temp = temp->next;
    }
    return ans;
}
int main()
{
   
    return 0;
}
