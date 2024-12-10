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
        cout << temp->data << "  ";
        temp = temp->next;
    }
    cout << endl
         << endl;
}

void d_begin(node *head)
{
    if (head != NULL)
    {
        node *temp = head;
        head = head->next;
        delete temp;
        if (head) // if more than one node found
        {
            head->prev = NULL;
        }

        traverse(head);
    }
}
void d_end(node *head)
{
    if (head->next == NULL)
    {
        delete head;
        head = NULL;
    }
    else
    {
        node *curr = head;
        while (curr->next)
        {
            curr = curr->next;
        }
        curr->prev->next = NULL;
        delete curr;
    }
    traverse(head);
}

void d_index(node *head)
{
    int pos = 3;
    if (pos == 1)
    {
        node *temp = head;
        head = head->next;
        delete temp;
        if (head) // if more than one node found
        {
            head->prev = NULL;
        }
    }
    else
    {
        node *curr = head;

        while (--pos)
        {
            curr = curr->next;
        }
        if (curr->next ==  NULL)
        {
            curr->prev->next=NULL;
            delete curr;
        }
        else
        {
            curr->prev->next = curr->next;
            curr->next->prev = curr->prev;
            delete curr;
        }
    }
    traverse(head);
}

void default_linkedList()
{
    // OUTPUT
    // 1 2 3 4
    node *head;

    node *tail;
    head = NULL;
    int arr[] = {1,2,3,4};
    int size = sizeof(arr) / sizeof(arr[0]);
    for (int i = 0; i < size; i++)
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
    d_index(head);
}

int main()
{
    default_linkedList();
    //     int arr[] = {1, 2, 3, 4,5};
    //   node *head=  createDLL(arr,0,5,NULL);
    //   traverse(head);

    return 0;
}