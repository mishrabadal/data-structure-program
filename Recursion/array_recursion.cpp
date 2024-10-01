#include <iostream>
using namespace std;
#include <bits/stdc++.h>
// three argument
void print(int arr[], int index, int n)
{
    // with three argument
    if (index == n)
        return;
    cout << arr[index] << " ";
    print(arr, index + 1, n);
}

void print_reverse(int arr[], int index, int n)
{
    // with three argument
    if (index == n)
        return;
    print_reverse(arr, index + 1, n);
    cout << arr[index] << " ";
}

// two argument
void print(int arr[], int index)
{ // with three argument
    if (index == -1)
        return;
    print(arr, index - 1);
    cout << arr[index] << " ";
}

void reverse_print(int arr[], int index)
{ // with three argument
    if (index == -1)
        return;
    cout << arr[index] << " ";
    reverse_print(arr, index - 1);
}

int sum_of_element(int arr[], int index, int n)
{
    if (index == n)
        return 0;
    return arr[index] + sum_of_element(arr, index + 1, n);
}

int min_element(int arr[], int index, int n)
{
    if (index == n - 1)
        return arr[index];
    return min(arr[index], min_element(arr, index + 1, n));
}
int main()
{
    int arr[] = {1, 2, 3, 4, 5};
cout<<    min_element(arr, 0,5);
    return 0;
}