#include <iostream>
using namespace std;
bool Linear_search(int arr[], int n, int key)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == key)
        {
            return true;
        }
    }

    return false;
}
void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
int main()
{
    int arr[] = {6, 16, 8, 85, 73};
    int key = 116;
    bool result = Linear_search(arr, 5, key);
    if (result)
    {
        cout << "yes matched";
    }
    else
    {
        cout << "not matched";
    }
    return 0;
}