#include <iostream>
using namespace std;
void segregate_0_and_1()
{
    int arr[] = {1, 0, 1, 0, 1, 0, 1, 0, 0};
    int n = sizeof(arr) / sizeof(arr[0]);
    int start = 0;
    int end = n - 1;
    while (start < end)
    {
        if (arr[start] == 0)
        {
            start++;
        }
        else
        {
            if (arr[end] == 0)
            {
                swap(arr[start], arr[end]);
                start++;
                end--;
            }
            else
            {
                end--;
            }
        }
    }
    // printing array
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

void brute_force()
{
    int arr[] = {1, 0, 1, 0, 1, 0, 1, 0, 0};
    int n = sizeof(arr) / sizeof(arr[0]);
    int count_0 = 0, count_1 = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 0)
        {
            count_0++;
        }
        else
        {
            count_1++;
        }
    }
    // now storing into array 0 and 1
    for (int i = 0; i < count_0; i++)
    {
        arr[i] = 0;
    }
    for (int i = count_0; i < n; i++)
    {
        arr[i] = 1;
    }
    // printing array
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}
int main()
{
     segregate_0_and_1();
   // brute_force();
    return 0;
}