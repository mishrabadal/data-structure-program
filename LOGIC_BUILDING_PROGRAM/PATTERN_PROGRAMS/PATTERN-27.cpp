#include <iostream>
using namespace std;
int main()
{
int n=4;
int print;
for (int i = 1; i <=n; i++)
{
    print=i;
    for (int j = 1; j <=i; j++)
    {
        cout<<print<<" ";
        print--;
        
    }
    cout<<endl;
}

    return 0;
}
