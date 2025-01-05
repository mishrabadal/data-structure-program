#include <iostream>
using namespace std;
#include <queue>
#include <stack>

class node
{
public:
    int data;
    node *next, *prev;
    node(int value)
    {
        data = value;
        next = NULL;
        prev = NULL;
    }
};
class Deque
{
    node *front, *rear;

public:
    Deque()
    {
        front = rear = NULL;
    }
    void push_front(int x)
    {
        if (front == NULL)
        {
            front = rear = new node(x);
            return;
        }
        else
        {
            node *temp = new node(x);
            temp->next = front;
            front->prev = temp;
            front = temp;
            return;
        }
    }

    void push_back(int x)
    {
        if (front == NULL)
        {
            front = rear = new node(x);
            return;
        }
        else
        {
            node *temp = new node(x);
            rear->next = temp;
            temp->prev = rear;
            rear = temp;
            return;
        }
    }

    void pop_front()
    {
        if (front == NULL)
            return;
        else
        {
            node *temp = front;
            front = front->next;
            delete temp;
            if (front)
                front->prev = NULL;
            else
                rear = NULL;
        }
    }

    void pop_back()
    {
        if (front == NULL)
            return;
        else
        {
            node *temp = rear;
            rear = rear->prev;
            delete temp;
            if (rear)
                rear->next = NULL;
            else
                front = NULL;
        }
    }

    int start()
    {
        if (front == NULL)
            return -1;
        else
            return front->data;
    }

    int end()
    {
        if (front == NULL)
            return -1;
        else
            return rear->data;
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
    Deque dq;
    dq.push_front(1), dq.push_front(2), dq.push_front(3);
    dq.push_back(4), dq.push_back(5);
    dq.traverse();
    cout << endl;
    dq.pop_back();
    dq.traverse();
    cout << endl;
    dq.pop_front();
    dq.traverse();

   
    cout << "\nfirst element in queue : "<<dq.start() << endl;
    cout << "last element in queue : "<< dq.end() << endl;

    return 0;
}