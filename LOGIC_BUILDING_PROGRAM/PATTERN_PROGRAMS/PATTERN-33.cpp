#include <iostream>
using namespace std;
int main()
{
    int n = 4;
  
    for (int i = 1; i <= n; i++)
    {
         for (int space = 1; space <=n-i; space++)
        {
            cout<<"  ";
        }
        for (int j = 1; j <= i; j++)
        {
            cout <<  i<<" ";
            
        }
        
        cout << endl;
    }

    return 0;
}
