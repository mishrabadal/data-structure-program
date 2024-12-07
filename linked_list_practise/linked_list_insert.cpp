#include <iostream>
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
        cout << temp->data << " ";
        temp = temp->next;
    }
}

void default_linked_list()
{
    node *temp, *head;
    int arr[] = {1, 2, 3, 4};
    head = NULL;
    for (int i = 0; i < 4; i++)
    {
        if (head == NULL)
            head = temp = new node(arr[i]);
        else
        {
            temp->next = new node(arr[i]);
            temp = temp->next;
        }
    }

    traverse(head);
}

void i_begin()
{
    node *temp, *head;
    int arr[] = {1, 2, 3, 4};
    head = NULL;
    for (int i = 0; i < 4; i++)
    {
        if (head == NULL)
            head = temp = new node(arr[i]);
        else
        {
            temp->next = new node(arr[i]);
            temp = temp->next;
        }
    }

    node *temp2 = new node(99);
    temp2->next = head;
    head = temp2;
    traverse(head);
}
void i_end()
{
    node *temp, *head;
    int arr[] = {1, 2, 3, 4};
    head = NULL;
    for (int i = 0; i < 4; i++)
    {
        if (head == NULL)
            head = temp = new node(arr[i]);
        else
        {
            temp->next = new node(arr[i]);
            temp = temp->next;
        }
    }

    node *tail;
    tail = head;
    while (tail->next != NULL)
    {
        tail = tail->next;
    }
    tail->next = new node(80);
    traverse(head);
}

void i_particular()
{
    node *temp, *head;
    int arr[] = {1, 2, 3, 4};
    head = NULL;
    for (int i = 0; i < 4; i++)
    {
        if (head == NULL)
            head = temp = new node(arr[i]);
        else
        {
            temp->next = new node(arr[i]);
            temp = temp->next;
        }
    }
    node *tail;
    tail = head;
    while (tail->data != 3)
    {
        tail = tail->next;
    }
    temp = new node(50);
    temp->next = tail->next;
    tail->next = temp;

    traverse(head);
};

int main()
{

    i_begin();
    return 0;
}