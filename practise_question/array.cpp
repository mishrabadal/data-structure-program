#include <iostream>
using namespace std;
void smallest_element(int arr[], int n)
{
    int min = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
        }
    }
    cout << min;
}
void largest_element(int arr[], int n)
{
    int max = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    cout << max;
}
void reverse_array(int arr[], int n)
{
    int start = 0, end = n - 1;
    while (start <= end)
    {

        swap(arr[start], arr[end]);

        start++;
        end--;
    }

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}
void linear_search(int arr[], int n)
{
    int target = 9;
    int i;
    for (i = 0; i < n; i++)
    {
        if (arr[i] == target)
        {
            cout << "found !";
            break;
        }
    }

    if (i == n)
    {
        cout << "not found !";
    }
}
void binary_search(int arr[], int n)
{
    int start = 0, end = n - 1, mid, flag = 0;
    int target = 99;
    while (start <= end)
    {
        mid = start + (end - start) / 2;
        if (arr[mid] == target)
        {
            cout << "found !";
            flag = 1;
            break;
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

    if (flag == 0)
    {
        cout << "not found !";
    }
}
void swap_alternate(int arr[], int n)
{
    for (int i = 0; i < n - 1;)
    {
        swap(arr[i], arr[i + 1]);
        i = i + 2;
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}
void unique_element()
{
    int arr[] = {1, 2, 1, 2, 3, 3, 4, 4, 5};
    int n = 9, sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum = sum ^ arr[i];
    }
    cout << sum;
}
void duplicate_check(int arr[], int n)
{
    int flag = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] == arr[j])
            {

                flag = 1;
                break;
            }
        }
    }
    if (flag == 0)
    {
        cout << "not duplicate found";
    }
    else
    {
        cout << "duplicate found";
    }
}
void selection_sort(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        int min_index = i;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[min_index] > arr[j])
            {
                min_index = j;
            }
        }
        swap(arr[min_index], arr[i]);
    }

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}
void insertion_sort(int arr[], int n)
{
    for (int i = 1; i < n; i++)
    {
        for (int j = i; j > 0; j--)
        {
            if (arr[j - 1] > arr[j])
            {
                swap(arr[j - 1], arr[j]);
            }
            else
            {
                break;
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}
void bubble_sort(int arr[], int n)
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
// sorted array
void first_and_last_occurce()
{
    int arr[] = {1, 5, 5, 5, 5, 8, 10};
    int n = sizeof(arr) / sizeof(arr[0]);
    int start = 0, end = n - 1, mid;
    int target = 5;
    int first_index = -1, last_index = -1;
    // first index
    while (start <= end)
    {
        mid = start + (end - start) / 2;
        if (arr[mid] == target)
        {
            first_index = mid;
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

    // finding 2nd index;
    start = 0, end = n - 1, mid;
    while (start <= end)
    {
        mid = start + (end - start) / 2;
        if (arr[mid] == target)
        {
            last_index = mid;
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

    cout << first_index << "  " << last_index << endl;
}
int main()
{
    int arr[] = {1, 5, 10, 15, 7, 8, 2};
    int n = sizeof(arr) / sizeof(arr[0]);

    // smallest_element(arr, n);
    // unique_element();
    // bubble_sort(arr, n);
    first_and_last_occurce();
    return 0;
}