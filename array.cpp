#include <iostream>
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

void unique_elements_finder(int arr[], int n){
    int ans=0;
    for (int i = 0; i < n; i++)
    {
    ans = ans ^ arr[i];
    }
    cout<<ans;
    

}
int main()
{
    int arr[] = {4,5,4,7,5};
    int size = sizeof(arr) / sizeof(arr[0]);

    unique_elements_finder(arr, size);
  //  printArray(arr, size);
    cout << endl
         << endl;
    return 0;
}