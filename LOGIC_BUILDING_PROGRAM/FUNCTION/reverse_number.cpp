#include <iostream>
using namespace std;
int main()
{
    int n = 6789;
    int num = 0;
    while (n != 0)
    {
        int digit = n % 10;
        num = num * 10 + digit;
        n = n / 10;
    }
    cout << num;
    return 0;
}