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
    cout << endl
         << endl;

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

node *Merge_two_sorted_list(node *head1, node *head2)
{

    node *head = new node(0);
    node *tail = head;
    while (head1 && head2)
    {
        if (head1->data <= head2->data)
        {
            tail->next = head1;
            head1 = head1->next;
            tail = tail->next;
            tail->next = NULL;
        }
        else
        {
            tail->next = head2;
            head2 = head2->next;
            tail = tail->next;
            tail->next = NULL;
        }
    }
    if (head1)
        tail->next = head1;
    else
        tail->next = head2;

    tail = head;
    head = head->next;
    delete tail;
    traverse(head);
    return head;
}

node *sort_list_contains_only_0_1_2(node *head)
{

    node *curr = head;
    int count0 = 0, count1 = 0, count2 = 0;
    while (curr)
    {
        if (curr->data == 0)
            count0++;
        else if (curr->data == 1)
            count1++;
        else
            count2++;

        curr = curr->next;
    }
    curr = head;
    while (count0--)
    {
        curr->data = 0;
        curr = curr->next;
    }

    while (count1--)
    {
        curr->data = 1;
        curr = curr->next;
    }

    while (count2--)
    {
        curr->data = 2;
        curr = curr->next;
    }
    traverse(head);
    return head;
}
void default_linked_list()
{
    // OUTPUT
    // 1 2 3 4
    node *head;
    node *temp;
    head = NULL;
    int arr[] = {1, 2, 0, 2, 1, 0, 1};
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
    sort_list_contains_only_0_1_2(head);
    // second  linked list creation
    // temp = NULL;
    // node *head2;
    // head2 = NULL;
    // for (int i = 4; i < 10; i++)
    // {
    //     if (head2 == NULL)
    //     {
    //         head2 = temp = new node(arr[i]);
    //     }
    //     else
    //     {

    //         temp->next = new node(arr[i]);
    //         temp = temp->next;
    //     }
    // }

    // traverse(head2);
}
int main()
{
    default_linked_list();
    return 0;
}