#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
// Smaller Than Triplet Sum
int threeSumSmaller(int n, vector<int> arr, int target)
{
    sort(arr.begin(), arr.end());
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        int j = i + 1, k = n - 1;

        while (j < k)
        {
            int s = arr[i] + arr[j] + arr[k];
            if (s < target)
            {
                count += k - j;
                j++;
            }
            else
            {
                k--;
            }
        }
    }
    return count;
}

int main()
{

    return 0;
}