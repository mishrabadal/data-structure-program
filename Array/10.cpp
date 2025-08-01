#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;

//gfg  https://www.geeksforgeeks.org/problems/peak-element/1

// You are given an array arr[l where no two adjacent elements are same, find the index of a
// peak element. An element is considered to be a peak if it is greater than its adjacent elements
// (if they exist).
// If there are multiple peak elements, Return index of any one of them. The output will
// be "true" if the index returned by your function is correct; otherwise, it will be "false".
// Note: Consider the element before the first element and the element after the last element to
// be negative infinity.

int peakElement(vector<int> &arr) {
        // Your code here
        int n = arr.size();
        
        // if array contains only one element
        if(n==1) {return 0;}
        
         // if array is in descending order
        if(arr[0]>arr[1]){
            return 0;
        }
        
        //if array is sorted in ascending order
        if(arr[n-1] > arr[n-2]){
            return n-1;
        }
        
        int low = 1,high = n-2;
        while(low<=high){
            int mid = low + (high-low)/2;
            
            if(arr[mid] > arr[mid - 1] && arr[mid] > arr[mid + 1])
            {
                return mid;
            }
        
            if(arr[mid] < arr[mid + 1]){
                low = mid + 1;
            }
            else{
                high = mid - 1;
                
            }
        }
        return false;
    }

// APPROACH 1 time :

// APPROACH 2 time :
// APPROACH 3 time :


int main()
{
    
    return 0;
}