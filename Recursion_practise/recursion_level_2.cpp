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

int main()
{
    int arr[] = {1, 2, 3, 4};
    cout << binary_search(arr, 0, 3, 1);

    string ans = 2 > 3 ? "yes" : "no";
    cout << ans;

    return 0;
}