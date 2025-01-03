#include <iostream>
using namespace std;
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
        return rear == size - 1;
    }

    void push(int x)
    {
        if (isEmpty())
        {
            front = rear = 0;
            arr[0] = x;
        }
        else if (isFull())
        {
            cout << "queue is overflow";
            return;
        }
        else
        {
            rear = rear + 1;
            arr[rear] = x;
        }
    }

    void pop()
    {
        if (isEmpty())
        {
            cout << "queue underflow";
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
                front = front + 1;
            }
        }
    }

    int start()
    {
        if (isEmpty())
        {
            cout << "queue is empty";
            return -1;
        }
        else
        {
            return arr[front];
        }
    }

    int isSize()
    {
        return rear - front + 1;
    }

    void print()
    {
        for (int i = front; i <= rear; i++)
        {
            cout << arr[i] << endl;
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
    cout << q.isEmpty() << endl;
    cout << q.isFull() << endl;
    cout << q.start() << endl;
    cout << q.isSize() << endl;
    q.pop();
    q.print();

    return 0;
}