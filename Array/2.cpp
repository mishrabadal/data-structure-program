#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
// Given an array of positive integers arr[],
// return the second largest element from the array.
// If the second largest element doesn't exist then return -1.
// Note: The second largest element should not be equal to the largest element.

// APPROACH 1 O(N.logn)
int getSecondLargest(vector<int> &arr)
{

    sort(arr.begin(), arr.end());
    int n = arr.size();
    int largest = arr[n - 1];
    int secondLargest = -1;
    for (int i = n - 2; i >= 0; i--)
    {
        if (arr[i] != largest)
        {
            secondLargest = arr[i];
            return secondLargest;
        }
    }
    return secondLargest;
}

// APPROACH 2 O(2n)
int getSecondLargest(vector<int> &arr)
{
    int n = arr.size();
    int first = arr[0];
    // first largest element
    for (int i = 1; i < n; i++)
    {
        first = max(arr[i], first);
    }
    // first largest element
    int second = -1;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] != first)
            second = max(arr[i], second);
    }
    return second;
}


// APPROACH 3 O(n)
int getSecondLargest(vector<int> &arr)
{

    int n = arr.size();
    int largest = arr[0];
    int slargest = -1;
    for (int i = 1; i < n; i++)
    {
        if (arr[i] > largest)
        {
            slargest = largest;
            largest = arr[i];
        }
        if (arr[i] < largest && arr[i] > slargest)
        {
            slargest = arr[i];
        }
    }
    return slargest;
}
int main()
{
    vector<int> arr = {12, 35, 1, 10, 34, 1};
    cout << getSecondLargest(arr);

    return 0;
}