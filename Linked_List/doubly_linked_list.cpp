#include <iostream>
using namespace std;
// DOUBLY LINKED LIST
class node
{
public:
    int data;
    node *next;
    node *prev;
    node(int value)
    {
        data = value;
        next = NULL;
        prev = NULL;
    }
};

void traverse(node *temp)
{
    cout << endl;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl
         << endl;
}

void i_begin(node *head)
{
    if (head == NULL)
    {
        head = new node(99);
    }
    else
    {
        node *temp = new node(99);
        temp->next = head;
        head->prev = temp;
        head = temp;
    }
    traverse(head);
}

void i_end(node *head)
{
    node *curr = head;
    if (head == NULL)
    {

        head = new node(99);
        traverse(head);
        return;
    }

    while (curr->next != NULL)
    {
        curr = curr->next;
    }
    node *temp = new node(99);
    curr->next = temp;
    temp->prev = curr;
    traverse(head);
}

void default_linkedList()
{
    // OUTPUT
    // 1 2 3 4
    node *head;

    node *tail;
    head = NULL;
    int arr[] = {1, 2, 3, 4};
    for (int i = 0; i < 4; i++)
    {
        if (head == NULL)
        {
            head = tail = new node(arr[i]);
        }
        else
        {

            node *temp = new node(arr[i]);
            tail->next = temp;
            temp->prev = tail;
            tail = temp;
        }
    }
    i_end(head);
}

int main()
{
    default_linkedList();
    return 0;
}