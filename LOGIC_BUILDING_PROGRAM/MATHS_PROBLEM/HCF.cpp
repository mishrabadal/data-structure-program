#include <iostream>
using namespace std;
int main()
{
    int x = 6;
    int y = 15;
    int i;

    for (i = x > y ? x : y; i >= 1; i--)
    {
        if (x % i == 0 && y % i == 0)
        {
            break;
        }
    }
    cout << "HCF IS : " << i;

    return 0;
}