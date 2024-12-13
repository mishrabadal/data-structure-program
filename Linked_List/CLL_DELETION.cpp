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

void d_begin(node *head)
{

    node *curr = head;
    node *temp = head;
    while (curr->next != head)
    {
        curr = curr->next;
    }
    curr->next = head->next;
    head = head->next;
    delete temp;
    traverse(head);
}

void d_end(node *head)
{

    node *curr = head;
    node *prev;
    node *temp;
    while (curr->next != head)
    {
        prev = curr;
        curr = curr->next;
    }
    prev->next = head;
    temp = curr;
    delete temp;
    traverse(head);
}

void d_index(node *head)
{

    int pos = 3;
    node *curr = head;
    node *prev;
    node *temp;
    while (--pos)
    {
        prev = curr;
        curr = curr->next;
    }
    prev->next = curr->next;
    temp = curr;
    delete temp;
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
    d_index(head);
}

int main()
{
    default_linked_list();

    return 0;
}