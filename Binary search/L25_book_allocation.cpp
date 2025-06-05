#include <iostream>
using namespace std;
#include <bits/stdc++.h>
// allocate minimum pages
int findPages(vector<int> &A, int M)
{
    int N = A.size();
    // code here
    if (M > N)
        return -1;
    int start = 0, end = 0, mid, ans;
    for (int i = 0; i < N; i++)
    {
        start = max(start, A[i]);
        end += A[i];
    }
    while (start <= end)
    {
        mid = start + (end - start) / 2;
        int pages = 0, count = 1;
        for (int i = 0; i < N; i++)
        {
            pages += A[i];
            if (pages > mid)
            {
                count++;
                pages = A[i];
            }
        }
        if (count <= M)
        {
            ans = mid;
            end = mid - 1;
        }
        else
            start = mid + 1;
    }
    return ans;
}

// The Painter's Partition Problem-II
int minTime(vector<int> &A, int M)
{
    int N = A.size();

    int start = 0, end = 0, mid, ans;
    for (int i = 0; i < N; i++)
    {
        if (start < A[i])
            start = A[i];
        end += A[i];
    }
    while (start <= end)
    {
        mid = start + (end - start) / 2;
        int pages = 0, count = 1;
        for (int i = 0; i < N; i++)
        {
            pages += A[i];
            if (pages > mid)
            {
                count++;
                pages = A[i];
            }
        }
        if (count <= M)
        {
            ans = mid;
            end = mid - 1;
        }
        else
            start = mid + 1;
    }
    return ans;
}

// 1011. Capacity To Ship Packages Within D Days
int shipWithinDays(vector<int> &A, int M)
{

    int N = A.size();

    int start = 0, end = 0, mid, ans;
    for (int i = 0; i < N; i++)
    {
        if (start < A[i])
            start = A[i];
        end += A[i];
    }
    while (start <= end)
    {
        mid = start + (end - start) / 2;
        int pages = 0, count = 1;
        for (int i = 0; i < N; i++)
        {
            pages += A[i];
            if (pages > mid)
            {
                count++;
                pages = A[i];
            }
        }
        if (count <= M)
        {
            ans = mid;
            end = mid - 1;
        }
        else
            start = mid + 1;
    }
    return ans;
}
int main()
{

    return 0;
}