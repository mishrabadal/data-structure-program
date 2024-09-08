#include <iostream>
using namespace std;
void brute_force()
{
    int arr[] = {5, 10, 3, 2, 50, 80};
    int n = sizeof(arr) / sizeof(arr[0]);
    int target = 30;
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] - arr[j] == target || arr[j] - arr[i] == target)
            {
                cout << i << " , " << j << " are index";
                break;
            }
        }
    }
}

void pair_given_difference()
{
    int arr[] = {5, 10, 3, 2, 50, 80};
    int n = sizeof(arr) / sizeof(arr[0]);
    int target = 30;
    int start = 0, end = 1;
    while (end < n)
    {
        if (arr[end] - arr[start] == target)
        {
            cout << start << " , " << end << " are index";
            break;
        }
        else if (arr[end] - arr[start] < target)
        {
            end++;
        }
        else{
            start++;
        }
    }
}

int main()
{
    //brute_force();
    pair_given_difference();
    return 0;
}