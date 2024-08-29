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

            cout << " ";
        }
       
        for (int col = 1; col <= i; col++)
        {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}
