#include <iostream>
#include <vector>
#include<set>
#include<map>
using namespace std;
//Boolean Matrix
void booleanMatrix(vector<vector<int>> &mat)
{
    set<int>r,c;
    int row = mat.size();
    int col = mat[0].size();
    vector<vector<int>> ans(row, vector<int>(col, 0));
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
            if (mat[i][j] == 1)
            {
                r.insert(i);
                c.insert(j);
            }
    }
  
  for(auto it:r)
  {
      for(int j=0;j<col;j++)
      mat[it][j]=1;
  }
  
   for(auto it:c)
  {
      for(int i=0;i<col;i++)
      mat[i][it]=1;
  }

}
int main()
{
   vector<int>arr={1,2,3,4};
   int n = arr.size();
   int b[n]={0};
   b[0]=6;
    return 0;
}