#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
//Rotate Array by One
    void rotate(vector<int> &arr) {
        // code here
        int n=arr.size();
        int last = arr.back();
        for(int i=n-1;i>=1;i--)
        arr[i]=arr[i-1];
        arr[0]=last;
    }

int main()
{
    
    return 0;
}