#include <iostream>
using namespace std;
#include <bits/stdc++.h>

void bubble(int arr[], int n)
{
    for (int i = 1; i < n; i++)
    {
        for (int j = 0; j < n - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

void selection(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        int min = i;
    for (int j = i+1; j < n; j++)
    {
        if(arr[min]>arr[j])
        {
            min =j;
        }
    }
    cout<<min<<endl;
    swap(arr[min],arr[i]);
    }
     for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}
int main()
{
    int arr[] = {2, 3, 5, 1};
   selection(arr, 4);
    return 0;
}