#include <iostream>
using namespace std;
int main()
{
    int n = 5;
    char ch;
    for (int i = 1; i <= n; i++)
    {
        int space;
        for (space = 1; space <= n - i; space++)
        {

            cout << "  ";
        }

        for (int j = 1; j <= i; j++)
        {
            cout << j << " ";
        }
        int start = i - 1;
        for (int k = 1; k <= i - 1; k++)
        {
            cout << start << " ";
            start--;
        }
        cout << endl;
    }

    return 0;
}
