#include <iostream>
using namespace std;
int main()
{
    int x, y;
    cout << "\n enter first number  : ";
    cin >> x;
    cout << "\n enter second number  : ";
    cin >> y;
    if (x > y)
    {
        cout << x << " is greater and " << y << " is smaller ";
    }
    else
    {
        cout << y << " is greater and " << x << " is smaller ";
    }
    return 0;
}