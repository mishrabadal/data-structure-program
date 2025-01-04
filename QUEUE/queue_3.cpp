#include <iostream>
using namespace std;
#include <queue>
#include <stack>
// print all number in every window of size k
void display(queue<int> q)
{
    while (!q.empty())
    {
        cout << q.front() << " ";
        q.pop();
    }
    cout << endl;
}
void print_all_number_of_window()
{
    int arr[] = {3, 6, 2, 7, 8, 11};
    int n = 6;
    int k = 3;
    queue<int> q;
    for (int i = 0; i < k - 1; i++)
    {
        q.push(arr[i]);
    }
    for (int i = k - 1; i < n; i++)
    {
        q.push(arr[i]);
        display(q);
        q.pop();
    }
}

// first negative integer in every window of size k
// method 1 : basic method
int first_negative(queue<int> q)
{
    while (!q.empty())
    {
        if (q.front() < 0)
            return q.front();
        q.pop();
    }
    return 0;
}
// T(n)=o(n+k)
void first_negative_integer_of_window()
{
    int arr[] = {2, -3, -4, -2, 7, 8, 9, -10};
    int n = 8;
    int k = 3;
    queue<int> q;
    vector<int> ans;
    for (int i = 0; i < k - 1; i++)
    {
        q.push(arr[i]);
    }
    for (int i = k - 1; i < n; i++)
    {
        q.push(arr[i]);
        ans.push_back(first_negative(q));
        q.pop();
    }
    for (auto i : ans)
        cout << i << " ";
}

// method 2 : baap method
void first_negative_integer_of_window_m2()
{
    int arr[] = {2, -3, -4, -2, 7, 8, 9, -10};
    int n = 8;
    int k = 3;
    queue<int> q;
    vector<int> ans;
    for (int i = 0; i < k - 1; i++)
    {
        if (arr[i] < 0)
        {
            q.push(i);
        }
    }
    for (int i = k - 1; i < n; i++)
    {

        if (arr[i] < 0)
            q.push(i);
        if (q.empty())
            ans.push_back(0);
        else
        {
            if (q.front() <= i - k)
                q.pop();
            if (q.empty())
                ans.push_back(0);
            else
                ans.push_back(arr[q.front()]);
        }
    }
    for (auto i : ans)
        cout << i << " ";
}

// first no repeating char in a stream of characters

void no_repeating_char_stram()
{
    string a = "ababdc";
    string b = "";
    vector<int> repeated(26, 0);
    queue<char> q;
    for (int i = 0; i < a.size(); i++)
    {
        if (repeated[a[i] - 'a'] >= 1)
        {
            repeated[a[i] - 'a']++;
            while (!q.empty() && repeated[q.front() - 'a'] > 1)
            {
                q.pop();
            }
            if (q.empty())
                b += '#';
            else
                b += q.front();
        }
        else
        {
            repeated[a[i] - 'a']++;
            q.push(a[i]);
            while (repeated[q.front() - 'a'] > 1)
            {
                q.pop();
            }
            b += q.front();
        }
    }
    cout << b << endl;
}
int main()
{

    no_repeating_char_stram();
    return 0;
}