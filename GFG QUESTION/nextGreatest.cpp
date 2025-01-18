#include <iostream>
#include <bits/stdc++.h>
using namespace std;
vector<int> nextGreatest(vector<int> arr)
{
    int max = -1;
    for (int i = arr.size() - 1; i >= 0; i--)
    {
        int temp = max;
        if (arr[i] > temp)
        {
            temp = arr[i];
        }
        arr[i] = max;
        max = temp;
    }
    for (auto i : arr)
        cout << i << " ";
    return arr;
}
int main()
{
    vector<int> arr = {16, 17, 4, 3, 5, 2};
    nextGreatest( arr);


    return 0;
}