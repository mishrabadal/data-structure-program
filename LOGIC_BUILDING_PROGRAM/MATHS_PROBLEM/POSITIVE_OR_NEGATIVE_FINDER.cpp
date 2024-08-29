#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "\nenter any number : ";
    cin >> n;
    if (n == 0)
    {
        cout << "\nyour number is zero";
    }
    else if (n > 0)
    {
        cout << "\nyour number is positive";
    }
    else if (n < 0)
    {
        cout << "\nyour number is negative";
    }
    return 0;
}