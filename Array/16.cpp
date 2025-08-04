#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;

//Segregate 0s and 1s

//approach 1 O(n)
 void segregate0and1(vector<int> &arr) {
        int n = arr.size();
        int zero=0,one=0;
        for(int i=0;i<n;i++)
        {
            if(arr[i]==0) zero++;
            else one++;
        }
        for(int i=0;i<zero;i++)
        arr[i]=0;
        for(int i=zero;i<n;i++)
        arr[i]=1;
        
    }

//approach O(log.n)
void segregate0and1(vector<int> &arr) {
        int n = arr.size();
        int s =0,e=n-1;
        while(s<e)
        {
            if(arr[s]==0)
            s++;
            else
            {
                if(arr[e]==0)
                    swap(arr[s++],arr[e--]);
                else
                    e--;
            }
        }
        
    }
int main()
{
    
    return 0;
}