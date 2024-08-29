#include <iostream>
using namespace std;
int main()
{
    int n = 24, sum = 0;
    cout << "\nENTER THE YEAR : ";
    cin >> n;

    for (int i = 1; i < n; i++)
    {
        if (n % i == 0)
        {
            sum += i;
        }
    }
    cout << "sum : " << sum << endl;
    if (sum > n)
    {

        cout << n << " IS  ABUNDANT NUMBER";
    }
    else
    {
        cout << n << " IS NOT A anundant";
    }
    return 0;
}