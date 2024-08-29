#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "ENTER A NUMBER:  ";
    cin >> n;

int number=1;
for (int i = 0; i < n; i++)
{
    number *=10;
}


    cout << number;

    return 0;
}