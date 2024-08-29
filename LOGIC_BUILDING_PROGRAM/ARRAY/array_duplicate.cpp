#include <iostream>
using namespace std;
void duplicateCheck(int arr[], int size)
{
    int flag = 0;
    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++)
        {

            if (arr[j] == arr[i])
            {
                flag = 1;
                cout << arr[i] << " is Duplicate";
                break;
            }
        }
    }
    if (flag == 0)
    {
        cout << "duplicate not Found !";
    }
}
int main()
{
    int arr[] = {1, 2, 4, 3,  8,4};
    int size = sizeof(arr) / sizeof(arr[0]);

    duplicateCheck(arr, size);

    return 0;
}