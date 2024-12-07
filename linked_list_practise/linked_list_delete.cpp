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
    // delete in start
    temp = head;
    head = head->next;
    delete temp;

    // delete in end;
    temp = head;
    node *prev;
    while (temp->next != NULL)
    {

        prev = temp;
        temp = temp->next;
    }
    prev->next = NULL;
    delete temp;
    // delete at particular index

    traverse(head);
}
int main()
{
    default_linked_list();

    return 0;
}