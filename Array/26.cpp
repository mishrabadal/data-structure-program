#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;

// Missing And Repeating
vector<int> findTwoElement(vector<int> &arr)
{
    int n = arr.size();
    int hash[n + 1] = {0};
    int repeating = -1, missing = -1;
    for (int i = 0; i < n; i++)
    {
        hash[arr[i]]++;
    }

    for (int i = 1; i <= n; i++)
    {
        if (hash[i] == 2)
            repeating = i;
        if (hash[i] == 0)
            missing = i;
        if (repeating != -1 and missing != -1)
            break;
    }
    cout<<repeating<<" "<<missing;
    return {repeating, missing};
}

int main()
{
vector<int>arr={4, 3, 6, 2, 1, 1};
findTwoElement(arr);
    return 0;
}