#include <iostream>
using namespace std;

void happy_birthday(int n)
{
    if (n == 0)
    {
        cout << n << " happy birthday !";
        return;
    }
    cout << n << " day left in birthday" << endl;
    happy_birthday(n - 1);
}

void natural_number(int n)
{
    if (n == 0)
    {

        return;
    }
    cout << n << " ";
    natural_number(n - 1);
}

// int factorial(int n)
// {
//     if (n > 0)
//     {

//         return n * factorial(n - 1);
//     }
//     else
//     {
//         return 1;
//     }
// }

int factorial(int n)
{
    if (n == 1)
        return 1;
    return n * factorial(n - 1);
}

int sum_of_digit(int n)
{
    if (n == 0)
    {
        return 0;
    }
    return n % 10 + sum_of_digit(n / 10);
}

void print_1_to_n(int num)
{
    if (num == 1)
    {
        cout << num << " ";
        return;
    }
    print_1_to_n(num - 1);
    cout << num << " ";
}

void even_print(int n)
{
    if (n == 0)
    {
        cout << 0 << " ";
        return;
    }
    even_print(n - 2);
    cout << n << " ";
}

int sum_1_to_n(int n)
{
    if (n == 1)
        return 1;

    return n + sum_1_to_n(n - 1);
}

int square_sum(int n)
{
    if (n == 1)
        return 1;

    return n * n + square_sum(n - 1);
}

int power_of_2(int n)
{
    if (n == 1)
        return 2;

    return 2 * power_of_2(n - 1);
}

int nth_fibonacci(int n)
{
    if (n == 0 || n == 1)
        return n;

    return nth_fibonacci(n - 1) + nth_fibonacci(n - 2);
}

// nth stair : counting total ways of climbing on stair using 1 step or 2 step at a time
int total_ways(int n)
{
    if (n <= 1)
        return 1;
    return total_ways(n - 1) + total_ways(n - 2);
}

int main()
{
    cout << total_ways(4);
    return 0;
}