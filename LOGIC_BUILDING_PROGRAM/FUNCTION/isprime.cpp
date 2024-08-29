#include <iostream>
using namespace std;
bool isPrime(int n)
{
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            return true;
        }
    }
    return false;
}
int main()
{
    int n;
    cout << "enter a number";
    cin >> n;
    bool x = isPrime(n);
    if (x)
    {
        cout << "not prime";
    }
    else
    {
        cout << "prime";
    }
    return 0;
}