#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
// 153. Find Minimum in Rotated Sorted Array
//APPROACH : BRUTE FORCE LOG.N

//this is very simple method for finding minimum using min method
int findMin(vector<int> &arr)
{
    int n = arr.size();
    int ans = INT_MAX;
    for (auto it : arr)
        ans = min(ans, it);
    return ans;
}

//APPROACH 2 OPTIMAL LOG.N

//do jagah par sorted hogaa but dono jagah par sirf ek hi typing ka sorting milega either ascending or descending (4,5,6,7,0,1,2:ascending sorted order) and(4,3,2,1,0,6,5:descending sorted order)
int findMin(vector<int> &arr)
{
    int n = arr.size();
    int s = 0, e = n - 1, ans = arr[0], mid;
    while (s <= e)
    {
        mid = s + (e - s) / 2;
        // left side me sorted hai to right side jao
        if (arr[mid] >= arr[0])
            s = mid + 1;

        // right side me sorted hai to left side jao aur ans ko store karke rakh lo
        else
        {
            ans = arr[mid];
            e = mid - 1;
        }
    }

    return ans;
}
int main()
{

    return 0;
}