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

int findMissing(vector<int> &arr)
{
    int diff1 = arr[1] - arr[0];
    int diff2 = arr[arr.size() - 1] - arr[arr.size() - 2];
    int diff;
    if (diff1 == diff2)
    {
        diff = diff1;
    }
    else
    {
        diff = diff1 < diff2 ? diff1 : diff2;
    }
    int a = arr[0];

    int n;
    for (int i = 1; i < arr.size(); i++)
    {
        // cout<<arr[i-1]+diff<<endl;
        if (arr[i] != arr[i - 1] + diff)
        {
            n = i + 1;
            break;
        }
    }
    cout << a + (n - 1) * diff;
    return 1;
}

void rotate(vector<int> &arr)
{

    int last = arr.back();
    vector<int> ans(arr.size());
    for (int i = 1; i < arr.size(); i++)
    {
        ans[i] = arr[i - 1];
    }
    cout << endl;
    ans[0] = last;

    for (int i = 0; i < arr.size(); i++)
        arr[i] = ans[i];

    for (auto i : arr)
        cout << i << " ";
}

int missingNumber(vector<int> &arr)
{
    sort(arr.begin(), arr.end());

    for (int i = 0; i < arr.size()+1; i++)
    {
        cout<<arr[i] <<"  "<<i + 1;
        cout<<endl;
        if (arr[i] != i + 1)
            return i + 1;
    }

    return arr.size()+1;
}
int main()
{
	cout<<"fhy";
    vector<int> arr = {1, 2, 3, 5}; //{2,4, 6, 8, 10,  14};
    cout << missingNumber(arr);

    return 0;
}
