#include <iostream>
#include <bits/stdc++.h>
#include <stack>
using namespace std;
void print_stack(stack<int> s)
{
    while (!s.empty())
    {
        cout << s.top() << endl;
        s.pop();
    }
}
void PrintArray(vector<int> arr)
{

    for (int i = 0; i < arr.size(); i++)
    {

        cout << arr[i] << "  ";
    }
}

void largest_rectangle_area()
{
    // int height[]={2,3,4,2,6,5,4,5,3};//output 18
    int height[] = {7, 2, 8, 9, 1, 3, 6, 5}; // output 16
    int n = 7;
    vector<int> right(n);
    vector<int> left(n);
    stack<int> st;
    // right smaller find
    for (int i = 0; i < n; i++)
    {
        while (!st.empty() && height[st.top()] > height[i])
        {
            right[st.top()] = i;
            st.pop();
        }
        st.push(i);
    }
    while (!st.empty())
    {
        right[st.top()] = n;
        st.pop();
    }
    // left smaller find
    for (int i = n - 1; i >= 0; i--)
    {
        while (!st.empty() && height[st.top()] > height[i])
        {
            left[st.top()] = i;
            st.pop();
        }
        st.push(i);
    }
    while (!st.empty())
    {
        left[st.top()] = -1;
        st.pop();
    }

    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        ans = max(ans, height[i] * (right[i] - left[i] - 1));
    }
    cout << ans;
}

int main()
{
    largest_rectangle_area();
    return 0;
}