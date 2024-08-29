#include <iostream>
using namespace std;
int main()
{
    int p, n;
    cout << "ENTER A NUMBER : ";
    cin >> n;
    int number = n;
    cout << "ENTER THE POWER OF " << n << " : ";
    cin >> p;
    for (int i = 1; i < p; i++)
    {
        n *= n;
    }
    cout << number << " POWER " << p << " IS " << n;

    return 0;
}