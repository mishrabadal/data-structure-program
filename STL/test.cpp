#include <iostream>
using namespace std;
#include <bits/stdc++.h>
#include<math.h>
long long maxTripletProduct(long long arr[], int n)
{
    for (int i = 0; i < n; i++)
        arr[i] = abs(arr[i]);
    sort(arr, arr + n);
    return arr[n - 1] * arr[n - 2] * arr[n - 3];
}
int main()
{

long long arr[]={-1,-4,2,6};
    cout<<maxTripletProduct(arr,4);
    return 0;
}