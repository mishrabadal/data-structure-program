#include <iostream>
using namespace std;
// creating node
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
        cout << temp->data << " ";
        temp = temp->next;
    }
}

// default linked list
void insertion()
{
    // OUTPUT
    // 1 2 3 4
    node *head;
    node *temp;
    head = NULL;
    int arr[] = {1, 2, 3, 4, 5, 6};
    for (int i = 0; i < 6; i++)
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

    // delete in begining
    if (head != NULL)
    {

        node *temp = head;
        head = head->next;
        delete temp;
    }
    // delete in last
    node *cur, *prev;
    cur = head;
    while (cur->next != NULL)
    {
        prev = cur;
        cur = cur->next;
    }
    delete cur;
    prev->next = NULL;

    // delete after two index
    cur = head;
    int x = 2;

    while (x--)
    {
        prev = cur;
        cur = cur->next;
    }
    prev->next = cur->next;
    delete cur;
    traverse(head);
}

int main()
{
    insertion();
    return 0;
}