#include<iostream>
#include<algorithm>
#include<bits/stdc++.h>
using namespace std;
int main(){
    //int arr[] = {5,4,3,2,1};
    vector<int>arr(5);
    // arr[0]=5;
    // arr[1]=4;
    // arr[2]=3;
    // arr[3]=2;
    // arr[4]=1;
    int count =5;
    for (int i = 0; i <5; i++)
    {
        cin>>arr[i];
    
    }
    
   // int *ptr = arr+4;
   sort(arr.begin(),arr.end());
    cout<<arr[0];
    return 0;
}