#include <iostream>
using namespace std;
int main()
{
    int n = 4;
    char ch;

    for (int i = 1; i <= n; i++)
    {

        for (int j = 1; j <= i; j++)
        {
            ch = 'A' - i + j + 3;

            cout << ch << " ";
        }

        cout << endl;
    }

    return 0;
}