#include <iostream>
using namespace std;
class stack
{
    int *arr;
    int size;
    int top;

public:
    stack(int s)
    {
        size = s;
        top = -1;
        arr = new int[s];
    }
    void push(int value)
    {
        if (top == size - 1)
        {
            cout << " stack overflow";
            return;
        }
        else
        {
            top++;
            arr[top] = value;
            cout << "\npushed " << value << " into the stack\n";
        }
    }
    void pop()
    {
        if (top == -1)
        {
            cout << "stack underflow\n";
            return;
        }
        else
            top--;
        cout << "popped " << arr[top + 1] << " from the stack\n";
    }
    int peek()
    {
        if (top == -1)
        {
            cout << "stack is empty\n";
            return -1;
        }
        else
            return arr[top];
    }

    bool IsEmpty()
    {
        return top == -1;
    }

    int IsSize()
    {
        return top + 1;
    }
};

int main()
{
    stack s(5);
    s.push(6);
    s.push(7);
    s.push(8);

    cout << s.peek();
    cout << s.IsEmpty();
    cout << s.IsSize();
    s.pop();

    return 0;
}