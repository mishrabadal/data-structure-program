#include <iostream>
using namespace std;
#include <bits/stdc++.h>
vector<int> findDuplicates(vector<int>& arr) {
    int n =arr.size();
    
    vector<int>ans(n,0);
    for(int i=0;i<n;i++)
    {
        int k=arr[i];
        ans[k]+=1;
    }
    
    vector<int>repeat;

    for(int i=0;i<n;i++)
    {
        if(ans[i] >1)
        repeat.push_back(i);
    }
    for(auto i :repeat)
    cout<<i;
return repeat;
    }
int main()
{
    vector<int> arr = {2,3,1,2,3};
     findDuplicates(arr);
    return 0;
}