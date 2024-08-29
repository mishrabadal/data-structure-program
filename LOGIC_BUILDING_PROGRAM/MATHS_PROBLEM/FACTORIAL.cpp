#include <iostream>
using namespace std;
int main()
{
    int n;//5
    cout << "ENTER A NUMBER : ";
    cin >> n;
    int factorial=1;
    for (int i=n;i>=1;i-- )
    {
       // factorial *=i;
        factorial=factorial*i;
    }
    cout<<"FACTORIAL OF "<<n<<" IS "<<factorial;
    return 0;
}