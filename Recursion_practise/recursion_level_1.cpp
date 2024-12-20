#include <iostream>
#include <limits.h>
#include<bits/stdc++.h>
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

void print_string(string s, int i, int n)
{
    if (i == n)
        return;
    cout << s[i] << " ";
    print_string(s, i + 1, n);
}
bool match_string(string s, int i, int n, char key)
{
    if (i == n)
        return false;
    if (s[i] == key)
        return true;
    return match_string(s, i + 1, n, key);
}

// return at which index key matched
int key_index(string s, int i, int n, char key)
{
    if (i == n)
        return -1;
    if (s[i] == key)
        return i;
    return key_index(s, i + 1, n, key);
}

void print_table(int n, int i)
{
    // base case
    if (i > 10)
        return;
    // processing
    cout << n * i << " ";
    // recurence relation
    print_table(n, i + 1);
}

int Rev(int n, int reverse)
{
    if (n <= 0)
        return reverse;
    int rev = reverse * 10 + n % 10;
    return Rev(n / 10, rev);
}
bool palindrome(int n, int reverse, int original)
{
    if (n <= 0)
    {
        if (reverse == original)
            return true;
        else
            return false;
    }
    int rev = reverse * 10 + n % 10;
    return palindrome(n / 10, rev, original);
}

string rev_string(string str, int s, int e)
{
    if (s > e)
        return str;
    swap(str[s], str[e]);
    return rev_string(str, s + 1, e - 1);
}

int count_length(string str, int i)
{
    if (str[i] == '\0')
        return i;
    return count_length(str, i + 1);
}

int count_vowel(string str, int i)
{
    if (str[i] == '\0')
        return 0;
    if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u')
        return 1 + count_vowel(str, i + 1);
    return count_vowel(str, i + 1);
}

string convert_to_upper(string str, int i)
{
    if (str[i] == '\0')
        return str;
    str[i] = str[i] - 'a' + 'A';
    return convert_to_upper(str, i + 1);
}

bool check_palindrome(string str,int s ,int e){
if(s>e)
return 1;
if(str[s] !=str[e])
return 0;
else
return check_palindrome(str,s+1,e-1);

}


int main()
{

cout<<"hello";
    return 0;
}