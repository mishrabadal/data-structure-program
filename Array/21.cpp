#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
//Print Matrix in Wave Form
void waveForm()
{
    int arr[4][4] = {16, 21, 37, 43, 52, 67, 74, 85, 94, 10, 11, 12, 13, 14, 15, 16};
    int row = sizeof(arr) / sizeof(arr[0]);
    int col = sizeof(arr[0]) / sizeof(arr[0][0]);

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }


    cout<<endl<<"WAVE FORM"<<endl;
    for (int j = 0; j < col; j++)
    {
        if (j % 2 == 0)
        {
            for (int i = 0; i < row; i++)
                cout << arr[i][j] << " ";
        }
        else
        {
            for (int i = row-1; i >= 0; i--)
                cout << arr[i][j] << " ";
        }
        cout<<endl;
    }
}
int main()
{
    int arr[4][4] = {16, 21, 37, 43, 52, 67, 74, 85, 94, 10, 11, 12, 13, 14, 15, 16};
    waveForm();
    return 0;
}