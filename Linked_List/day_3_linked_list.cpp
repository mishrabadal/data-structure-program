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

void reverse_data(listnode *head)
{
    // starting reversing
    vector<int> ans;
    listnode *temp = head;
    while (temp != NULL)
    {
        ans.push_back(temp->val);
        temp = temp->next;
    }
    int i = ans.size() - 1;
    temp = head;
    while (temp)
    {
        temp->val = ans[i];
        i--;
        temp = temp->next;
    }
    // end reversing
}

void reverse_node(listnode *&head)
{
    listnode *curr = head, *prev = NULL, *fut = NULL;

    while (curr)
    {
        fut = curr->next;
        curr->next = prev;
        prev = curr;
        curr = fut;
    }

    head = prev;
}

listnode *reverse(listnode *curr, listnode *prev)
{
    if (curr == NULL)
    {
        return prev;
    }
    listnode *fut = curr->next;
    curr->next = prev;
    return reverse(fut, curr);
}

void middle_node(listnode *head)
{
    listnode *temp = head;
    int count = 0;
    while (temp != NULL)
    {
        count++;
        temp = temp->next;
    }

    count = count / 2; // for middle of count

    temp = head;
    while (count--)
    {
        temp = temp->next;
    }
    cout << "middle element is : " << temp->val;
    traverse(temp);
}
void middle_element_slow_fast_pointer(listnode *head)
{
    listnode *slow = head;
    listnode *fast = head;
    while (fast != NULL && fast->next != NULL)
    {
        slow = slow->next;
        fast = fast->next->next;
    }
    traverse(slow);
}
void default_linked_list()
{
    // OUTPUT
    // 1 2 3 4
    listnode *head;
    listnode *temp;
    head = NULL;
    int arr[] = {1, 2, 3, 4, 5};

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
    // reverse_data(head); method 1
    // reverse_node(head);//method 2
    // head=reverse(head,NULL);//method  3
    middle_element_slow_fast_pointer(head);
}

int main()
{
    default_linked_list();
    return 0;
}