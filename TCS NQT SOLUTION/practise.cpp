#include <iostream>
using namespace std;

// write a program for finding positive and negative number
void Check_positive(int N)
{
    if (N > 0)
    {
        cout << N << " Positive Number";
    }
    else if (N == 0)
    {
        cout << " Neither positive nor Negative";
    }
    else
    {
        cout << N << " is Negative number";
    }
}

// finding leap year
void Check_leapYear(int N)
{
    if ((N % 400 == 0) || (N % 100 != 0 && N % 4 == 0))
    {
        cout << N << " is Leap Year";
    }
    else
    {
        cout << N << " is not Leap Year";
    }
}

// sum of digit
void Sum_of_digit(int N)
{
    int sum = 0;
    while (N > 0)
    {
        sum += N % 10;
        N /= 10;
    }
    cout << "Sum is : " << sum;
}

// Reversing a Number
void Reverse_Number(int N)
{
    int rev = 0;
    while (N > 0)
    {
        rev = rev * 10 + N % 10;
        N /= 10;
    }
    cout << "Reverse is : " << rev;
}

// Palindrome of a number

void Palindrome_Number(int N)
{
    int original = N;
    int rev = 0;
    while (N > 0)
    {
        rev = rev * 10 + N % 10;
        N /= 10;
    }
    if (original == rev)
        cout << "Number is palindrome";
    else
        cout << "Number is not Palindrome";
}

// Checking Number is prime or composite Number
void Is_Prime(int N)
{
    int flag = 0;
    for (int i = N / 2; i >= 2; i--)
    {
        if (N % i == 0)
        {
            cout << "Composite Number";
            flag = 1;
            break;
        }
    }
    if (flag == 0)
    {
        cout << "Prime Number";
    }
}

int main()
{
   Is_Prime(7);
    return 0;
}