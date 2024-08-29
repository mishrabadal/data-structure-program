#include <iostream>
using namespace std;
int main()
{
    int n, length = 0;
    cout << "ENTER A NUMBER:  ";
    cin >> n;

    while (n != 0)
    {
        n = n / 10;
        length++;
    }

    cout << "LENGTH IS " << length;

    return 0;
}