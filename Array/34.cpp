#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
// Aggressive Cows

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
        // allocating stalls to cows and count how many cows get stalls
        for (int i = 1; i < n; i++)
        {
            if (pos + mid <= stalls[i])
            {
                count++;
                pos = stalls[i];
            }
        }
        // agar sare cow stall nhi mil paya to stalls ke bich ka gap kam karenge to e=mid-1
        if (count < k)
        {
            e = mid - 1;
        }
        // agar sare cow stall mil gaya to stalls ke bich ka gap ko increase  karenge to s=mid+1
        // aur answer ko store kar lenge ho sakta ho yahi maximum ho

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
    vector<int> stalls = {1, 2, 4, 8, 9};
    cout << aggressiveCows(stalls, 3);

    return 0;
}