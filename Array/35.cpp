#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;

int minEatingSpeed(vector<int> &piles, int h)
{
    int s=0,e=0,mid,ans=-1,n=piles.size();
    long sum=0;
    for(int i=0;i<n;i++)
    {
        sum +=piles[i];
        e=max(e,piles[i]);
    }
    s=sum/h;

    //agar s zero ho gaya ho divide karne ki wajah se isliye 1 assign kiye hai
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
        //agar total time khane me jyada lag rha hai speed badhao kyonki h given time me khana hai
        if(total_time>h)
        {
            s=mid+1;
        }
        //agar total time khane me kam lag rha hai speed kam karo
        else{
            ans=mid;
            e=mid-1;
        }
    }
    return ans;
    
}

int main()
{
vector<int> piles={8,9};
cout<< minEatingSpeed(piles, 2);
    return 0;
}