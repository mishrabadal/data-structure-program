#include <iostream>
#include<bits/stdc++.h>
using namespace std;
bool comparator(int a, int b)
{
 return a<b;
}
int main()
{
vector<int>arr={11,2,3,7};


sort(arr.begin(),arr.end(),comparator);
for(auto i : arr)
    cout<<i<<" ";
    return 0;
}



  