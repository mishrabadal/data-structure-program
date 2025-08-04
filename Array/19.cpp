#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
//Addition of two square matrices

 void Addition(vector<vector<int>>& matrixA, vector<vector<int>>& matrixB) {
        int n =matrixA.size();
        
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            matrixA[i][j]=  matrixA[i][j]+  matrixB[i][j];
        }
        
    }


int main()
{
    
    return 0;
}