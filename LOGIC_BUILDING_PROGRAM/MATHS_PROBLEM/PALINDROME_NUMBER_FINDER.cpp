#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "ENTER ANY NUMBER ";
    cin >> n;
    int number = n;
    int rev = 0;
    while (n > 0)
    {
        rev = (rev * 10) + n % 10;
        n = n / 10;
    }
    cout<<ends;
    if (rev == number)
    {
        cout << number << " is a palindrome number";
    }
    else
    {
        cout << number << " is not a palindrome number";
    }
    return 0;
}