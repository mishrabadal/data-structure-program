#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
// Allocate Minimum Pages
// time complexity : N.log.n
// space complexity : O(1)
// 1. Everey student get atleast 1 book
// 2. Books will be allocated in contiguous order way
// 3. Out of all permutation student with most number of book get minimum pages
int findPages(vector<int> &arr, int k)
{

    // yaha par k: number of student
    // array ka size number of books ko represent kar rha hai
    // array ka element pages of book ko represent kar rha hai
    int n = arr.size();

    if (k > n)
        return -1;//agar student number of books se jyada ho to book distribute kar possible nhi hai . because atleast 1 book milna hi chahiye
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
        // count increment karne ka matlab hai book ab dusre student ko milega
        for (int i = 0; i < n; i++)
        {
            pages += arr[i];
            if (pages > mid)
            {

                count++;
                pages = arr[i];
            }
        }
        // yaha par less than "<" bata rha hai ki agr book ko
        // 4 log distribute kar sakte hai to 5 log me bhi distribute hoga
        // kyonki array ka size number of student se bara hai ya phir barabar hoga
        // small vala case upar hi handle ho chuka hai.
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