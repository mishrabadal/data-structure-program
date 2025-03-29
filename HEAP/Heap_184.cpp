#include <iostream>
using namespace std;
#include <bits/stdc++.h>
// Height of Heap
int heapHeight(int N, int arr[])
{
    if (N == 1)
        return 1;
    int height = 0;
    while (N > 1)
    {
        height++;
        N /= 2;
    }
    return height;
}
// Minimum Cost of ropes
int minCost(vector<int> &arr)
{
    int n = arr.size();
    priority_queue<int, vector<int>, greater<int>> p;
    for (int i = 0; i < n; i++)
        p.push(arr[i]);
    int cost = 0;
    while (p.size() > 1)
    {
        int rope = p.top();
        p.pop();
        rope += p.top();
        p.pop();
        cost += rope;
        p.push(rope);
    }
    return cost;
}

// interview bit question
// Magician and Chocolates
int nchoc(int A, vector<int> &B)
{
    // max heap
    priority_queue<int> p;
    for (int i = 0; i < B.size(); i++)
        p.push(B[i]);
    long long MaxChoc = 0;
    while (A && (!p.empty()))
    {
        MaxChoc += p.top();
        if (p.top() / 2)
            p.push(p.top() / 2);
        p.pop();
        A--;
    }
    return MaxChoc % 1000000007;
}
// Last Stone Weight
int lastStoneWeight(vector<int> &stones)
{
    priority_queue<int> p;
    for (int i = 0; i < stones.size(); i++)
        p.push(stones[i]);
    while (p.size() > 1)
    {
        int weight = p.top();
        p.pop();
        weight -= p.top();
        p.pop();
        if (weight)
            p.push(weight);
    }
    return p.empty() ? 0 : p.top();
}
// Profit Maximisation
int solve(vector<int> &A, int B)
{
    int sum = 0;
    priority_queue<int> p; // max heap
    for (int i = 0; i < A.size(); i++)
    {
        p.push(A[i]);
    }
    // set the ticket to B people
    while (B && !p.empty())
    {
        sum += p.top();
        if (p.top() - 1)
            p.push(p.top() - 1);
        p.pop();
        B--;
    }
    return sum;
}
int main()
{

    return 0;
}