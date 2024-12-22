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
class stack
{
    node *top;
    int size;

public:
    stack()
    {
        top = NULL;
        size = 0;
    }
    void push(int value)
    {
        node *temp = new node(value);
        if (temp == NULL)
        {
            cout << "stack overflow\n";
            return;
        }
        else
        {
            temp->next = top;
            top = temp;
            size++;
            cout << "pushed " << value << " into the stack\n";
        }
    }
    void pop()
    {
        if (top == NULL)
        {
            cout << "stack is underflow\n";
        }
        else
        {
            node *temp = top;
            cout << "poppped " << top->data << "  from the stack";
            top = top->next;
            delete temp;
            size--;
        }
    }
    int peek()
    {
        if (top == NULL)
        {
            cout << "stack is empty\n";
            return -1;
        }
        else
        {
            return top->data;
        }
    }

    bool IsEmpty()
    {
        return top == NULL;
    }

    int IsSize()
    {
        return size;
    }
};

int main()
{

    stack s;

    for (int i = 6; i < 9; i++)
    {
        s.push(i);
    }
 
    cout << endl;
    cout << s.IsSize();
    cout << endl;
    cout << s.peek();
    cout << endl;
    cout << s.IsEmpty();
       s.pop();

    return 0;
}