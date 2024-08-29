#include <iostream>
using namespace std;
#include <string.h>
int main()
{
    string str = "f";
    str += 2*2;
    cout <<str;
    int n;
    cout << "ENTER ANY NUMBER ";
    cin >> n;
    int arr[50];
    int index = -1;
    int number = n;
    int sum = 0;
    while (n > 0)
    {
        sum += (n % 10) * (n % 10) * (n % 10);
        index++;
        arr[index] = (n % 10);
        n = n / 10;
    }
    if (sum == number)
    {
        cout << number << " IS ARMSTRONG NUMBER";
    }
    else
    {
        cout << number << " IS NOT ARMSTRONG NUMBER BECAUSE IT'S DIGIT CUBIC SUM IS " << sum << endl;
        for (int i = 0; i <= index; i++)
        {
            cout << arr[i] << endl;
        }
    }

    return 0;
}