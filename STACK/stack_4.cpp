#include <iostream>
#include <bits/stdc++.h>
#include <stack>
using namespace std;

// time complexity O(n)
// largest rectangle in histogram
void largest_rectangle_area()
{
    // int heights[]={2,3,4,2,6,5,4,5,3};//output 18
    int heights[] = {7, 2, 8, 9, 1, 3, 6, 5}; // output 16
    int n = 8;
    vector<int> right(n);

    vector<int> left(n);
    stack<int> st;
    // right smaller find
    for (int i = 0; i < n; i++)
    {
        while (!st.empty() && heights[st.top()] > heights[i])
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
        while (!st.empty() && heights[st.top()] > heights[i])
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
        ans = max(ans, heights[i] * (right[i] - left[i] - 1));
    }
    cout << ans;
}

void largest_rectangle_area_m2()
{
    // int heights[]={2,3,4,2,6,5,4,5,3};//output 18
    int heights[] = {2, 1, 5, 6, 2, 3}; // output 10
    int n = 6;
    int ans = 0;
    int index;
    stack<int> st;
    for (int i = 0; i < n; i++)
    {
        while (!st.empty() && heights[st.top()] > heights[i])
        {
            index = st.top();
            st.pop();
            if (!st.empty())
                ans = max(ans, heights[index] * (i - st.top() - 1));
            else
                ans = max(ans, heights[index] * i);
        }
        st.push(i);
    }

    while (!st.empty())
    {
        index = st.top();
        st.pop();
        if (!st.empty())
            ans = max(ans, heights[index] * (n - st.top() - 1));
        else
            ans = max(ans, heights[index] * n);
    }
    cout << ans;
}

// this method is used by maximalRectangle() so do not write this on notebook
int Rect_area(vector<int> heights)
{
    int n = heights.size();
    int ans = 0;
    int index;
    stack<int> st;
    for (int i = 0; i < n; i++)
    {
        while (!st.empty() && heights[st.top()] > heights[i])
        {
            index = st.top();
            st.pop();
            if (!st.empty())
                ans = max(ans, heights[index] * (i - st.top() - 1));
            else
                ans = max(ans, heights[index] * i);
        }
        st.push(i);
    }

    while (!st.empty())
    {
        index = st.top();
        st.pop();
        if (!st.empty())
            ans = max(ans, heights[index] * (n - st.top() - 1));
        else
            ans = max(ans, heights[index] * n);
    }
    return ans;
}

int maximalRectangle()
{

    vector<vector<char>> matrix = {
        {'1', '0', '1', '0', '0'},
        {'1', '0', '1', '1', '1'},
        {'1', '1', '1', '1', '1'},
        {'1', '0', '0', '1', '0'}};
    int ans = 0;
    int row = matrix.size();
    int col = matrix[0].size();
    vector<int> heights(col, 0);
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (matrix[i][j] == '0')
                heights[j] = 0;
            else
                heights[j]++;
        }
        ans = max(ans, Rect_area(heights));
    }
    return ans;
}

int main()
{
cout<<maximalRectangle();
    //cout << maximalRectangle();
    return 0;
}