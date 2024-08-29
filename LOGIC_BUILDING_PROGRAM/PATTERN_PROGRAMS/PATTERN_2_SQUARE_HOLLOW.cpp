#include <iostream>
using namespace std;
int main()
{
    for (int i = 1; i <= 5; i++)
    {
        cout << "*  ";
        for (int j = 1; j <= 3; j++)
        {
            if (i == 1 || i == 5)
            {
                cout << "*  ";
            }
            else
            {           
                cout << "   ";
            }
        }
        cout << "* ";
        cout << endl;
    }
}
