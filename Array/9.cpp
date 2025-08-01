#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
//34. Find First and Last Position of Element in Sorted Array
// APPROACH 1 time :
 vector<int> searchRange(vector<int>& arr, int target) {
        int n = arr.size();
        int s=0,e=n-1;
        int first=-1,last=-1;

        //finding first element 
        while(s<=e)
        {
            int mid = s+(e-s)/2;
            if(arr[mid]==target)
            {
                first = mid;
                e = mid-1;
            }
            else if(arr[mid]<target)
                s= mid+1;

            else
            e=mid-1;

        }


        //finding last element 
        s=0,e=n-1;
        while(s<=e)
        {
            int mid = s+(e-s)/2;
            if(arr[mid]==target)
            {
                last = mid;
                s = mid+1;
            }
            else if(arr[mid]<target)
                s= mid+1;

            else
            e=mid-1;

        }

        return {first,last};
    }
// APPROACH 2 time :
// APPROACH 3 time :


int main()
{
    
    return 0;
}