#include <iostream>
using namespace std;
int main()
{
    int i, j, n;
    cout << "enter a number : ";
    cin >> n;
    for (i = 2; i < n; i++)
    {
        for (j = 2; j < i; j++)
        {
            if (i % j == 0)
            {
                break;
            }
        }
        if (j == i && n % j == 0)
        {
            cout << j << " ";
        }
    }

    return 0;
}