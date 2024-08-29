#include <iostream>
using namespace std;
int main()
{
    int n1, n2;
    int arr[100];

    int index = -1;
    int flag = 0;
    cout << "\nenter starting and ending range of number : ";
    cin >> n1 >> n2;

    for (int j = n1; j <= n2; j++)
    {
        for (int i = j - 1; i >= 2; i--)
        {
            flag = 0;
            if (j % i == 0)
            {

                flag = 1;
                break;
            }
        }

        if (flag == 0)
        {
            index++;
            arr[index] = j;
        }
    }

    // printing array
    cout << "total number of prime numbers are : " << index + 1 << endl;
    for (int i = 0; i <= index; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}