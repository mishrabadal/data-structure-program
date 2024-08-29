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
    cout << "REVERSE OF  " << number << " is : " << rev;

    return 0;
}