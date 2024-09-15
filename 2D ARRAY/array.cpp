#include <iostream>
using namespace std;

void print_matrix(int matrix[4][4], int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
}

void transpose_of_matrix()
{
    int matrix[4][4] = {
        11, 20, 30, 40,
        50, 60, 70, 80,
        90, 10, 11, 12,
        13, 14, 15, 16};
    int n = 4;
    int ans[4][4];
    // logic 1  start brute force with an extra array ans
    print_matrix(matrix, 4);
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < n; j++)
    //     {
    //         ans[j][i] = matrix[i][j];
    //     }
    // }
    // logic 1 end  brute force

    // logic 2 without an extra array
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            swap(matrix[i][j], matrix[j][i]);
        }
    }

    print_matrix(matrix, 4);
}

void rotate_matrix_by_90()
{
    int matrix[4][4] = {
        11, 20, 30, 40,
        50, 60, 70, 80,
        90, 10, 11, 12,
        13, 14, 15, 16};
    int n = 4;
    int ans[4][4];
    // brute force logic 1 start
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < n; j++)
    //     {
    //         ans[j][n - 1 - i] = matrix[i][j];
    //     }
    // }
    // brute force logic 1 end
    // logic 2

    // transposing the matrix
    print_matrix(matrix, 4);
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            swap(matrix[i][j], matrix[j][i]);
        }
        // reversing the matrix
        int start = 0, end = n - 1;
        while (start < end)
        {
            swap(matrix[i][start], matrix[i][end]);
            start++;
            end--;
        }
    }

    print_matrix(matrix, 4);
}

void rotate_matrix_by_180()
{
        int matrix[4][4] = {
        11, 20, 30, 40,
        50, 60, 70, 80,
        90, 10, 11, 12,
        13, 14, 15, 16};
    int n = 4;
    print_matrix(matrix,4);
    // first reverse column wise
    for (int j = 0; j < n; j++)
    {
        int start = 0, end = n - 1;
        while (start < end)
        {
            swap(matrix[start][j], matrix[end][j]);
            start++;
            end--;
        }
    }

    //then row wise reverse
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
        print_matrix(matrix,4);
}

int main()
{
    // transpose_of_matrix();
    rotate_matrix_by_180();
    return 0;
}