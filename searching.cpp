#include <iostream>
using namespace std;
// LINEAR SEARCH
void linear_search()
{
    int arr[] = {6, 9, 5, 8, 6, 2};
    int size = sizeof(arr) / sizeof(arr[0]);
    int key = 12;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == key)
        {
            cout << " yes found";

            return;
        }
    }
    cout << "not found";
}

// BINARY SEARCH
void binarySearch()
{
    int arr[] = {6, 9, 5, 8, 6, 2};
    int size = sizeof(arr) / sizeof(arr[0]);
    int key = 12;
    int start = 0;
    int mid;
    int end = size - 1;
    while (start <= end)
    {
        mid = (start + end) / 2;
        if (key == mid)
        {
            cout << " yes matched";
            return;
        }
        if (key < mid)
        {
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
    }
    cout << "not found";
}
int main()
{
    // linear_search();
    binarySearch();
    return 0;
}