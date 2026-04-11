#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;

//35. Search Insert Position
int searchInsert(vector<int> &arr, int target)
{
    int n = arr.size();
    int s = 0, e = n - 1;
    //if not get any insert position in between than it will insert on last index so ans=n
    int ans = n;
    while (s <= e)
    {
        int mid = s + (e - s) / 2;
        if (arr[mid] == target)
        {
            ans = mid;
            return ans;
        }

        else if (arr[mid] < target)
            s = mid + 1;

        else
        {
        //yaha par array ke size ko towards left size minimize kar rahe hai isi liye
        // ans ke andar mid ko store kiya hai
            ans = mid;
            e = mid - 1;
        }
    }
    return ans;
}


int main()
{

    return 0;
}