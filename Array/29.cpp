#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
// 33. Search in Rotated Sorted Array
// APPROACH 1 : bruteforce O(n)
int search(vector<int> &arr, int target)
{
    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] == target)
            return i;
    }
    return -1;
}
// APPROACH : optimal  O(log.n)
int search(vector<int> &arr, int target)
{
    int n = arr.size();
    int s, e = n - 1, mid;
    while (s <= e)
    {
        mid = e + (s - e) / 2;
        // agar mid target ke sath match kar gaya to mid return kar do
        if (arr[mid] == target)
            return mid;
        // kya array left side me sorted hai
        else if (arr[mid] >= arr[0])
        {
            // kya target start aur mid ke range me aata hai
            // agar aata hai to end ko left move karo
            if (arr[s] <= target && target <= arr[mid])
                e = mid - 1;
            // agar range ke andar me target nhi aata hai to right side
            // ko move kar jao
            else
                s = mid + 1;
        }
        // kya array right side me sorted hai
        else
        {
            // kya target mid aur end ke range me aata hai
            // agar aata hai to start ko right side move karo
            if (arr[mid] <= target && target <= arr[e])
                s = mid + 1;
            // agar target mid aur end ke range me NHI aata hai
            //  end ko left side move karo
            else
                e = mid - 1;
        }
    }
    return -1;
}

int main()
{

    return 0;
}