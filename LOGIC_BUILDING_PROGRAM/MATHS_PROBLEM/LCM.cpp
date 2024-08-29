#include <iostream>
using namespace std;
int main()
{
    int x = 6;
    int y = 5;
    int i;
    for (i = 1; i <= x * y; i++)
    {
        if (i % x == 0 && i % y == 0)
        {
            break;
        }
    }
    cout << "LCM IS : " << i;

    return 0;
}