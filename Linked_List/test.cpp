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

// traversing linked list
void traverse(Node *temp)
{
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
}

void delete_b(Node *head)
{
    Node *temp = head;
    head = head->next;
    delete temp;
    traverse(head);
}

void delete_l(Node *head)
{
    Node *curr = head, *prev;
    while (curr->next != NULL)
    {
        prev = curr;
        curr = curr->next;
    }
    prev->next = NULL;
    delete curr;
    traverse(head);
}

void delete_i(Node *head)
{
    Node *curr = head, *prev;
    int pos = 2;
    pos--;
    while (pos--)
    {
        prev = curr;
        curr = curr->next;
    }
    prev->next = curr->next;
    delete curr;
    traverse(head);
}

void deleteNode(Node *head, int x)
{
    Node *curr = head, *prev = curr;


    if(head->data==x)
    {
    Node *temp = head;
    head = head->next;
    delete temp;
    traverse(head);
    return ;
    }

    while (curr->data != x)
    {
        prev = curr;
        curr = curr->next;
    }
    prev->next = curr->next;
    delete curr;
    traverse(head);
}


void rev_ll(Node *head)
{
Node *temp=head;
vector<int>ans;
while(temp){
ans.push_back(temp->data);
temp=temp->next;
}

int i = ans.size()-1;
temp=head;
while(temp)
{
    temp->data=ans[i--];
    temp=temp->next;
}
traverse(head);
}
int main()
{
    Node *head, *temp;
    head = NULL;
    vector<int> arr = {1, 2, 3, 4};
    for (auto value : arr)
    {
        if (head == NULL)
        {
            head = temp = new Node(value);
        }
        else
        {
            temp->next = new Node(value);
            temp = temp->next;
        }
    }

    // traversing
   rev_ll(head);

    return 0;
}
