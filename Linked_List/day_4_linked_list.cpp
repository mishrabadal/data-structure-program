#include <iostream>
using namespace std;
#include <bits/stdc++.h>
// default linked list
class listnode
{
public:
    int val;
    listnode *next;
    listnode(int data)
    {
        val = data;
        next = NULL;
    }
};

void traverse(listnode *temp)
{
    cout << endl;
    while (temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout << endl;
}

void RemoveNthNodeFromEnd(listnode *head)
{
    int N = 3; // nth node to be delete
    int count = 0;
    listnode *temp = head;
    while (temp != NULL)
    {
        count++;
        temp = temp->next;
    }
    count -= N;
    // edge case handling
    if (count == 0)
    {
        temp = head;
        head = head->next;
        delete temp;
        traverse(head);
        return;
    }

    listnode *curr = head, *prev = NULL;
    while (count--)
    {
        prev = curr;
        curr = curr->next;
    }
    prev->next = curr->next;
    delete curr;
    traverse(head);
}

void removeEveryKNode(listnode *head)
{
    listnode *curr = head, *prev = NULL;
    int k = 3;
    int count = 1;
    if (k == 1)
    // no any element found;
    {
        traverse(head);
        return;
    }
    while (curr)
    {
        if (k == count)
        {
            prev->next = curr->next;
            delete curr;
            curr = prev->next;
            count = 1;
        }
        else
        {
            prev = curr;
            curr = curr->next;
            count++;
        }
    }
    traverse(head);
    return;
}

listnode *rotate_list(listnode *head)
{
    int k = 3; // how many time rotate
    listnode *temp = head;
    int count = 0;

    while (temp != NULL)
    {
        count++;
        temp = temp->next;
    }
    k = k % count; // handling edge case if number of rotation is more than total node
    if (k == 0)
    {
        traverse(head);
        return head; // 0 time rotate
    }
    count -= k;
    listnode *curr = head, *prev = NULL;
    while (count--)
    {
        prev = curr;
        curr = curr->next;
    }
    prev->next = NULL;
    listnode *tail = curr;
    while (tail->next != NULL)
    {
        tail = tail->next;
    }
    tail->next = head;
    head = curr;
    traverse(head);
    return head;
}

bool IsPalindrome(listnode *head)
{
    listnode *temp = head;
    int count = 0;
    while (temp)
    {
        count++;
        temp = temp->next;
    }
    count /= 2;
    listnode *curr = head, *prev = NULL;
    while (count--)
    {
        prev = curr;
        curr = curr->next;
    }
    // count=0;
    prev->next = NULL;
    listnode *front = NULL;
    prev = NULL;
    while (curr)
    {
        front = curr->next;
        curr->next = prev;
        prev = curr;
        curr = front;
    }

    listnode *head1 = head, *head2 = prev;
    while (head1)
    {
        if (head1->val != head2->val)
            return 0;
        head1 = head1->next;
        head2 = head2->next;
    }
    return 1;
}
void default_linked_list()
{
    // OUTPUT
    // 1 2 3 4
    listnode *head;
    listnode *temp;
    head = NULL;
    int arr[] = {1, 2, 3, 2, 1};

    int size = sizeof(arr) / sizeof(arr[0]);

    for (int i = 0; i < size; i++)
    {
        if (head == NULL)
        {
            head = temp = new listnode(arr[i]);
        }
        else
        {

            temp->next = new listnode(arr[i]);
            temp = temp->next;
        }
    }
    cout << IsPalindrome(head);
}

int main()
{
    default_linked_list();
    return 0;
}