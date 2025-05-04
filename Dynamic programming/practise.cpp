#include <iostream>
using namespace std;
int main()
{
    int x, y;
    cin >> x >> y;
    for (int i = 1; i < x * y; i++)
    {
        if (i % x == 0 && i % y == 0)
        {
            cout << " LCM IS " << i << endl;
            return 0;
        }
    }
    cout << " LCM IS " << x * y << endl;
    return 0;
}