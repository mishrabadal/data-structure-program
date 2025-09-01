#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
//Three way partitioning

void threeWayPartition(vector<int> &arr, int a, int b)
{
    vector<int> first, middle, last;
    for (auto x : arr)
    {
        if (x < a)
            first.push_back(x);
        if (x >= a and x <= b)
            middle.push_back(x);
        if (x > b)
            last.push_back(x);
    }

    int i = 0, k = 0;
    for (auto x : first)
        arr[k++] = first[i++];

    i = 0;
    for (auto x : middle)
        arr[k++] = middle[i++];

    i = 0;
    for (auto x : last)
        arr[k++] = last[i++];
}

int main()
{

    return 0;
}