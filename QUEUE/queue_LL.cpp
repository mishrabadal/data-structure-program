#include <iostream>
using namespace std;
// implementation using linked list
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

class queue
{
    node *front;
    node *rear;

public:
    queue(int n)
    {
        front = rear = NULL;
    }

    bool isEmpty()
    {
        return front == NULL;
    }

    void push(int x)
    {
        if (isEmpty())
        {
            front = new node(x);
            rear = front;
            cout << x << " push into queue" << endl;
            return;
        }

        else
        {
            rear->next = new node(x);
            rear=rear->next;
            cout << x << " push into queue" << endl;
        }
    }

    void pop()
    {
        if (isEmpty())
        {
            cout << "queue underflow\n";
            return;
        }
        else
        {
            node *temp = front;
            front = front->next;
            delete temp;
        }
    }

    int start()
    {
        if (isEmpty())
        {
            cout << "queue is empty\n";
            return -1;
        }
        else
        {
            return front->data;
        }
    }

    void traverse()
    {
        node *head = front;
       
        while (head != NULL)
        { 
            cout << head->data << "  ";
            head = head->next;
        }
        
    }
};
int main()
{

    queue q(5);
    for (int i = 0; i < 5; i++)
    {
        q.push(i + 10);
    }
    q.pop();
    q.pop();
    q.pop();
    q.push(4);
    q.traverse();
    return 0;
}