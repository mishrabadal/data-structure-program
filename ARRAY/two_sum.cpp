#include <iostream>
using namespace std;
void brute_force()
{
    int arr[] = {2, 7, 11, 15, 27};
    int n = sizeof(arr) / sizeof(arr[0]);
    int target = 22;
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] + arr[j] == target)
            {
                cout << i << " , " << j << " are index";
                break;
            }
        }
    }
}
void two_sum()
{
    int arr[] = {2, 7, 11, 15, 27};
    int n = sizeof(arr) / sizeof(arr[0]);
    int target = 22;
    int start = 0, end = n - 1;
    while (start < end)
    {
        if (arr[start] + arr[end] == target)
        {
            cout << start << " , " << end << " are index";
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
    // brute_force();
    two_sum();
    return 0;
}