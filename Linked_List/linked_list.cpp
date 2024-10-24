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

void creation_of_linked_list(int data)
{
    // output
    // 4
    // 0
    node *head;
    head = new node(data);
    cout << head->data << endl;
    cout << head->next;
}

// default linked list
void insert_multiple_value_in_linked_list()
{
    // OUTPUT
    // 1 2 3 4
    node *head;
    node *temp;
    head = NULL;
    int arr[] = {1, 2, 3, 4};
    for (int i = 0; i < 4; i++)
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
    traverse(head);
}

void inserting_in_begining()
{
    // output
    //  4 3 2 1 10
    node *head;
    head = new node(10);
    int arr[] = {1, 2, 3, 4};

    for (int i = 0; i < 4; i++)
    {
        if (head == NULL)
        {
            head = new node(arr[i]);
        }
        else
        {
            // inserting in start
            node *temp;
            temp = new node(arr[i]);
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
    node *head;
    node *temp;
    head = NULL;
    int arr[] = {1, 2, 3, 4};
    for (int i = 0; i < 4; i++)
    {
        if (head == NULL)
        {
            head = temp = new node(arr[i]);
        }
        else
        {
            // inserting in start

            temp->next = new node(arr[i]);
            temp = temp->next;
        }
    }

    // insert at end of linked list
    node *tail = head;
    while (tail->next != NULL)
    {
        tail = tail->next;
    }
    tail->next = new node(50);
    traverse(head);
}

// insert value at the end using recursion
node *create_linked_list(int arr[], int index, int size)
{
    if (index == size)
    {

        return NULL;
    }
    node *temp;
    temp = new node(arr[index]);
    temp->next = create_linked_list(arr, index + 1, size);
    return temp;

    // 1 2 3 4
    // int main()
    // {
    //     int arr[] = {1, 2, 3, 4};
    //     node *head;
    //     head = create_linked_list(arr, 0, 4);
    //     traverse(head);

    //     return 0;
    // }
}

// inserting in begining of linked list using recursion
node *create_linked_list(int arr[], int index, int size, node *prev)
{
    if (index == size)
        return prev;

    node *temp;
    temp = new node(arr[index]);
    temp->next = prev;
    return create_linked_list(arr, index + 1, size, temp);

    // output 4 3 2 1
    //  int arr[] = {1, 2, 3, 4};
    //  node *head;
    //  head = create_linked_list(arr, 0, 4,NULL);
    //  traverse(head);
}

// insert at particular index
void insert_at_index()
{
    // output 1 2 3 30 4
    node *head;
    node *temp, *temp2;
    head = NULL;
    int arr[] = {1, 2, 3, 4};
    for (int i = 0; i < 4; i++)
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

    // insert at particular index
    int data = 30; // number will insert
    int x = 3;     // after  of first three element

    x--;
    temp = head;
    while (x--)
    {
        temp = temp->next;
    }
    temp2 = new node(data);
    temp2->next = temp->next;
    temp->next = temp2;
    traverse(head);
}

int main()
{
    insert_at_index();
    return 0;
}