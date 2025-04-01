#include <iostream>
using namespace std;
#include <bits/stdc++.h>
class Node
{
public:
    int data;
    Node *next;
    Node(int value)
    {
        data = value;
        next = NULL;
    }
};
// Smallest Range Covering Elements from K Lists leetcode hard problem
vector<int> smallestRange(vector<vector<int>> &nums)
{
    // min heap
    pair<int, pair<int, int>>;
    priority_queue<pair<int, pair<int, int>>, vector<pair<int, pair<int, int>>>, greater<pair<int, pair<int, int>>>> p;
    int minimum, maximum = INT_MIN;
    // insert first element of each row into heap
    for (int i = 0; i < nums.size(); i++)
    {
        p.push(make_pair(nums[i][0], make_pair(i, 0)));
        maximum = max(maximum, nums[i][0]);
    }
    minimum = p.top().first;
    vector<int> ans(2);
    ans[0] = minimum;
    ans[1] = maximum;
    pair<int, pair<int, int>> temp;
    int row, col, elem;
    while (p.size() == nums.size())
    {
        temp = p.top();
        p.pop();
        elem = temp.first;
        row = temp.second.first;
        col = temp.second.second;
        if (col + 1 < nums[row].size())
        {
            col++;
            p.push(make_pair(nums[row][col], make_pair(row, col)));
            maximum = max(maximum, nums[row][col]);
            minimum = p.top().first;

            // if i got smallest range
            if (maximum - minimum < ans[1] - ans[0])
            {
                ans[0] = minimum;
                ans[1] = maximum;
            }
        }
    }
    return ans;
}

// Construct Target Array With Multiple Sums leetcode hard problem
bool isPossible(vector<int> &target)
{
    // maxheap
    priority_queue<long long> p;
    long long sum = 0;
    for (int i = 0; i < target.size(); i++)
    {
        p.push(target[i]);
        sum += target[i];
    }
    long long MaxEle, RemSum, Element;
    while (p.top() != 1)
    {
        MaxEle = p.top();
        p.pop();
        RemSum = sum - MaxEle;
        // maxElem = Remsum +Element;
        // edge cases
        if (RemSum <= 0 || RemSum >= MaxEle)
            return 0;
        // changes will coour here
        Element = MaxEle % RemSum;
        if (Element == 0)
        {
            if (RemSum != 1)
                return 0;
            else
                return 1;
        }

        sum = RemSum + Element;
        p.push(Element);
    }
    return 1;
}

int main()
{
    cout << "hello";
    return 0;
}