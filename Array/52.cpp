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
                //agar i j k index ka sum target se kam hai to j aur k ke bich jitna element hoga uska
                //i j ke sath bhi sum target se kam h hoga so k-j
                
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