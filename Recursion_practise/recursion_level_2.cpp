#include <iostream>
#include <limits.h>
using namespace std;

void check_sorted(int arr[], int n, int i)
{
    if (i == n)
    {
        cout << "array is sorted";
        return;
    }
    if (arr[i - 1] > arr[i])
    {
        cout << "array is unsorted";
        return;
    }
    return check_sorted(arr, n, i + 1);
}

bool binary_search(int arr[], int s, int e, int key)
{
    if (s > e)
        return 0;
    int mid = s + (e - s) / 2;
    if (arr[mid] == key)
        return 1;
    else if (key > arr[mid])
        return binary_search(arr, s + 1, e, key);
    else
        return binary_search(arr, s, e - 1, key);
}

int key_index(int arr[], int s, int e, int key)
{
    if (s > e)
        return -1;
    int mid = s + (e - s) / 2;
    if (arr[mid] == key)
        return mid;
    else if (key > arr[mid])
        return key_index(arr, s + 1, e, key);
    else
        return key_index(arr, s, e - 1, key);
}

int find_power(int a, int b)
{

    if (b == 1)
        return a;

    return a * find_power(a, b - 1);
}

int min_element(int arr[], int index, int n)
{
    if (index == n - 1)
    {
        return arr[index];
    }
    return min(arr[index], min_element(arr, index + 1, n));
}

void print_even(int num, int n)
{
    if (num > n)
        return;
    cout << num << "  ";
    print_even(num + 2, n);
}

void p_even(int n)
{
    if (n == 2)
    {
        cout << 2 << " ";
        return;
    }

    p_even(n - 2);
    cout << n << " ";
}

void p_odd(int n)
{
    if (n == 1)
    {
        cout << 1 << " ";
        return;
    }

    p_odd(n - 2);
    cout << n << " ";
}

void p_natural(int n)
{
    if (n == 1)
    {
        cout << 1 << " ";
        return;
    }
    p_natural(n - 1);
    cout << n << " ";
}

int sum_element(int arr[], int n, int i)
{
    if (i == n - 1)
        return arr[i];
    return arr[i] + sum_element(arr, n, i + 1);
}

int sum_digit(int n){
    if(n==0)
    return 0;
    return n%10+sum_digit(n/10);
}

int digit_square_sum(int n){
    if(n==0)
    return 0;
    return (n%10)*(n%10)+ digit_square_sum(n/10);
}
 


int main()
{
cout<<find_power(3,4);
    return 0;
}