#include <iostream>
using namespace std;
#include <queue>
#include <stack>
class Deque
{
    int front, rear, size;
    int *arr;

public:
    Deque(int n)
    {
        size = n;
        arr = new int[n];
        front = rear - 1;
    }

    bool isEmpty()
    {
        return front == -1;
    }

    bool isFull()
    {
        return (rear + 1) % size == front;
    }
    void push_front(int x)
    {
        if (isEmpty())
        {
            front = rear = 0;
            arr[0] = x;
            return;
        }
        else if (isFull())
        {
            cout << "dequeue is full" << endl;
            return;
        }
        else
        {
            front = (front - 1 + size) % size;
            arr[front] = x;
            return;
        }
    }

    void push_back(int x)
    {
        if (isEmpty())
        {
            front = rear = 0;
            arr[0] = x;
        }
        else if (isFull())
        {
            cout << "dequeue is full";
            return;
        }
        else
        {
            rear = (rear + 1) % size;
            arr[rear] = x;
            return;
        }
    }

    void pop_front()
    {
        if (isEmpty())
        {
            cout << "deque is empty" << endl;
            return;
        }
        else
        {
            if (front == rear)
                front = rear = -1;
            else
                front = (front + 1) % size;
        }
    }

    void pop_back()
    {
        if (isEmpty())
            return;
        else
        {
            if (front == rear)
                front = rear - 1;

            else
                rear = (rear - 1 + size) % size;
        }
    }

    int start()
    {
        if (isEmpty())
            return -1;

        else
            return arr[front];
    }

    int end()
    {
        if (isEmpty())
            return -1;
        else
            return arr[rear];
    }

    void print()
    {
        int start = front, end = rear;
        cout << start << endl
             << end;

        cout << "\n----------elements are----------\n";

        if (start == -1 || rear == -1)
            return;
        if (start < end)
        {
            for (int i = start; i <= end; i++)
                cout << arr[i] << " ";
        }
        else
        {
            for (int i = start; i < size; i++)
                cout << arr[i] << " ";
            for (int i = 0; i <= end; i++)
                cout << arr[i] << " ";
        }
    }
};

int main()
{
    Deque dq(5);
    dq.push_front(1), dq.push_front(2), dq.push_front(3);
    dq.push_back(4);
    dq.push_back(5);
    dq.pop_back();

    cout << "first element in queue : " << dq.start() << endl;
    cout << "last element in queue : " << dq.end() << endl;
    dq.print();
    return 0;
}