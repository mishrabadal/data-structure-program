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

void traverse(node *head)
{
    node *curr = head;
    cout << endl
         << endl;
    do
    {
        cout << curr->data << "  ";
        curr = curr->next;
    } while (curr != head);
    cout << endl
         << endl;
}

// default linked list

void i_begin(node *head)
{
    node *curr = head;
    while (curr->next != head)
    {
        curr = curr->next;
    }
    node *temp = new node(99);
    curr->next = temp;
    temp->next = head;
    head = temp;
    traverse(head);
}

void i_end(node *head)
{
    node *curr = head;
    while (curr->next != head)
    {
        curr = curr->next;
    }
    node *temp = new node(99);
    curr->next = temp;
    temp->next = head;
    traverse(head);
}

void i_index(node *head)
{
    node *curr = head;
    node *prev;

    int pos = 3;
    while (--pos)
    {
        prev = curr;
        curr = curr->next;
    }

    node *temp = new node(99);
    prev->next = temp;
    temp->next = curr;
    traverse(head);
}

void default_linked_list()
{
    node *head;
    node *tail;
    head = NULL;
    int arr[] = {1, 2, 3, 4};
    int size = sizeof(arr) / sizeof(arr[0]);
    for (int i = 0; i < size; i++)
    {
        if (head == NULL)
        {
            head = tail = new node(arr[i]);
        }
        else
        {

            tail->next = new node(arr[i]);
            tail = tail->next;
        }
    }
    tail->next = head;
    i_index(head);
}

int main()
{
    default_linked_list();

    return 0;
}