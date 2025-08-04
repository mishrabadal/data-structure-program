#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
//69. Sqrt(x)

//Given a non-negative integer x, return the square root of x rounded down to the nearest integer. The returned integer should be non-negative as well.
   int mySqrt(int x) {

    int s = 0, e = x;
    int ans ;
    while (s <= e)
    {
        int mid = s + (e - s) / 2;
        if(x<2)
        return x;
        if (mid==x/mid)
        {
            ans = mid;
           break;
        }

        else if (mid < x/mid)
            {
                ans = mid;
                s=mid+1;
            }

        else
            e = mid - 1;
        
    }
    return ans;
    }


int main()
{
    
    return 0;
}