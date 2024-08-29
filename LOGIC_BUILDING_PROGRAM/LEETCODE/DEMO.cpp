#include <iostream>
using namespace std;
int main()
{
    int nums[] = {2,7,11,15};
    int target = 9;
    int flag;
    int i, j;
    int size = sizeof(nums) / sizeof(nums[0]);
    cout << size;
    for (i = 0; i < size; i++)
    {
        for (j = 0; j < size; j++)
        {
            int sum = nums[i] + nums[j];
            if (sum == target)
            {

                flag = 1;
                break;
            }
        }
        if (flag == 1)
        {

            cout << endl;
            break;
        }
    }
    cout << " value of i : " << i << " and data is " << nums[i] << endl;
    cout << " value of j : " << j << " and data is " << nums[j] << endl;
    return 0;
}