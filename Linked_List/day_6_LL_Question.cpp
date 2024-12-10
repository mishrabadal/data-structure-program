#include <iostream>
#include <bits/stdc++.h>
using namespace std;
class node
{
public:
    int data;
    node *next;
    node(int value)
    {
        data = value;
        next = NULL;
    }
};

void traverse(node *temp)
{

    while (temp != NULL)
    {
        cout << temp->data << "  ";
        temp = temp->next;
    }
    cout << endl
         << endl;
}

// method 1 or M1
node *Remove_Duplicate_Element_From_List_M1(node *head)
{
    vector<int> ans;
    ans.push_back(head->data);
    node *curr = head->next;

    while (curr)
    {
        if (ans[ans.size() - 1] != curr->data)
            ans.push_back(curr->data);
        curr = curr->next;
    }
    curr = head;
    int index = 0;
    while (index < ans.size())
    {
        curr->data = ans[index];
        index++;
        curr = curr->next;
    }
    int size = ans.size() - 1;
    curr = head;
    while (size--)
    {
        curr = curr->next;
    }
    curr->next = NULL;
    traverse(head);
    return head;
    // input : 1, 2, 2, 3, 3, 4, 4, 4
    // output 1 2 3 4
}

// method 2  without using extra space of ans array
node *Remove_Duplicate_Element_From_List_M2(node *head)
{
    node *curr = head->next;
    node *prev = head;
    while (curr)
    {
        if (curr->data == prev->data)
        {
            prev->next = curr->next;
            delete curr;
            curr = prev->next;
        }
        else
        {
            prev = prev->next;
            curr = curr->next;
        }
    }
    traverse(head);
    return head;
}
// default linked list
void default_linked_list()
{
    // OUTPUT
    // 1 2 3 4
    node *head;
    node *temp;
    head = NULL;
    int arr[] = {1, 2, 2, 3, 3, 4, 4, 4};
    int size = sizeof(arr) / sizeof(arr[0]);
    for (int i = 0; i < size; i++)
    {
        if (head == NULL)
        {
            head = temp = new node(arr[i]);
        }
        else
        {

            temp->next = new node(arr[i]);
            temp = temp->next;
        }
    }
    Remove_Duplicate_Element_From_List_M2(head);
}
int main()
{
    default_linked_list();
    return 0;
}