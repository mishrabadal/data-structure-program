#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
// Rotate Array by One
void _rotate(vector<int> &arr)
{
    // code here
    int n = arr.size();
    int last = arr.back();
    for (int i = n - 1; i >= 1; i--)
        arr[i] = arr[i - 1];
    arr[0] = last;
}

// rotate array by k times
void rotate(vector<int> &arr)
{
    // code here
    int n = arr.size();
    int s_last = arr[n - 2];
    int last = arr.back();
    vector<int> arr2 = arr;

    // jitna time rotate karna hai utna value ex:2

    int x = 1 % n; // jitna baar bhi rotate karna hai 2 ke jagah put kar de
    for (int i = n - 1; i >= x; i--)
        arr[i] = arr[i - x];

    // yaha par bhi 2 i<2;
    for (int i = 0; i < x; i++)
        arr[i] = arr2[n - x + i];
}

void rotate(vector<int> &arr, int k)
{
    int n = arr.size();
    k = k % n;
    reverse(arr.begin(), arr.begin() + n - k);
    reverse(arr.begin() + n - k, arr.end());
    reverse(arr.begin(), arr.end());
}

int main()
{
    vector<int> arr = {1, 2, 3, 4, 5};
    rotate(arr);
    for (auto it : arr)
        cout << it << " ";
    return 0;
}