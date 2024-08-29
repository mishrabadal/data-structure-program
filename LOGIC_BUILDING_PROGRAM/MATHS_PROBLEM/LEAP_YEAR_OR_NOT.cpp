#include <iostream>
using namespace std;
int main()
{
    int x;
    cout << "\nENTER THE YEAR : ";
    cin >> x;
    if (x % 4 == 0)
    {
        cout << x << " is leap year";
    }
    else
    {
        cout << x << " is not leap year";
    }
    return 0;
}