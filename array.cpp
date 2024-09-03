#include <iostream>
#include <bits/stdc++.h>
#include <math.h>
using namespace std;
void printArray(int arr[], int n)
{

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

void largest_number(int arr[], int n)
{
    int min = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        if (min < arr[i])
        {
            min = arr[i];
        }
    }
    cout << "largest number is : " << min;
}

void smallest_number(int arr[], int n)
{
    int max = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        // if (max > arr[i])
        // {
        //     max = arr[i];
        // }
        max = min(max, arr[i]);
    }
    cout << "smallest number is : " << max;
}

void reverse_array(int arr[], int n)
{
    int start = 0;
    int end = n - 1;
    while (start <= end)
    {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}

void swap_alternate(int arr[], int n)
{

    for (int i = 0; i < n - 1; i += 2)
    {

        swap(arr[i], arr[i + 1]);
    }
}

void unique_elements_finder(int arr[], int n)
{
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        ans = ans ^ arr[i];
    }
    cout << ans;
}

void array_duplicate_checker(int arr[], int n)
{
    int flag = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {

            if (arr[j] == arr[i])
            {
                cout << "yes duplicate found";
                flag = 1;
                break;
            }
        }
    }
    if (flag == 0)
    {
        cout << "not duplicate found";
    }
}

int peak_elements_of_array(int arr[], int n)
{
    if (n == 1)
    {
        cout << "peak elements is : " << arr[0];
        return 0;
    }
    if (arr[0] > arr[1])
    {
        cout << "peak elements is : " << arr[0];
        return 0;
    }
    else
    {
        for (int i = 1; i < n - 1; i++)
        {
            if (arr[i] > arr[i - 1] && arr[i] > arr[i + 1])
            {
                cout << "peak elements is : " << arr[i];
                return i;
            }
        }
    }
    return -1;
}

void first_and_last_position_of_sorted_array()
{
    int arr[] = {1, 2, 3, 4, 4, 4, 4, 5};
    int n = 8, key = 4, mid;
    int start = 0, end = n - 1;
    int first_position;

    // finding first position of element
    while (start <= end)
    {
        mid = start + (end - start) / 2;
        if (arr[mid] == key)
        {
            first_position = mid;
            end = mid - 1;
        }
        else if (arr[mid] < key)
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }
    cout << "first index is at : " << first_position << endl;

    // finding last position of elements

    start = 0, end = n - 1;
    int last_position;

    while (start <= end)
    {
        mid = start + (end - start) / 2;
        if (arr[mid] == key)
        {
            last_position = mid;
            start = mid + 1;
        }
        else if (arr[mid] < key)
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }
    cout << "last index is at : " << last_position;
}

void counting_elements_of_array()
{
    int arr[] = {1, 2, 3, 4, 7, 7, 8, 1, 1, 1, 4, 6};
    int n = sizeof(arr) / sizeof(arr[0]);
    vector<bool> visited(n, false);
    int count;
    for (int i = 0; i < n; i++)
    {

        if (visited[i] == true)
            continue;

        count = 1;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] == arr[j])
            {

                visited[j] = true;
                count++;
            }
        }
        cout << arr[i] << " : " << count << endl;
    }
}

void search_insert_position()
{
    int arr[] = {1, 2, 3, 4, 5, 5, 7, 8};
    int n = sizeof(arr) / sizeof(arr[0]);
    int ans = n;
    int start = 0, end = n - 1;
    int target = 6;
    int mid;
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
    cout << " insert will at  position : " << ans;
}

void square_root_calculator()
{
    int x = 16;
    int start = 0, end = x, mid, ans;
    while (start <= end)
    {
        if (x < 2)
        {
            ans = x;
            break;
        }
        mid = start + (end - start) / 2;
        if (mid = x / mid)
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
    cout << " square root is : " << ans;
}

void segregate_0_and_1()
{
    int arr[] = {1, 1, 0, 1, 0, 0, 1};
    int n = sizeof(arr) / sizeof(arr[0]);
    int start = 0, end = n - 1;
    while (start <= end)
    {
        if (arr[start] == 0)
        {
            start++;
        }
        else
        {
            if (arr[end] == 1)
            {
                end--;
            }
            else
            {
                swap(arr[start], arr[end]);
            }
        }
    }
    printArray(arr, n);
}
void two_Sum_return_index()
{
    int arr[] = {2, 3, 4, 5, 10, 11, 14};
    int n = sizeof(arr) / sizeof(arr[0]);
    int start = 0, end = n - 1;
    int target = 12;
    while (start <= end)
    {
        if (arr[start] + arr[end] == target)
        {
            cout << " indexes are : " << start << " " << end;
            break;
        }
        else if (arr[start] + arr[end] < target)
        {
            start++;
        }
        else
        {
            end--;
        }
    }
}
int main()
{
    int arr[] = {2, 4, 6, 18, 9, 7, 6};
    int size = sizeof(arr) / sizeof(arr[0]);

    // square_root_calculator();
    two_Sum_return_index();
    //  printArray(arr, size);
    cout << endl
         << endl;
    return 0;
}