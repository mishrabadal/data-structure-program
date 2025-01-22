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

    for (int i = 0; i < arr.size() + 1; i++)
    {
        cout << arr[i] << "  " << i + 1;
        cout << endl;
        if (arr[i] != i + 1)
            return i + 1;
    }

    return arr.size() + 1;
}

// brute force
vector<int> findTwoElement_m1(vector<int> &arr)
{
    vector<int> ans;
    int n = arr.size();
    int repeating = -1, missing = -1;
    for (int i = 1; i <= n; i++)
    {
        int count = 0;
        for (int j = 0; j < n; j++)
        {
            if (arr[j] == i)
                count++;
        }
        if (count == 2)
            repeating = i;
        if (count == 0)
            missing = i;

        if (repeating != -1 && missing != -1)
            break;
    }
    ans.push_back(repeating);
    ans.push_back(missing);
    cout << repeating << " " << missing;
    return ans;
}

vector<int> findTwoElement(vector<int> &arr)
{
    vector<int> ans;
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
        if (repeating != -1 && missing != -1)
        break;
    }
     cout << repeating << " " << missing;
return {repeating,missing};
}
int main()
{
    vector<int> arr = {2, 2};

    findTwoElement(arr);

    return 0;
}
