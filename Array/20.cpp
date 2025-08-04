#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
//Diagonal sum
int DiagonalSum(vector<vector<int> >& matrix) {
        // Code here
        int n = matrix.size();
        int sum=0;
        
        //left to right diagonal sum
        for(int i=0;i<n;i++)
        sum +=matrix[i][i];
        
        //right to left diagonal sum
        int i=0,j=n-1;
        while(j>=0)
        {
            sum +=matrix[i][j];
            i++;
            j--;
        }
        return sum;
    }

int main()
{
    
    return 0;
}