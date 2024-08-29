#include <iostream>
using namespace std;
int main()
{
    int n = 5;
    char ch ;

    for (int i = 1; i <= n; i++)
    {
       
       

        for (int j = 1; j <= n; j++)
        {
           
           ch='A'+i+j-2;

            cout << ch << " ";
           
        }

        cout << endl;
    }

    return 0;
}