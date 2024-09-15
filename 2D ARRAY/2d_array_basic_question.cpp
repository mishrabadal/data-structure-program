#include <iostream>
using namespace std;
// 2d array creation

void addition_of_matrix()
{
    int arr1[2][3] = {1, 2, 3, 
                      4, 5, 6};
    int arr2[2][3] = {1, 2, 3, 4, 5, 6};
    int arr3[2][3];
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            arr3[i][j] = arr1[i][j] + arr2[i][j];
        }
    }

    cout << "addition matrix is " << endl;
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << arr3[i][j] << " ";
        }
    }
}
void sum_diagonal()
{
    int arr[3][3] = {
        1, 2, 10,
        4, 5, 6,
        7, 8, 9};

    // first diagonal sum
    int sum = 0;
    for (int i = 0; i < 3; i++)
    {
        sum += arr[i][i];
    }
    cout << sum << endl;
    // second diagonal sum
    sum = 0;
    int i = 0, j = 3 - 1;
    while (j >= 0)
    {
        sum += arr[i][j];
        i++;
        j--;
    }
    cout << sum;
}

void array_creation()
{
    int arr[3][4] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cout << arr[i][j] << " ";
        }
    }
}

void maximum_sum_row()
{
    int arr[3][3] = {
        11, 12, 10,
        4, 5, 6,
        7, 8, 9};

    int max = INT_MIN;
    int index = -1;
    for (int i = 0; i < 3; i++)
    {
        int sum = 0;
        for (int j = 0; j < 3; j++)
        {
            sum += arr[i][j];
        }
        if (sum > max)
        {
            max = sum;
            index = i;
        }
    }
    cout << "maximum sum of rows:  " << index;
}

void search_element_in_2d_sorted_array()
{
    int matrix[4][4] = {
        10, 20, 30, 40,
        50, 60, 70, 80,
        90, 100, 110, 120,
        130, 140, 150, 160};
    int n = 4;
    int target = 160;
    // logic 1 start

    // logic 1 end
    // logic 2 start
    for (int i = 0; i < n; i++)
    {
        if (target >= matrix[i][0] && target <= matrix[i][n - 1])
        {

            int start = 0, end = n - 1;
            int mid;
            while (start <= end)
            {

                mid = (start + end) / 2;
                if (matrix[i][mid] == target)
                {
                    cout << "found";
                    break;
                }
                else if (matrix[i][mid] < target)
                {

                    start = mid + 1;
                }
                else
                {

                    end = mid - 1;
                }
            }
        }
    }
}

int main()
{
    // array_creation();
    // addition_of_matrix();
    // sum_diagonal();
    maximum_sum_row();
    return 0;
}