#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
// Rearrange an array with O(1) extra space

void arrange(vector<long long> &arr)
{
    //  code here
    // Your code here
    int n = arr.size();

    vector<long long> b(n);
    for (int i = 0; i < n; i++)
        b[i] = arr[arr[i]];
    for (int i = 0; i < n; i++)
        arr[i] = b[i];
}

void arrange(vector<long long> &A)
{
    long long n = A.size();

    for (int i = 0; i < n; i++)
    {
        int x = A[i];     // current value of array
        int y = A[x] % n; // getting older value of array
        A[i] = x + y * n; // storing encoded value in original array
    }
    for (int i = 0; i < n; i++)
    {
        A[i] = A[i] / n; // getting new value and storing in same array  which is transformed value
    }
}
int main()
{

    return 0;
}