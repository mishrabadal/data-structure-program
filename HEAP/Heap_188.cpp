#include <iostream>
using namespace std;
#include <bits/stdc++.h>
//Kth Smallest elemnt in a array
int kthSmallest(vector<int> &arr, int k) {
    int l=0;
    int r=arr.size()-1;
    priority_queue<int>p;
    for(int i=0;i<k;i++)
    p.push(arr[i]);

    for(int i=k;i<=r;i++)
    {
        if(arr[i]<p.top())
        {
            p.pop();
            p.push(arr[i]);
        }
    }
    return p.top();
}
//Kth Largest Element in an Array
int findKthLargest(vector<int>& nums, int k) {
    //min heap
    priority_queue<int, vector<int>, greater<int>>p;
    //k element ko insert karo
    for(int i=0;i<k;i++)
    p.push(nums[i]);

    for(int i=k;i<nums.size();i++)
    {
        if(nums[i]>p.top())
        {
            p.pop();
            p.push(nums[i]);
        }
    }
return p.top();    
}
//Sum of elements between k1'th and k2'th smallest elements
long long sumBetweenTwoKth( long long A[], long long N, long long K1, long long K2)
    {
        //max heap
        priority_queue<long long>p1;
        priority_queue<long long>p2;
        //insert k1 element into p1
        for(long long i=0;i<K1;i++)
        p1.push(A[i]);
        //insert k2-1 element into p2
        for(long long i=0;i<K2-1;i++)
        p2.push(A[i]);
        //find k1 smalllest in array
        for(long long i=K1;i<N;i++)
        {
            if(A[i]<p1.top())
            {
                p1.pop();
                p1.push(A[i]);
            }
        }

        //find k2-1 smalllest  element in array
        for(long long i=K2-1;i<N;i++)
        {
            if(A[i]<p2.top())
            {
                p2.pop();
                p2.push(A[i]);
            }
        }
//sum of first max heap
long long sum1=0,sum2=0;
while(!p1.empty())
{
    sum1 +=p1.top();
    p1.pop();
}
//sum of second max heap
while(!p2.empty())
{
    sum2 +=p2.top();
    p2.pop();
}
return sum2-sum1;
    }


int main()
{

    return 0;
}