#include <iostream>
#include <math.h>
using namespace std;
#define size 100

void greatest_and_smallest()
{
    int arr[] = {1, 7, 9, 5};
    int min = arr[0], max = arr[0];
    for (int i = 1; i < 4; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
        }
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    cout << "minimum number is : " << min << endl;
    cout << "maximum number is : " << max << endl;
}

void reverse()
{
    int arr[] = {1, 7, 9, 5};
    int start = 0, end = 4 - 1;
    swap(arr[start++], arr[end--]);
    for (int i = 0; i < 4; i++)
    {
        cout << arr[i] << " ";
    }
}
void linear_search()
{
    int arr[] = {1, 7, 18, 5};
    int target = 8;
    for (int i = 0; i < 4; i++)
    {
        if (arr[i] == target)
        {
            cout << "found ";
            return;
        }
    }
    cout << "not found";
}

void unique_element_finder()
{
    int arr[] = {1, 2, 2, 3, 1};
    int result = 0;
    for (int i = 0; i < 5; i++)
    {
        result = result ^ arr[i];
    }
    cout << result;
}

int factorial(int n)
{
    int result = 1;
    if (n == 0 || n == 1)
        return n;
    for (int i = n; i > 1; i--)
    {
        result = result * i;
    }
    return result;
}

void strong_number_checker()
{
    int num = 140;
    int originial_number = num;
    int result = 0;
    while (num > 0)
    {
        result += factorial(num % 10);
        num = num / 10;
    }
    cout << result;
}
void find_all_factors()
{
    int n = 35;

    for (int i = n; i >= 1; i--)
    {
        if (n % i == 0)
            cout << i << " ";
    }
};
void length_calc()
{
    int n = 989765;
    int count = 0;
    while (n > 0)
    {
        n = n / 10;
        count++;
    }
    cout << count;
}
int *split_number(int n)
{
    int i = -1;
    int arr[size];
    while (n > 0)
    {
        i++;
        arr[i] = n % 10;
        n /= 10;
    }
    // first number
    int starting_number = 0;
    int flag = 1;
    for (int j = i; j >= 2; j--)
    {
        starting_number += arr[j] * pow(10, flag);
        flag--;
    }
    int ending_number = 0;
    flag = 1;
    for (int j = 1; j >= 0; j--)
    {
        ending_number += arr[j] * pow(10, flag);
        flag--;
    }
    // cout<<starting_number<<endl<<ending_number;
    int *returning_array = new int[2];
    // Some operations on arr[]
    returning_array[0] = starting_number;
    returning_array[1] = ending_number;
    return returning_array;
}

void karatsuba()
{
    int xh, xl, yh, yl;
    int *ptr = split_number(1234);
    xh = ptr[0];
    xl = ptr[1];

    ptr = split_number(8679);
    yh = ptr[0];
    yl = ptr[1];
    delete[] ptr;
    int s1, s2, s3, s4, s5;
    s1 = xh * yh;
    s2 = xl * yl;
    s3 = (xh + xl) * (yh + yl);
    s4 = s3 - s2 - s1;
    s5 = (s1 * pow(10, 4)) + (s4 * pow(10, 2)) + s2;
    cout << s5;
}

int *fun()
{
    int *arr = new int[2];
    // Some operations on arr[]
    arr[0] = 10;
    arr[1] = 20;

    return arr;
}

int main()
{

    karatsuba();

    return 0;
}