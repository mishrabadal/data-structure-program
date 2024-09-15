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

void rotate_matrix_by_90_clock()
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
    }
    // reversing the matrix row wise
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
    print_matrix(matrix, 4);

    // logic 1 start
    //  first reverse column wise
    //  for (int j = 0; j < n; j++)
    //  {
    //      int start = 0, end = n - 1;
    //      while (start < end)
    //      {
    //          swap(matrix[start][j], matrix[end][j]);
    //          start++;
    //          end--;
    //      }
    //  }

    // //then row wise reverse
    // for (int i = 0; i < n; i++)
    // {
    //     int start = 0, end = n - 1;
    //     while (start < end)
    //     {
    //         swap(matrix[i][start], matrix[i][end]);
    //         start++;
    //         end--;
    //     }
    // }
    // logic 1 end
    int ans[4][4];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            ans[n - 1 - i][n - 1 - j] = matrix[i][j];
        }
    }

    print_matrix(ans, 4);
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

void rotate_matrix_by_90_anticlock()
{
    int matrix[4][4] = {
        11, 20, 30, 40,
        50, 60, 70, 80,
        90, 10, 11, 12,
        13, 14, 15, 16};
    int n = 4;
    print_matrix(matrix, 4);
    // transpose of matrix
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            swap(matrix[i][j], matrix[j][i]);
        }
    }
    // reverse column wise
    for (int j = 0; j < n; j++)
    {
        int start = 0, end = n - 1;
        while (start <= end)
        {
            swap(matrix[start][j], matrix[end][j]);
            start++;
            end--;
        }
    }

    print_matrix(matrix, 4);
}

void n_times_rotation(int rotate_count, string rotate_type)
{
    int matrix[4][4] = {
        11, 20, 30, 40,
        50, 60, 70, 80,
        90, 10, 11, 12,
        13, 14, 15, 16};
    int n = 4;
    int x = rotate_count % 4;
    print_matrix(matrix, 4);
    while (x)
    {
        if (rotate_type == "clock")
        {

            // transposing the matrix
            print_matrix(matrix, 4);
            for (int i = 0; i < n - 1; i++)
            {
                for (int j = i + 1; j < n; j++)
                {
                    swap(matrix[i][j], matrix[j][i]);
                }
            }
            // reversing the matrix row wise
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
        }

        else
        {

            for (int i = 0; i < n - 1; i++)
            {
                for (int j = i + 1; j < n; j++)
                {
                    swap(matrix[i][j], matrix[j][i]);
                }
            }
            // reverse column wise
            for (int j = 0; j < n; j++)
            {
                int start = 0, end = n - 1;
                while (start <= end)
                {
                    swap(matrix[start][j], matrix[end][j]);
                    start++;
                    end--;
                }
            }
        }

        x--;
    }
    print_matrix(matrix, 4);
}

int main()
{
    // transpose_of_matrix();
    n_times_rotation(3, "anti");
    // rotate_matrix_by_90_clock();
    return 0;
}