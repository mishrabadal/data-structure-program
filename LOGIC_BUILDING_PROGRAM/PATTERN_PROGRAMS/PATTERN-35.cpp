#include <iostream>
using namespace std;
int main()
{
    int n = 4;

    for (int i = 1; i <= n; i++)
    {
        for (int space = 1; space <= n - i; space++)
        {
            cout << "  ";
        }
        for (int j = 1; j <= i; j++)
        {
            cout << j << " ";
        }
        int count = i - 1;
        for (int k = 1; k <= i - 1; k++)
        {

            cout << count << " ";
            count--;
        }
        cout << endl;
    }

    return 0;
}
