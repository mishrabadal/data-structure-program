#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
//Find Pair Given Difference 
// APPROACH 1 n^2  TLE
 bool findPair(vector<int> &arr, int target) {
    int n = arr.size();
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] - arr[j] == target || arr[j] - arr[i] == target)
            {
                return true;
            }
        }
    }
     return false;   
    }
// APPROACH 2 log n Time limit exceeds
bool findPair(vector<int> &arr, int target) {
    int n = arr.size();
    sort(arr.begin(),arr.end());
    for(int i=0;i<n;i++)
    {
        int A =arr[i];
        int B= target+A;
        int s=i+1, e=n-1;
        
        while(s<=e)
        {
            int mid =s+(e-s)/2;
            
            if(arr[mid]==B) return true;
            else if(arr[mid]<B) s++;
            else e--;
        }
        
    }
    return false;
    }

// APPROACH 3 O(n log n)

  bool findPair(vector<int> &arr, int target) {
    int n = arr.size();
    sort(arr.begin(),arr.end());
    
        int s=0,e=1;
        while(e<n )
        {
           if(arr[e]-arr[s]==target) return true;
           else if(arr[e]-arr[s]<target) e++;
           else s++;
           
           if(s==e)
           e++;
        }
        
    
    return false;
    }

int main()
{
    
    return 0;
}