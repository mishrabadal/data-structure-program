#include <iostream>
using namespace std;
#include <vector>
#include <algorithm>

// 2d vector creation and print
void vector_create()
{
    vector<vector<int>> vect{
        {1, 2},
        {3, 4, 5},
        {6, 7, 8, 9}};
    for (int i = 0; i < vect.size(); i++)
    {
        for (int j = 0; j < vect[i].size(); j++)
        {
            cout << vect[i][j] << " ";
        }
        cout << endl;
    }
}

// 2d vector of same element
void vector_create_same_value()
{
    vector<vector<int>> matrix(3, vector<int>(4, 1));

    for (int i = 0; i < matrix.size(); i++)
    {
        for (int j = 0; j < matrix[i].size(); j++)
        {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
    cout << "\nRows : " << matrix.size();
    cout << "\nColumns : " << matrix[0].size();
}

void wave_form()
{
    int arr[4][4] = {16, 21, 37, 43, 52, 67, 74, 85, 94, 10, 11, 12, 13, 14, 15, 16};
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl
         << endl;
    int row = 4, col = 4;

    for (int j = 0; j < col; j++)
    {
        cout << "[ ";
        if (j % 2 == 0)
        {
            for (int i = 0; i < row; i++)
                cout << arr[i][j] << " ";
        }
        else
        {
            for (int i = row - 1; i >= 0; i--)
                cout << arr[i][j] << " ";
        }
        cout << "] ";
    }
}

void transpose_matrix()
{
    int matrix[4][4] = {11, 20, 30, 40, 50, 60, 70, 80, 90, 10, 11, 12, 13, 14, 15, 16};
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
    // transpose of matrix logic 1
    int n = 4;
    /* int arr[4][4];

     for (int i = 0; i < n; i++)
     {
         for (int j = 0; j < n; j++)
         {
             arr[j][i] = matrix[i][j];
         }
     }*/

    // transpose of matrix logic 2
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
            swap(matrix[i][j], matrix[j][i]);
    }
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}

void rotate_matrix_by_90()
{
    int matrix[4][4] = {11, 20, 30, 40, 50, 60, 70, 80, 90, 10, 11, 12, 13, 14, 15, 16};
    int n = 4;
    int ans[4][4];
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;

    // Logic 1
    /* for (int i = 0; i < n; i++)
     {
         for (int j = 0; j < n; j++)
         {
             ans[j][n - 1 - i] = matrix[i][j];
         }
     }
     */
    // printing array

    // Logic 2

    // transpose of matrix
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
            swap(matrix[i][j], matrix[j][i]);
    }
    // Reverse each row
    for (int i = 0; i < n; i++)
    {
        int start = 0, end = n - 1;
        while (start < end)
        {
            swap(matrix[i][start], matrix[i][end]);
            start++;
            end--;
        }
    }

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
}

void rotate_180()
{
    int matrix[4][4] = {11, 20, 30, 40, 50, 60, 70, 80, 90, 10, 11, 12, 13, 14, 15, 16};
    int n = 4;
    int ans[4][4];
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;

    for (int j = 0; j < n; j++)
    {
        // column wise reverse
        int start = 0, end = n - 1;
        while (start < end)
        {
            swap(matrix[start][j], matrix[end][j]);
            start++;
            end--;
        }
    }

    // Row wise reverse

    for (int i = 0; i < n; i++)
    {
        int start = 0, end = n - 1;
        while (start < end)
        {
            swap(matrix[i][start], matrix[i][end]);
            start++;
            end--;
        }
    }
    // printing
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
}

void search_element()
{
    int matrix[4][4] = {11, 20, 30, 40, 50, 60, 70, 80, 90, 10, 11, 12, 13, 14, 15, 16};

    int ans[4][4];
    int target = 40;
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            if (matrix[i][j] == target)
            {
                cout << "YES found";
                break;
            }
        }
    }
    cout << endl;
    // logic 1

    // logic 2
    /* int n = 4, m = 4, x = 70;
     for (int i = 0; i < n; i++)
     {
         if (matrix[i][0] <= x && x <= matrix[i][n - 1])
         {
             int start = 0, end = m - 1, mid;
             while (start <= end)
             {
                 mid = (start + end) / 2;
                 if (matrix[i][mid] == x)
                 {
                     cout<<"found";

                     return 1;


                 }
                 else if (matrix[i][mid] < x)
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
      return 0;
      */
}

int main()
{
    // vector_create();
    //  vector_create_same_value();
    // wave_form();
    // spiral_form();
    // transpose_matrix();
    // rotate_matrix_by_90();
    // rotate_180();
    // search_element();
    return 0;
}