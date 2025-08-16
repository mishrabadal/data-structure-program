#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
//Aggressive Cows

int aggressiveCows(vector<int> &stalls, int k)
{
    int s = 0, e, mid, ans, n = stalls.size();

    // sort them in increasing order
    sort(stalls.begin(), stalls.end());
    e = stalls[n - 1] - stalls[0];
    while (s <= e)
    {
        mid = s + (e - s) / 2;
        int count = 1, pos = stalls[0];
        for (int i = 1; i < n; i++)
        {
            if (pos + mid <= stalls[i])
            {
                count++;
                pos = stalls[i];
            }
        }
        // agar sare cow ko stall nhi mil paya to range ko chhota karenge
        if (count < k)
        {
            e = mid - 1;
        }
        // agar mil jaye to ans ko store kar lenge aur distance bara find karne ke liye
        // s=mid+1 karenge
        else
        {
            ans = mid;
            s = mid + 1;
        }
    }
    return ans;
}

int main()
{

    return 0;
}