#include <iostream>
#include <utility>
#include <vector>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;

pair<int, int> countOddEven(vector<int> &arr)
{
    pair<int, int> ans;
    int odd = 0, even = 0;

    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] % 2 != 0)
            odd++;
        else
            even++;
    }

    ans.first = odd;
    ans.second = even;
    return ans;
}

vector<int> findUnion(vector<int> &a, vector<int> &b)
{
    vector<int> ans;
    for (int i = 0; i < a.size(); i++)
    {
        ans.push_back(a[i]);
    }

    for (int i = 0; i < b.size(); i++)
    {
        ans.push_back(b[i]);
    }
    sort(ans.begin(), ans.end());

    vector<int> temp;
    temp.push_back(ans[0]);

    for (int i = 1; i < ans.size(); i++)
    {

        if (ans[i] == temp.back())
            continue;       
        else       
            temp.push_back(ans[i]);
        
    }
    for (auto i : temp)
        cout << i << " ";
    return temp;
}

int main()
{

    vector<int> a = {1, 2, 3, 4, 5};
    vector<int> b = {1, 2, 3, 6,7};
    // cout<<b.front()<<endl<<b.back();
    findUnion(a, b);
    // defining a pair

    return 0;
}