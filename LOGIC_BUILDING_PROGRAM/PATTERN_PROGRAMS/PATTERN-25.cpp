#include <iostream>
using namespace std;
int main()
{
    int n = 5;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n - i + 1; j++)
        {
            cout << j;
        }

        for (int k = 1; k <= (i - 1) * 2; k++)
        {
            cout << "*";
        }
        int count =n-i+1;
        for (int l = 1; l <= n - i + 1; l++)
        {
            cout << (n - i + 1)-(l-1);
        }
        cout << endl;
    }

    return 0;
}
