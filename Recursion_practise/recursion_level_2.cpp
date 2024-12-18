#include <iostream>
#include <limits.h>
using namespace std;

void check_sorted(int arr[], int n, int i)
{
    if (i == n)
    {
        cout << "array is sorted";
        return;
    }
    if (arr[i - 1] > arr[i])
    {
        cout << "array is unsorted";
        return;
    }
    return check_sorted(arr, n, i + 1);
}

bool binary_search(int arr[], int s, int e, int key)
{
    if (s > e)
        return 0;
    int mid = s + (e - s) / 2;
    if (arr[mid] == key)
        return 1;
    else if (key > arr[mid])
        return binary_search(arr, s + 1, e, key);
    else
        return binary_search(arr, s, e - 1, key);
}

int find_power(int a, int b)
{

    if (b == 1)
        return a;

    return a * find_power(a, b - 1);
}

int power(int n)
{
    if (n == 1)
        return 2;
    return 2 * power(n - 1);
}

int main()
{
    cout << find_power(3, 4);
    // cout<<power(5);
    return 0;
}