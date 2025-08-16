#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;

int minEatingSpeed(vector<int> &piles, int h)
{
    int s=0,e=0,mid,ans,n=piles.size();
    long sum=0;
    for(int i=0;i<n;i++)
    {
        sum +=piles[i];
        e=max(e,piles[i]);
    }
    s=sum/h;

    //agar s zero ho gaya ho divide karne ki wajah se isliye 1 assign koye hai
    //because aage s ka use hai
    if(!s)
    s=1;
    while (s<=e)
    {
        mid=s+(e-s)/2;
        //mid amount of banana to consume in 1 hour
        int total_time=0;
        for(int i=0;i<n;i++)
        {
            total_time +=piles[i]/mid;
            if(piles[i]%mid)
            total_time++;
        }
        if(total_time>h)
        {
            s=mid+1;
        }
        else{
            ans=mid;
            e=mid-1;
        }
    }
    return ans;
    
}

int main()
{

    return 0;
}