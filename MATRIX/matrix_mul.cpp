#include <iostream>
using namespace std;
int main()
{
    int a[2][2] = {{1, 2}, {3, 4}};
    int c[2][2];
    int b[2][2] = {{1, 2}, {3, 4}};
    int n = 2;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            c[i][j] = 0;
            for (int k = 0; k < n; k++)
            {
                c[i][j] = c[i][j] + a[i][k] * b[k][j];
            }
        }
    }

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cout<<c[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}