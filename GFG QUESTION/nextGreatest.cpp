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
    return {repeating, missing};
}

// Indexes of Subarray Sum
int removeDuplicates(vector<int> &arr)
{

    int prev = arr[0];
    int count = 1;
    vector<int> ans;
    ans.push_back(prev);
    for (int i = 1; i < arr.size(); i++)
    {

        if (arr[i] == prev)
            continue;
        prev = arr[i];
        ans.push_back(prev);
        count++;
    }
    arr.clear();

    for (int i = 0; i < ans.size(); i++)
    {
        arr.push_back(ans[i]);
    }
    return count;
}

vector<int> subarraySum(vector<int> &arr, int target)
{
    int n = arr.size();
    int j = 0;
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];

        while (sum > target && j < i)
            sum -= arr[j++];
        if (sum == target)
            return {j + 1, i + 1};
    }
    return {-1};
}

// Function to find equilibrium point in the array.
int findEquilibrium(vector<int> &arr)
{
    // code here
    int n = arr.size(), left = 0, right = 0;
    for (int x : arr)
        right += x;

    for (int i = 0; i < n; i++)
    {
        right -= arr[i];
        if (left == right)
            return i;
        left += arr[i];
    }
    return -1;
}

// Alternate Positive Negative

void rearrange(vector<int> &arr)
{
    vector<int> positive, negative;
    for (auto x : arr)
    {
        if (x >= 0)
            positive.push_back(x);
        else
            negative.push_back(x);
    }
    int i = 0, j = 0, k = 0;

    while (i < positive.size() and j < negative.size())
    {
        if (k % 2 == 0)
            arr[k++] = positive[i++];
        else
            arr[k++] = negative[j++];
    }
    while (i < positive.size())
        arr[k++] = positive[i++];
    while (j < negative.size())
        arr[k++] = negative[j++];
}

// Union of 2 Sorted with Duplicates
vector<int> findUnion(vector<int> &a, vector<int> &b)
{
    // Your code here

    // return vector with correct order of elements
    vector<int> merge, ans;
    for (auto x : a)
        merge.push_back(x);
    for (auto x : b)
        merge.push_back(x);
    sort(merge.begin(), merge.end());

    int prev = merge[0];
    ans.push_back(prev);

    for (auto x : merge)
    {
        if (x == prev)
            continue;
        prev = x;
        ans.push_back(x);
    }
    return ans;
}

// Three way partitioning
void threeWayPartition(vector<int> &arr, int a, int b)
{
    // code here
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

int unvisitedLeaves(int N, int leaves, int frogs[])
{
    vector<bool> visited(leaves + 1);
    for (int j = 0; j < N; j++)
    {
        int x = frogs[j];
        int i = 1;
        while (i * x <= leaves)
        {
            visited[i * x] = true;
            i++;
        }
    }
    int count = 0;
    for (auto x : visited)
    {
        if (x == 0)
            count++;
    }
    return count - 1;
}
int main()
{
    vector<int> arr = {891, 71, 185, 651, 518};
    sort(arr.begin(), arr.end());
    int n = arr.size();
    vector<int> ans;
    int i = 0, j = n - 1;

    if (n % 2 == 0)
    {
        while (i <= j)
        {
            ans.push_back(arr[j--]);
            ans.push_back(arr[i++]);
        }
    }
    else
    {
        while (i < j)
        {
            ans.push_back(arr[j--]);
            ans.push_back(arr[i++]);
        }
    }
    for (auto x : ans)
        cout << x << " ";
    return 0;
}
