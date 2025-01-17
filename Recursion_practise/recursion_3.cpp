#include <iostream>
using namespace std;
#include<vector>
int nthFibonacci(int n)
{

    if (n <= 1)
        return n;

    return nthFibonacci(n - 1) + nthFibonacci(n - 2);
}

double myPow(double x, int n)
{
    if (n == 1)
        return x;
    return x * myPow(x, n - 1);
}

int fib(int n)
{
    if (n <= 1)
        return n;
    return fib(n - 1) + fib(n - 2);
}

vector<int> productExceptSelf(vector<int> &arr)
{
    vector<int> ans;
    
    for (int i = 0; i < arr.size(); i++)
    {
        int product = 1;
        for (int j =0;j<arr.size();j++)
    {
        if(i==j)
        continue;
        if(arr[j]==0)
        product =0;
        product *=arr[j];
    }
    ans.push_back(product);
    }
   
    for(auto i:ans)
    cout<<i<<" ";
    return ans;
}



int main()
{
    vector<int> arr = {10, 3, 5, 0, 2};
    productExceptSelf(arr);
    return 0;
}