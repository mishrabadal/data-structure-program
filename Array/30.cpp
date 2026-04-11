#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
// 1539. Kth Missing Positive Number in SORTED Array

// APPROACH 1  BRUTEFORCE O(N)
int findKthPositive(vector<int> &arr, int k)
{
    int n = arr.size();
    for (int i = 0; i < n; i++)
    {
        // agar element k se choota to k ko increment  karte raho
        if (arr[i] <= k)
            k++;
        else
            break;
    }
    return k;
}
// APPROACH 2 BRUTEFORCE O(N)
int _findKthPositive(vector<int> &arr, int k)
{
    int n = arr.size();
    int i = 0, num = 1;
    while (i < n && k > 0)
    {

        if (arr[i] == num)
            i++; // agar missing nhi hua to
        else
            k--; // agar missing hai to
        num++;   // num missing ho ya na ho increase hoga hi hoga always
    }
    // agar array ke andar me kth missing element nhi hai. to vo element outside of
    // array exist karega
    if (k > 0)
    {
        num = num + k;
    }
    return num - 1;
}

// APPROACH 3 optimal O(log.n)  codestorywithmik
int __findKthPositive(vector<int> &arr, int k)
{
    int n = arr.size();
    int s = 0, e = n - 1;
    int mid = -1;
    while (s <= e)
    {
        mid = s + (e - s) / 2;
        // kitne missing number hai till mid
        int missed_number = arr[mid] - (mid + 1);
        if (missed_number < k)
            s = mid + 1;
        else
            e = mid - 1;
    }
    return s + k;
}
int main()
{

    vector<int> arr = {1,2, 3, 11};
    int k = 5;
    cout<<findKthPositive(arr, k) ;
    return 0;
}