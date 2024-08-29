#include <iostream>
using namespace std;
int main()
{
    int x, y;
    cout << "\nenter starting and ending range of number : ";
    cin >> x >> y;
    int sum = 0;
    for (int i = x + 1; i < y; i++)
    {
        sum += i;
    }
    cout << "\n sum is range of number between " << x << " and " << y << " is : " << sum;

    return 0;
}