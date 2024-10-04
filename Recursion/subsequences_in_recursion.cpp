#include <iostream>
using namespace std;
#include <bits/stdc++.h>
void subsequence(int arr[], int index, int n, vector<vector<int>> &ans, vector<int> temp)
{
    if (index == n)
    {
        ans.push_back(temp);
        return;
    }
    // if not included
    subsequence(arr, index + 1, n, ans, temp);
    // if yes included
    temp.push_back(arr[index]);
    subsequence(arr, index + 1, n, ans, temp);

    // main()
    // {
    //     int arr[] = {1, 2, 3};
    //     vector<vector<int>> ans;
    //     vector<int> temp;
    //     subsequence(arr, 0, 3, ans, temp);

    //     for (int i = 0; i < ans.size(); i++)
    //     {
    //         cout << "{";
    //         for (int j = 0; j < ans[i].size(); j++)
    //         {
    //             cout << ans[i][j] << " ";
    //         }
    //         cout << "} ";
    //         cout << endl;
    //     }

    // }

    // output
    //  {}
    //  {3 }
    //  {2 }
    //  {2 3 }
    //  {1 }
    //  {1 3 }
    //  {1 2 }
    //  {1 2 3 }
}

void subset(string &s, int index, int n, vector<string> &ans, string &temp)
{
    if (index == n)
    {
        ans.push_back(temp);
        return;
    }
    // if not included
    subset(s, index + 1, n, ans, temp);
    // if yes included
    temp.push_back(s[index]);
    subset(s, index + 1, n, ans, temp);
    temp.pop_back();

    // main()
    // {
    //     string s = "abcd";
    //     vector<string> ans; // final answer
    //     string temp;
    //     subset(s, 0, s.size(), ans, temp);

    //     for (int i = 0; i < ans.size(); i++)
    //     {

    //         cout << ans[i] << endl;
    //     }
    // }
    // output
    // d
    // c
    // cd
    // b
    // bd
    // bc
    // bcd
    // a
    // ad
    // ac
    // acd
    // ab
    // abd
    // abc
    // abcd
}

void parenthesis(int n, int left, int right, vector<string> &ans, string &temp)
{

    if (left + right == 2 * n)
    {
        ans.push_back(temp);
        return;
    }
    if (left < n)
    {
        temp.push_back('(');
        parenthesis(n, left + 1, right, ans, temp);
        temp.pop_back();
    }

    if (right < left)
    {
        temp.push_back(')');
        parenthesis(n, left, right + 1, ans, temp);
        temp.pop_back();
    }

    //     main()
    // {
    //    int n =3;
    //     vector<string> ans; // final answer
    //     string temp;
    //     parenthesis(n, 0,0,  ans, temp);

    //     for (int i = 0; i < ans.size(); i++)
    //     {

    //         cout << ans[i] << endl;
    //     }
    // output
    // ((()))
    // (()())
    // (())()
    // ()(())
    // ()()()
    //}
}

// subset element sum
void print(int arr[], int index, int n, int sum, vector<int> &ans)
{
    if (index == n)
    {
        ans.push_back(sum);
        return;
    }
    // not include
    print(arr, index + 1, n, sum, ans);

    // include
    print(arr, index + 1, n, sum + arr[index], ans);

    // main()
    // {

    //     int arr[] = {1, 2, 3, 4};
    //     vector<int> ans;
    //     print(arr, 0, 4, 0, ans);

    //     for (int i = 0; i < ans.size(); i++)
    //     {
    //         cout << ans[i] << endl;
    //     }
    // output
    //  0
    //  4
    //  3
    //  7
    //  2
    //  6
    //  5
    //  9
    //  1
    //  5
    //  4
    //  8
    //  3
    //  7
    //  6
    //  10

    // }
}

// target sum of subset of array
bool find(int arr[], int index, int n, int target)
{
    if (target == 0)
        return 1;
    if (index == n || target < 0)
        return 0;
    return find(arr, index + 1, n, target) || find(arr, index + 1, n, target - arr[index]);

    // int main()
    // {

    //     int arr[] = {1, 2, 3, 4};
    //     int target = 6;
    //     cout << find(arr, 0, 5, target) << " ";
    //     output is 1
    //     if print 1 means matched else 0 not matched
    //     return 0;
    // }
}

// total number of subsets whose sum is equal to target or sum variable ,repeation not allowed
int subset(int arr[], int index, int sum, int n)
{
    // below three line of code will work if all the elements in array is positive
    // if(sum ==0)
    // return 1;
    // if(sum< 0 || index==n)
    // return 0;

    // below two line of code will work if all the elements in array is non negative
    if (index == n)
        return sum == 0; // this statements means it will retutn 1 if condition true otherwise 0

    return subset(arr, index + 1, sum, n) + subset(arr, index + 1, sum - arr[index], n);
    // output 2
    //       main()
    //  {

    //     int arr[] = {1, 2, 3};
    //     int sum =3;
    //     int n =3;//size
    //     cout<<subset(arr,0,sum,n)<<endl;

    //     return 0;
    // }
}

// total number of subsets whose sum is equal to target or sum variable repeation allowed
int subsum(int arr[], int index, int n, int sum)
{
    if (sum == 0)
        return 1;
    if (index == n || sum < 0)
        return 0;
    return subsum(arr, index + 1, n, sum) + subsum(arr, index, n, sum - arr[index]);
    // output 3
    //      main()
    //  {

    //     int arr[] = {1, 2, 3};
    //     int sum = 3;
    //     int n = 3; // size
    //     cout << subsum(arr, 0, sum, n) << endl;

    //     return 0;
    // }
}
int main()
{

    int arr[] = {1, 2, 3};
    int sum = 3;
    int n = 3; //size
    cout << subsum(arr, 0, sum, n) << endl;

    return 0;
}