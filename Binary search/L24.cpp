#include <iostream>
using namespace std;
#include <bits/stdc++.h>

// 852. Peak Index in a Mountain Array
int peakIndexInMountainArray(vector<int> &arr)
{

    int s = 0, e = arr.size() - 1, mid;
    while (s <= e)
    {
        mid = e + (s - e) / 2;
        if (arr[mid] > arr[mid - 1] && arr[mid] > arr[mid + 1])
            return mid;
        if (arr[mid] > arr[mid - 1])
            s = mid + 1;
        else
            e = mid - 1;
    }
    return -1;
}

// 153. Find Minimum in Rotated Sorted
int findMin(vector<int> &arr)
{
    int n = arr.size();
    int s = 0, e = n - 1, ans = arr[0], mid;
    while (s <= e)
    {
        mid = s + (e - s) / 2;
        if (arr[mid] >= arr[0])
            s = mid + 1;
        else
        {
            ans = arr[mid];
            e = mid - 1;
        }
    }

    return ans;
}

// 33. Search in Rotated Sorted Array
int search(vector<int> &arr, int target)
{
    int n = arr.size();
    int s, e = n - 1, mid;
    while (s <= e)
    {
        mid = e + (s - e) / 2;
        if (arr[mid] == target)
            return mid;
        else if (arr[mid] >= arr[0])
        {
            if (arr[s] <= target && target <= arr[mid])
                e = mid - 1;
            else
                s = mid + 1;
        }
        else
        {
            if (arr[mid] <= target && target <= arr[e])
                s = mid + 1;
            else
                e = mid - 1;
        }
    }
    return -1;
}

// 1539. Kth Missing Positive Number
int findKthPositive(vector<int> &arr, int k)
{
    int num = 1;
    int i = 0;
    int n = arr.size();
    while (i < n && k > 0)
    {
        if (arr[i] == num)
            i++;
        else
            k--;
        num++;
    }
    while (k > 0)
    {
        num++;
        k--;
    }

    return num - 1;
}
int main()
{

    return 0;
}