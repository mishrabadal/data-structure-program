#include <iostream>
using namespace std;
int main()
{
    int n = 16;
    int flag = 0;
    for (int i = 1; i < n; i++)
    {
        if (i * i == n)
        {
            flag = 1;
            break;
        }
    }
    if (flag == 0)
        cout << n << " IS NOT A PERFECT SQUARE NUMBER";
    else
        cout << n << " IS  A PERFECT SQUARE  NUMBER";

    return 0;
}