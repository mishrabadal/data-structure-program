#include <iostream>
#include <bits/stdc++.h>
#include <stack>
using namespace std;

// Maximum of minimum for every window size

void maxOfMin()
{
    // Your code here
    vector<int> arr = {10, 20, 30, 50, 10, 70, 30};
    int n = arr.size();
    vector<int> ans(n, 0);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i; j++)
        {
            int num = INT_MAX;
            for (int k = j; k < i + 1 + j; k++)
            {
                num = min(num, arr[k]);
            }
            ans[i] = max(ans[i], num);
        }
    }
    for (auto i : ans)
        cout << i << " ";
}

int main()
{

    maxOfMin();
    
    return 0;
}