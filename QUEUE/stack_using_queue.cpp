#include <iostream>
#include <queue>
#include <stack>
using namespace std;
class MyStack
{
public:
    queue<int> q1;
    queue<int> q2;
    MyStack()
    {
    }
    bool empty()
    {
        return q1.empty() && q2.empty();
    }
    void push(int x)
    {
        if (empty())
            q1.push(x);

        else if (q1.empty())
            q2.push(x);

        else
            q1.push(x);
    }

    int pop()
    {
        if (empty())
            return 0;
        else if (q1.empty())
        {
            while (q2.size() > 1)
            {
                q1.push(q2.front());
                q2.pop();
            }
            int element = q2.front();
            q2.pop();
            return element;
        }
        else
        {
            while (q1.size() > 1)
            {
                q2.push(q1.front());
                q1.pop();
            }
            int element = q1.front();
            q1.pop();
            return element;
        }
    }

    int top()
    {
        // stack khali ho
        if (empty())
            return 0;
        else if (q1.empty())
            return q2.back();
        else
            return q1.back();
    }
};


int main()
{
    MyStack st;
    for (int i = 0; i < 5; i++)
    {
        st.push(i+1);
    }
     st.pop();
    cout<<st.top()<<endl;
   
    cout<<st.empty();
    return 0;
}