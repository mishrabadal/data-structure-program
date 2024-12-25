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

// Brute force approach ; O(n^2)
void next_greater_element()
{
    int arr[] = {8, 6, 4, 7, 4, 9, 10, 8, 12};
    int n = 9; // size
    vector<int> ans(n, -1);
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] > arr[i])
            {
                ans[i] = arr[j];
                break;
            }
        }
    }
    PrintArray(ans);

    // output
    //   9  7  7  9  9  10  12  12  -1
}

// method 2

void next_greater_element_m2()
{
    int arr[] = {8, 6, 4, 7, 4, 9, 10, 8, 12};
    int n = 9; // size
    vector<int> ans(n, -1);
    stack<int> st;

    for (int i = 0; i < n; i++)
    {
        while (!st.empty() && arr[st.top()] < arr[i])
        {
            ans[st.top()] = arr[i];
            st.pop();
        }
        st.push(i);
    }

    PrintArray(ans);

    // output
    //   9  7  7  9  9  10  12  12  -1
}
// check towards right side
void next_smaller_element()
{
    int arr[] = {7, 9, 12, 10, 14, 8, 3, 6, 9};
    int n = 9; // size
    vector<int> ans(n, -1);
    stack<int> st;

    for (int i = 0; i < n; i++)
    {
        while (!st.empty() && arr[st.top()] > arr[i])
        {
            ans[st.top()] = arr[i];
            st.pop();
        }
        st.push(i);
    }

    PrintArray(ans);

    // output
    //  -1  4  4  4  5  5  7  5
}

void smallest_number_on_left()
{
    int arr[] = {4, 13, 11, 5, 9, 7, 8, 6};
    int n = 8; // size
    vector<int> ans(n, -1);
    stack<int> st;

    for (int i = n - 1; i >= 0; i--)
    {
        while (!st.empty() && arr[st.top()] > arr[i])
        {
            ans[st.top()] = arr[i];
            st.pop();
        }
        st.push(i);
    }

    PrintArray(ans);

    // output
    // -1  4  4  4  5  5  7  5
}

void calculate_stock_Span()
{
    int price[] = {100, 80, 60, 70, 60, 75, 85};
    int n = 7; // size
    vector<int> ans(n);
    stack<int> st;

    for (int i = n - 1; i >= 0; i--)
    {
        while (!st.empty() && price[i] > price[st.top()])
        {
            ans[st.top()] = st.top() - i;
            st.pop();
        }
        st.push(i);
    }
    while (!st.empty())
    {
        ans[st.top()] = st.top() + 1;
        st.pop();
    }
    PrintArray(ans);

    // output
    // 1  1  1  2  1  4  6
}

int main()
{
    calculate_stock_Span();

    return 0;
}