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

//Brute force approach ; O(n^2)
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

//method 2

void next_greater_element_m2()
{
    int arr[] = {8, 6, 4, 7, 4, 9, 10, 8, 12};
    int n = 9; // size
    vector<int> ans(n, -1);
    stack<int>st;

    for (int i = 0; i < n; i++)
    {
       while(!st.empty() && arr[st.top()]<arr[i])
       {
        ans[st.top()]=arr[i];
        st.pop();
       }
       st.push(i);
    }
    
    PrintArray(ans);

    // output
    //   9  7  7  9  9  10  12  12  -1
}
int main()
{
    next_greater_element_m2();

    return 0;
}