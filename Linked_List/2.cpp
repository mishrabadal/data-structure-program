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
//Array to Linked List
    Node* arrayToList(vector<int>& arr) {
   Node *head,*temp;
   head=NULL;
   for(auto value :arr)
   {
    if(head==NULL)
   { 
    head=temp=new Node(value);
    }
    else
    {
        temp->next=new Node(value);
        temp=temp->next;
    }
   }
    return head;
        
    }
int main()
{
   
    return 0;
}
