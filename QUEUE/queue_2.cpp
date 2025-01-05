#include <iostream>
using namespace std;
#include <queue>
#include <stack>

// print all element of queue with using extra space, space complexity O(n)
// method 1;
void print_all_element(queue<int> &q)
{
    vector<int> ans;
    while (!q.empty())
    {
        cout << q.front() << " ";
        ans.push_back(q.front());
        q.pop();
    }
    for (int i = 0; i < ans.size(); i++)
    {
        q.push(ans[i]);
    }
}

// method 2
// space complexity O(1);
void print_queue(queue<int> &q)
{
    int n = q.size();
    while (n--)
    {
        cout << q.front() << " ";
        q.push(q.front());
        q.pop();
    }
}

void queue_reversal(queue<int> &q)
{
    stack<int> st;
    while (!q.empty())
    {
        st.push(q.front());
        q.pop();
    }
    while (!st.empty())
    {
        q.push(st.top());
        st.pop();
    }
    print_queue(q);
}

// reverse first k element of queue (without using an extra array)
void reverse_first_k_element(queue<int> q)
{
    int k = 3;
    stack<int> st;
    while (k--)
    {
        st.push(q.front());
        q.pop();
    }
    int n = q.size();
    while (!st.empty())
    {
        q.push(st.top());
        st.pop();
    }
    while (n--)
    {
        q.push(q.front());
        q.pop();
    }
    print_queue(q);
}

// time needed to buy tickets
void time_required_to_buy_tickets()
{
    int tickets[] = {1, 5, 2, 3, 7};
    queue<int> q;
    int n = 5;
    int k = 2; // index which required ticket
    for (int i = 0; i < n; i++)
        q.push(i);
    int time = 0;
    while (tickets[k] != 0)
    {
        tickets[q.front()]--;
        if (tickets[q.front()])
            q.push(q.front());
        q.pop();
        time++;
    }
    cout << "time required to get ticket is : " << time;
}

void time_required_to_buy_tickets_m2()
{
    int tickets[] = {1, 5, 2, 3, 7};
    queue<int> q;
    int n = 5;
    int k = 2; // index which required ticket
    int time = 0;

    for (int i = 0; i <= k; i++)
    {
        time += min(tickets[k], tickets[i]);
    }
    for (int i = k + 1; i < n; i++)
    {
        time += min(tickets[k] - 1, tickets[i]);
    }

    cout << "time required to get ticket is : " << time;
}

int main()
{
   // time_required_to_buy_tickets_m2();
    queue<int> q;
    for (int i = 0; i < 5; i++)
    {
        q.push(i + 1);
    }
    time_required_to_buy_tickets_m2();

    return 0;
}