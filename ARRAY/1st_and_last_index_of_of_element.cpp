#include <iostream>
using namespace std;
void first_last_position()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 6, 6, 6, 6, 6, 6,7, 8,};
    int n = sizeof(arr) / sizeof(arr[0]),
        target = 6, first, last;
        cout<<n;
    int start = 0;
    int end = n - 1;
    int mid;

    // first index
    while (start <= end)
    {
        mid = start + (end - start) / 2;
        if (arr[mid] == target)
        {
            first = mid;
            end = mid - 1;
        }
        else if (arr[mid] < target)
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }
    // LAST index
    start = 0;
    end = n - 1;
    while (start <= end)
    {
        mid = start + (end - start) / 2;
        if (arr[mid] == target)
        {
            last = mid;
            start = mid + 1;
        }
        else if (arr[mid] < target)
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }

    cout << "first and last index of element is recpectively : " << first << " , " << last;
}

void search_insert_position()
{
    int arr[] = {1, 2, 3, 5, 6, 7, 9};
    int n = sizeof(arr) / sizeof(arr[0]) - 1;
    int start = 0, end = n, target = 18, mid, ans = n + 1;
    while (start <= end)
    {
        mid = start + (end - start) / 2;
        if (arr[mid] == target)
        {
            ans = mid;
            break;
        }
        else if (arr[mid] < target)
        {
            start = mid + 1;
        }
        else
        {
            ans = mid;
            end = mid - 1;
        }
    }
    cout << ans;
}

void mySqrt()
{
    int x = 169;

    int start = 0, end = x, mid, ans;
    while (start <= end)
    {
        if (x < 2)
        {
            ans = x;
            break;
        }
        mid = start + (end - start) / 2;
        if (mid == x / mid)
        {
            ans = mid;
            break;
        }
        else if (mid < x / mid)
        {
            ans = mid;
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }
    cout << ans;
}


int main()
{
    //first_last_position();
     search_insert_position();
   // mySqrt();
    return 0;
}