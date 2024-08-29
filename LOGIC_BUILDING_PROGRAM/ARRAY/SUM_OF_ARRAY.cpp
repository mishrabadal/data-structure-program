#include <iostream>
using namespace std;
int sum(int arr[], int n, int key)
{
    int sum=0;
    for (int i = 0; i < n; i++)
    {
        sum+=arr[i];
    }
    
return sum;
}

int main()
{
    int arr[] = {6, 16, 8, 85, 73};
    int key = 116;
    cout<< "sum is : " << sum(arr, 5, key);

    return 0;
}