#include <iostream>

using namespace std;
void maximum(int arr[], int size)
{
    int maxi = INT_MIN;
    for (int i = 0; i < size; i++)
    {
        maxi = max(maxi,arr[i]);
        //    if(arr[i]>max)
        //    {
        //     max=arr[i];
        //    }
    }
    cout << "\nmaximum number is : " << maxi;
}
void minimum(int arr[], int size)
{
    int mini = INT_MAX;
    for (int i = 0; i < size; i++)
    {
        mini = min(mini,arr[i]);
        // if (arr[i] < min)
        // {
        //     min = arr[i];
        // }
    }
    cout << "\nminimum number is : " << mini;
}
void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}
int main()
{
    int arr[] = {2, 7, 89, 6, 17, 23};
    int size = 6;
    printArray(arr, size);
    maximum(arr, size);
    minimum(arr, size);
    return 0;
}