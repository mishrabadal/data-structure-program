#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
// Four Elements sums equal to target

bool find4Numbers(int arr[], int n, int target)
{
    // Sorting the array in ascending order
    sort(arr, arr + n);
    for (int i = 0; i < n - 1; i++)
    {

        for (int j = i + 1; j < n; j++)
        {

            int k = j + 1, l = n - 1;
            while (k < l)
            {
                int sum = arr[i] + arr[j] + arr[k] + arr[l];
                if (sum == target)
                    return true;
                if (sum > target)
                    l--;
                else
                    k++;
            }
        }
    }
    return false;
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6};
    cout << find4Numbers(arr, 6, 50);
    return 0;
}