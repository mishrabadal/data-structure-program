#include <iostream>
using namespace std;
int main()
{
    int n = 5;

    for (int i = 1; i <= n; i++)
    {
        for (int space = 1; space <=i-1; space++)
        {
            cout << " ";
        }
        for (int j = 1; j <= n-i+1; j++)
        {
            cout  << "* ";
        }
        
        // for (int k = 1; k <= i - 1; k++)
        // {

        //     cout << " ";
            
        
        cout << endl;
    }

    return 0;
}
