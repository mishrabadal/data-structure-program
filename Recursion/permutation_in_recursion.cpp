#include <iostream>
using namespace std;
#include <bits/stdc++.h>
// to show all permutation 1st method
void permut(int arr[], vector<vector<int>> &ans, vector<int> &temp, vector<bool> &visited)
{
  if (visited.size() == temp.size())
  {
    ans.push_back(temp);
    return;
  }
  for (int i = 0; i < visited.size(); i++)
  {
    if (visited[i] == 0)
    {
      visited[i] = 1;
      temp.push_back(arr[i]);
      permut(arr, ans, temp, visited);
      visited[i] = 0;
      temp.pop_back();
    }
  }
  // output
  // 1 2 3
  // 1 3 2
  // 2 1 3
  // 2 3 1
  // 3 1 2
  // 3 2 1
  //  main()
  // {

  //   int arr[] = {1, 2, 3};
  //   vector<vector<int>> ans;
  //   vector<int> temp;
  //   vector<bool> visited(3, 0);
  //   permut(arr, ans, temp, visited);

  //   for (int i = 0; i < ans.size(); i++)
  //   {
  //     for (int j = 0; j < ans[i].size(); j++)
  //       cout << ans[i][j] << " ";
  //     cout << endl;
  //   }

  //
  // }
}

// to show/print all permutation 2nd method
void permutation(vector<int> &arr, vector<vector<int>> &ans, int index)
{

  if (index == arr.size())
  {
    ans.push_back(arr);
    return;
  }
  for (int i = index; i < arr.size(); i++)
  {
    swap(arr[i], arr[index]);
    permutation(arr, ans, index + 1);
    swap(arr[i], arr[index]);
  }

  // int main()
  // {

  //   vector<int> arr = {1, 2, 3};
  //   vector<vector<int>> ans;
  //   vector<int> temp;
  //   vector<bool> visited(3, 0);
  //   permutation(arr, ans, 0);

  //   for (int i = 0; i < ans.size(); i++)
  //   {
  //     for (int j = 0; j < ans[i].size(); j++)
  //       cout << ans[i][j] << " ";
  //     cout << endl;
  //   }
  // }
}

// digit ka repetition allowed hai
void permut(vector<int> &arr, vector<vector<int>> &ans, int index)
{
  if (index == arr.size())
  {
    ans.push_back(arr);
    return;
  }
  vector<bool> use(21, 0);
  for (int i = index; i < arr.size(); i++)
  {
    if (use[arr[i] + 10] == 0)
    {
      swap(arr[index], arr[i]);
      permut(arr, ans, index + 1);
      use[arr[i] + 10] = 1;
    }
  }

  // int main()
  // {

  //    vector<int>arr={1,1,2};
  //  vector<vector<int> >ans;
  //   permut(arr,ans,0);

  //   for (int i = 0; i < ans.size(); i++)
  //   {
  //     for (int j = 0; j < ans[i].size(); j++)
  //     {
  //      cout<<ans[i][j]<<" ";
  //     }
  //     cout<<endl;
  //   }
  // output
  //  1 1 2
  //  1 2 1
  //  2 1 1
  //}
}

// kitne tariko se answer ka adiition sum variable ke barabar aa skata hai
int way(int arr[], int m, int sum)
{

  if (sum == 0)
    return 1;
  if (sum < 0)
    return 0;
  int ans = 0;
  for (int i = 0; i < m; i++)
  {
    ans += way(arr, m, sum - arr[i]);
  }

  return ans;
  // ouput 6
  //  int main()
  //  {
  //    int arr[] = {1, 5, 6};
  //    int ans = 7;
  //    int m = 3; // array size
  //    cout << way(arr, m, ans);
  //    return 0;
  //  }
}

int main()
{

  vector<int> arr = {1, 2, 3};
  vector<vector<int>> ans;
  vector<int> temp;
  vector<bool> visited(3, 0);
  permutation(arr, ans, 0);

  for (int i = 0; i < ans.size(); i++)
  {
    for (int j = 0; j < ans[i].size(); j++)
      cout << ans[i][j] << " ";
    cout << endl;
  }
  return 0;
}