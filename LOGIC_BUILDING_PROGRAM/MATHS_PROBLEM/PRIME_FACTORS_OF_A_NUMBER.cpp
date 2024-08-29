#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "ENTER ANY NUMBER : ";
    cin >> n;
    int flag = 0;
    int arr[1000];
    int index = -1;
    int temp = 1;
    for (int i = n; i >= 2; i--)
    {

        for (int j = i - 1; j >= 2; j--)
        {
            flag = 0;
            if (i % j == 0)
            {
                flag = 1;
                break;
            }
        }
        if (flag == 0)
        {
            index++;
            arr[index] = i;
            // cout << arr[index] << endl;
        }
    }

    for (int i = index; i >= 0; i--)
    {

        if (temp == 1)
        {
            cout << "THE PRIME FACTORS OF " << n << " ARE : ";
        }
        temp = 2;
        if (n % arr[i] == 0)
        {
            cout << arr[i] << " ";
        }
    }

    return 0;
}