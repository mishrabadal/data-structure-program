#include <iostream>
using namespace std;

void copy_into_new_array()
{
    int arr[] = {1, 2, 3};
    int size = sizeof(arr) / sizeof(arr[0]);
    int arr2[size];
    for (int i = 0; i < size; i++)
    {
        arr2[i] = arr[i];
    }

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << endl;
    }
}

void prime()
{
    int n = 1;

    if (n == 1 || n == 0)
    {
        cout << "not prime or composite";
        return;
    }
    for (int i = n / 2; i >= 2; i--)
    {
        if (n % i == 0)
        {
            cout << "composite";
            return;
        }
    }
    cout << "prime";
    return;
}

void uppercase()
{
    char ch = 'd';
    char upper = ch - 'a' + 'A';
    cout << upper;
}

void even()
{
    int x = 62;
    if ((x & 1) == 0)
    {
        cout << "even";
    }
    else
    {
        cout << "odd";
    }
}

void check_repeating()
{
    int arr[] = {2, 4, 10, 2, 4};
    int result = 0;
    for (int i = 0; i < 5; i++)
    {
        result = result ^ arr[i];
    }
    cout << result;
}

void fobonacci()
{
    int x = 0, y = 1, z = 0;

    while (z < 10)
    {
        cout << z << " ";
        x = y;
        y = z;
        z = x + y;
    }
}

void armstrong()
{
    int n = 624;
    int number = n;
    int result = 0;
    while (n > 0)
    {
        result = result + (n % 10) * (n % 10) *(n % 10);
    n = n/10;
    }
    cout << result;
}
int main()
{
    armstrong();
    return 0;
}