#include <iostream>
using namespace std;

void print_1_to_n(int n)
{
    if (n == 0)
        return;

    print_1_to_n(n - 1);
    cout << n << "  ";
}

void print_n_to_1(int n)
{
    if (n == 0)
        return;
    cout << n << "  ";
    print_n_to_1(n - 1);
}

int fact(int n)
{
    if (n == 1)
        return 1;
    return n * fact(n - 1);
}

int fibonacci(int n)
{
    if (n == 1)
        return 0;
    if (n == 2)
        return 1;

    return fibonacci(n - 1) + fibonacci(n - 2);
}

void fiba()
{
    int n = 10;
    int x = 0, y = 1, z = 0;
    for (int i = 0; i <= n; i++)
    {
        cout << z << " ";
        x = y;
        y = z;
        z = x + y;
    }
}
void fib(int x, int y, int z, int n)
{
    if (z > n)
    {
        return;
    }
    cout << "x: " << x << " y : " << y << " z: " << z << endl;

    x = y;
    y = z;
    z = x + y;
    fib(x, y, z, n);
}

int power(int n)
{
    if (n == 1)
        return 2;
    return 2 * power(n - 1);
}

int total_ways(int n)
{
    if (n == 0 || n == 1)
        return 1;
    return total_ways(n - 1) + total_ways(n - 2);
}

void printArray(int arr[], int index, int n)
{
    if (index == n)
    {
        return;
    }
    printArray(arr, index + 1, n);
    cout << arr[index] << " ";
}

void maximum_element(int arr[], int n)
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

void Largest_element(int arr[], int n, int index, int &maxi)
{
    if (index == n)
    {
        return;
    }
    if (arr[index] > maxi)
    {
        //  cout<<arr[index];
        maxi = arr[index];
        Largest_element(arr, n, index + 1, maxi);
    }
    else
    {
        Largest_element(arr, n, index + 1, maxi);
    }
}
int main()
{
    int arr[] = {1, 2, 13, 4, 15};
    int maxi = INT_MIN;
    Largest_element(arr, 5, 0, maxi);
    cout << maxi;

    return 0;
}