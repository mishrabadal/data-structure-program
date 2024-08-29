#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "\nenter any number : ";
    cin >> n;
    if (n % 2 == 0)
    {
        cout << "\nyour number is even";
    }
    else
    {
        cout << "\nyour number is odd";
    }

    return 0;
}