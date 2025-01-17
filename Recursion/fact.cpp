#include <iostream>
using namespace std;
#include <math.h>
#include <vector>
#include <algorithm>
// factorial
void fact(int n)
{
    int res = 1;
    for (int i = n; i >= 1; i--)
    {
        res = res * i;
    }
    cout << res;
}

int factorial(int n)
{
    if (n == 1)
        return 1;
    return n * factorial(n - 1);
}

void nextGreatest(vector<int> arr)
{
    vector<int> ans;
    int n = arr.size();
    int mx = -1;
    for (int i = n - 1; i >= 0; i--)
    {
        int temp = mx;
        if (arr[i] > mx)
        {
            temp = arr[i];
        }
        arr[i] = mx;
        mx = temp;
    }
    for(auto i :arr)
    cout<<i<<" ";
}

int main()
{
    vector<int> arr = {16, 17, 4, 3, 5, 2};
   nextGreatest( arr);
    return 0;
}