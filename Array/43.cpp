#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
// Missing element of AP
int findMissing(vector<int> &arr)
{
    int n = arr.size();
    // HERE d is common difference
    int d = arr[1] - arr[0];

    for (int i = 0; i < n - 1; i++)
    {

        int diff = arr[i + 1] - arr[i];

        // agar dono element ka difference commomn difference ke equal nhi hai
        // to iska matlab missing hai aur missing element arr[i+1]-d (MAGIC STATEMENT)
        // or
        // arr[i]+d use tab hoga jab second element missing na ho
        if (d != diff)
        {
            return arr[i + 1] - d;
        }
    }
    return arr[n - 1] + d;
}
int main()
{
    vector<int> arr = {8, 4, 2, 0};
    cout << findMissing(arr);
    return 0;
}