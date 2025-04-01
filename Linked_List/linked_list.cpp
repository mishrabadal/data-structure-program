#include <iostream>
using namespace std;
// creating Node
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

void traverse(Node *temp)
{
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
}

void creation_of_linked_list(int data)
{
    // output
    // 4
    // 0
    Node *head;
    head = new Node(data);
    cout << head->data << endl;
    cout << head->next;
}

// default linked list
void default_linked_list()
{
    // OUTPUT
    // 1 2 3 4
    Node *head;
    Node *temp;
    head = NULL;
    int arr[] = {1, 2, 3, 4};
    int size= sizeof(arr)/sizeof(arr[0]);
    for (int i = 0; i < size; i++)
    {
        if (head == NULL)
        {
            head = temp = new Node(arr[i]);
        }
        else
        {

            temp->next = new Node(arr[i]);
            temp = temp->next;
        }
    }
    traverse(head);
}

void inserting_in_begining()
{
    // output
    //  4 3 2 1 10
    Node *head;
    head = new Node(10);
    int arr[] = {1, 2, 3, 4};

    for (int i = 0; i < 4; i++)
    {
        if (head == NULL)
        {
            head = new Node(arr[i]);
        }
        else
        {
            // inserting in start
            Node *temp;
            temp = new Node(arr[i]);
            temp->next = head;
            head = temp;
        }
    }
    traverse(head);
}

// insert value at the end without recursion
void inserting_in_end()
{
    // insert_multiple_value_in_linked_list();
    Node *head;
    Node *temp;
    head = NULL;
    int arr[] = {1, 2, 3, 4};
    for (int i = 0; i < 4; i++)
    {
        if (head == NULL)
        {
            head = temp = new Node(arr[i]);
        }
        else
        {
            // inserting in start

            temp->next = new Node(arr[i]);
            temp = temp->next;
        }
    }

    // insert at end of linked list
    Node *tail = head;
    while (tail->next != NULL)
    {
        tail = tail->next;
    }
    tail->next = new Node(50);
    traverse(head);
}

// insert value at the end using recursion
Node *create_linked_list(int arr[], int index, int size)
{
    if (index == size)
    {

        return NULL;
    }
    Node *temp;
    temp = new Node(arr[index]);
    temp->next = create_linked_list(arr, index + 1, size);
    return temp;

    // 1 2 3 4
    // int main()
    // {
    //     int arr[] = {1, 2, 3, 4};
    //     Node *head;
    //     head = create_linked_list(arr, 0, 4);
    //     traverse(head);

    //     return 0;
    // }
}

// inserting in begining of linked list using recursion
Node *create_linked_list(int arr[], int index, int size, Node *prev)
{
    if (index == size)
        return prev;

    Node *temp;
    temp = new Node(arr[index]);
    temp->next = prev;
    return create_linked_list(arr, index + 1, size, temp);

    // output 4 3 2 1
    //  int arr[] = {1, 2, 3, 4};
    //  Node *head;
    //  head = create_linked_list(arr, 0, 4,NULL);
    //  traverse(head);
}

// insert at particular index
void insert_at_index()
{
    // output 1 2 3 30 4
    Node *head;
    Node *temp, *temp2;
    head = NULL;
    int arr[] = {1, 2, 3, 4};
    for (int i = 0; i < 4; i++)
    {
        if (head == NULL)
        {
            head = temp = new Node(arr[i]);
        }
        else
        {

            temp->next = new Node(arr[i]);
            temp = temp->next;
        }
    }

    // insert at particular index
    int data = 30; // number will insert
    int x = 3;     // after  of first three element

    x--;
    temp = head;
    while (x--)
    {
        temp = temp->next;
    }
    temp2 = new Node(data);
    temp2->next = temp->next;
    temp->next = temp2;
    traverse(head);
}

int main()
{
    insert_at_index();
    return 0;
}