#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;

void rotate(vector<int> &arr, int k)
{
    int n = arr.size();
    vector<int> arr2 = arr;
    k = k % n; // jitna baar bhi rotate karna hai k ke jagah put kar de
    for (int i = n - 1; i >= k; i--)
        arr[i] = arr[i - k];

    for (int i = 0; i < k; i++)
        arr[i] = arr2[n - k + i];
}

void rotate(vector<int> &arr, int k)
{
    int n = arr.size();
    vector<int> rotated(n);
    k = k % n;

    for (int i = 0; i < n; i++)
        rotated[(i + k) % n] = arr[i];//iss formula (i + k) % n se proper indexing milti hai

    for (int i = 0; i < n; i++)
        arr[i] = rotated[i];
}

int main()
{

    return 0;
}