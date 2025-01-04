#include <iostream>
#include <queue>
#include <stack>
using namespace std;

class MyQueue
{
public:
    stack<int> s1; // push
    stack<int> s2; // pop
    MyQueue()
    {
    }
    bool empty()
    {
        return s1.empty() && s2.empty();
    }
    void push(int x)
    {
        s1.push(x);
    }
    int pop()
    {
        // empty
        if (empty())
            return 0;
        else if (!s2.empty())
        {
            int element = s2.top();
            s2.pop();
            return element;
        }
        else
        {
            while (!s1.empty())
            {
                s2.push(s1.top());
                s1.pop();
            }
            int element = s2.top();
            s2.pop();
            return element;
        }
    }
    int peek()
    {
        if (empty())
            return 0;
        else if (!s2.empty())
            return s2.top();
        else
        {
            while (!s1.empty())
            {
                s2.push(s1.top());
                s1.pop();
            }
        }
        return s2.top();
    }
};



int main()
{
    MyQueue q;
    for (int i = 0; i < 5; i++)
    {
        q.push(i + 1);
    }

    return 0;
}