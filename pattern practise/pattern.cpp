#include <iostream>
using namespace std;
void one()
{
    int n = 5;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
            cout << "* ";
        cout << endl;
    }
}

void two()
{
    int n = 8;
    for (int i = 1; i <= n; i++)
    {
        cout << "* ";

        for (int j = 2; j < n; j++)
        {
            if (i == 1 || i == n)
                cout << "* ";
            else
                cout << "  ";
        }
        cout << "* ";
        cout << endl;
    }
}

void three()
{
    int n = 5;
    for (int i = 1; i <= n; i++)
    {

        for (int j = 0; j < i; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}
void five()
{
    int n = 5;
    for (int i = 1; i <= n; i++)
    {
        for(int j = 1; j <=n-i; j++)
        {
            cout<<"  ";
        }
        for(int j=n-i+1;j<=n;j++)
        {
            cout<<"* ";
        }
        cout << endl;
    }
}
int main()
{
    
}