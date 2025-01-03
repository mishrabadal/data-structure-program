#include <iostream>
using namespace std;
// implementation using circular array or circular queue O(n)
class queue
{
    int *arr;
    int front, rear, size;

public:
    queue(int n)
    {
        arr = new int[n];
        front = -1, rear = -1;
        size = n;
    }

    bool isEmpty()
    {
        return front == -1;
    }

    bool isFull()
    {
        return (rear + 1) % size == front;
    }

    void push(int x)
    {
        if (isEmpty())
        {
            front = rear = 0;
            arr[0] = x;
            cout << x << " push into queue" << endl;
        }
        else if (isFull())
        {
            cout << "queue is overflow\n";
            return;
        }
        else
        {

            rear = (rear + 1) % size;
            arr[rear] = x;
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
            if (front == rear)
            {
                front = rear = -1;
            }
            else
            {
                front = (front + 1) % size;
            }
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
            return arr[front];
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
   
    return 0;
}