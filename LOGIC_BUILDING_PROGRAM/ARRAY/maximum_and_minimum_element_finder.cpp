#include <iostream>
using namespace std;
int getMin(int num[], int n)
{
    int mini = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        mini = min(mini, num[i]);
        // if (num[i] < min)
        // {

        //     min = num[i];
        // }
    }

    return mini;
}
int getMax(int num[], int n)
{
    int maxi = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        maxi = max(maxi, num[i]);
        // if (num[i] > max)
        // {

        //     max = num[i];
        // }
    }

    return maxi;
}

int main()
{
    int num[] = {2, 7, 8, 3, 9, 5, 33, 5};
    cout << "MAXIMUM VALUE : " << getMax(num, 8) << endl;
    cout << "MINIMUM VALUE : " << getMin(num, 8);
    return 0;
}