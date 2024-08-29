#include <iostream>
using namespace std;
void number_checker()
{
    int x = -87;
    if (x == 0)
    {
        cout << "zero !";
    }
    if (x > 0)
    {
        cout << "positive number";
    }
    else
    {
        cout << "negative  number";
    }
}

void even_odd_checker()
{
    int x = 82;
    if (x % 2 == 0)
    {
        cout << "even number";
    }
    else
    {
        cout << "odd number";
    }
}

void sum_of_n_natural_number()
{
    int n = 10;
    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        sum += i;
    }
    cout << "sum is : " << sum;
}

void sum_of_number_in_a_given_range()
{
    int start = 2;
    int end = 10;
    int sum = 0;
    for (int i = start; i <= end; i++)
    {

        sum += i;
    }
    cout << "sum is : " << sum;
}

void greatest_of_three_number()
{
    int n1 = 10;
    int n2 = 81;
    int n3 = 12;
    if (n1 > n2 && n1 > n3)
    {
        cout << "greatest number is " << n1;
    }
    else if (n2 > n1 && n2 > n3)
    {
        cout << "greatest number is " << n2;
    }
    else
    {
        cout << "greatest number is " << n3;
    }
}

void Leap_year_checker()
{
    int x = 2022;
    if (x % 400 == 0)
    {
        cout << "leap year";
    }
    else if (x % 100 == 0)
    {
        cout << "not leap year";
    }
    else if (x % 4 == 0)
    {
        cout << "leap year";
    }
    else
    {
        cout << "not leap year";
    }
}

int prime_composite_number_checker()
{
    int n = 21;
    int i;
    if (n == 1)
    {
        cout << "neither prime nor composite";
    }
    for (i = n - 1; i >= 2; i--)
    {

        if (n == 2)
        {
            cout << "prime number";
            break;
        }
        if (n % i == 0)
        {
            cout << "composite number";
            break;
        }
    }
    if (i == 1)
    {
        cout << "prime number";
    }
    return 0;
}

void print_all_prime_number_in_range()
{
    int start = 1, end = 19;
    int prime[100];
    int count = 0;
    for (int number = start; number <= end; number++)
    {
        int i;
        for (i = number - 1; i >= 2; i--)
        {

            if (number == 2)
            {
                // cout << "prime number";
                prime[count] = number;
                count++;
                break;
            }
            if (number % i == 0)
            {
                // cout << "composite number";
                break;
            }
        }

        if (i == 1)
        {
            prime[count] = number;
            count++;
        }
    }

    for (int j = 0; j < count; j++)
    {
        cout << prime[j] << " ";
    }
}

void sum_of_digit_of_number()
{
    int num = 1263;
    int sum = 0;
    while (num > 0)
    {
        sum += num % 10;
        num = num / 10;
    }
    cout << sum;
}

void reverse_a_number()
{
    int rev = 0;
    int num = 1263;

    while (num > 0)
    {
        rev = rev * 10 + num % 10;
        num = num / 10;
    }
    cout << rev;
}

void palindrome_number()
{

    int rev = 0;
    int num = 123321;
    int original_number = num;

    while (num > 0)
    {
        rev = rev * 10 + num % 10;
        num = num / 10;
    }
    if (rev == original_number)
    {
        cout << "yes alindrome number";
    }
    else
    {
        cout << "not alindrome number";
    }
}

void armstrong_number()
{
    int num = 153;
    int original_number = num;
    int sum = 0;
    while (num > 0)
    {
        sum += (num % 10) * (num % 10) * (num % 10);
        num = num / 10;
    }
    if (sum == original_number)
    {
        cout << "yes armstrong number";
    }
    else
    {
        cout << "not armstrong number";
    }
}

void fibonacci_series_less_than_n()
{
    int n = 10;
    int x = 0, y = 1, z = 0;
    while (z <= n)
    {
        cout << z << " ";
        x = y;
        y = z;
        z = x + y;
    }
}

void first_n_fibonacci_number()
{
    int n = 10;
    int x = 0, y = 1, z = 0;
    while (n > 0)
    {
        cout << z << " ";
        x = y;
        y = z;
        z = x + y;
        n--;
    }
}

void factorial_of_number()
{
    int n = 5;
    int factorial = 1;
    for (int i = 1; i <= n; i++)
    {
        factorial *= i;
    }
    cout << " factorial is : " << factorial;
}

void length_of_number()
{
    int num = 9754;
    int count = 0;
    while (num > 0)
    {
        num = num / 10;
        count++;
    }
    cout << "length of number is : " << count;
}

void n_number_of_zero()
{
    int num = 1;
    int total_zero = 3;
    for (int i = 1; i <= total_zero; i++)
    {
        num = num * 10;
    }
    cout << num;
}

void hcf()
{
    int n1 = 6, n2 = 15;
    int smallest_number = n1 > n2 ? n2 : n1;
    for (int i = smallest_number; i >= 1; i--)
    {

        if (n1 % i == 0 && n2 % i == 0)
        {
            cout << "HCF is : " << i;
            break;
        }
    }
}

void lcm()
{
    int n1 = 6, n2 = 15;
    int larger_number = n1 > n2 ? n1 : n2;
    for (int i = larger_number; i <= n1 * n2; i++)
    {

        if (i % n1 == 0 && i % n2 == 0)
        {
            cout << "LCM is : " << i;
            break;
        }
    }
}

void power_calculator()
{
    int num = 5;
    int power = 3;
    int powerde_number = 1;
    for (int i = 1; i <= power; i++)
    {
        powerde_number = powerde_number * num;
    }
    cout << num << " to the power " << power << " is : " << powerde_number;
}

int main()
{

    return 0;
}

// number_checker();
// even_odd_checker();
// sum_of_n_natural_number();
// sum_of_number_in_a_given_range()
// greatest_of_three_number()
// Leap_year_checker();
// prime_composite_number_checker();
// print_all_prime_number_in_range();
// sum_of_digit_of_number();
// reverse_a_number();
// palindrome_number();
// armstrong_number();
// fibonacci_series_less_than_n();
// first_n_fibonacci_number();
// factorial_of_number();
// length_of_number();
// n_number_of_zero();
// hcf();
// lcm();
// power_calculator();