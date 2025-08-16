#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
// The Painter's Partition Problem-II
int minTime(vector<int> &arr, int k)
{
    // yaha par k: number of painter
    // array ka size number of walls ko represent kar rha hai
    // array ka element length of wall  ko represent kar rha hai
    int n = arr.size();

    int s = 0, e = 0, mid, ans;

    // start max of array ko store krega
    // end sum of array ko store karega
    for (int i = 0; i < n; i++)
    {
        s = max(s, arr[i]);
        e += arr[i];
    }

    while (s <= e)
    {
        mid = s + (e - s) / 2;
        int pages = 0, count = 1;
        // count increment karne ka matlab hai wall ab dusre painter ko milega
        for (int i = 0; i < n; i++)
        {
            pages += arr[i];
            if (pages > mid)
            {

                count++;
                pages = arr[i];
            }
        }
        // yaha par less than "<" bata rha hai ki agr wall ko
        // 4 log paint kar sakte hai to 5 log me bhi paint hoga
        // kyonki array ka size number of painter se bara hai ya phir barabar hoga

        if (count <= k)
        {
            ans = mid;
            e = mid - 1;
        }
        else
            s = mid + 1;
    }
    return ans;
}

int main()
{

    return 0;
}