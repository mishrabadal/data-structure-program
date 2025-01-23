#include <iostream>
using namespace std;
#include <vector>

// return indexed fibonacii number
int nthFibonacci(int n)
{

    if (n <= 1)
        return n;
    return nthFibonacci(n - 1) + nthFibonacci(n - 2);
}

double myPow(double x, int n)
{
    if (n == 1)
        return x;
    return x * myPow(x, n - 1);
}

int fib(int n)
{
    if (n <= 1)
        return n;
    return fib(n - 1) + fib(n - 2);
}

vector<int> productExceptSelf(vector<int> &arr)
{
    vector<int> ans;

    for (int i = 0; i < arr.size(); i++)
    {
        int product = 1;
        for (int j = 0; j < arr.size(); j++)
        {
            if (i == j)
                continue;
            if (arr[j] == 0)
                product = 0;
            product *= arr[j];
        }
        ans.push_back(product);
    }

    for (auto i : ans)
        cout << i << " ";
    return ans;
}

// top down approach (MEMOIZATION APPROACH)
int F(int n, int M[])
{
    if (n == 0 || n == 1)
    {
        return M[n] = n;
        return n;
    }

    else if (M[n] != -1)
        return M[n];

    else
        return (M[n] = F(n - 1, M) + F(n - 2, M));
}

// BOTTOM UP  approach (TABULATION APPROACH)
void  F()
{
    int n = 5;
    int A[n + 1];
    A[0]=0;
    A[1]=1;
    for (int i = 2; i <= n; i++)
        A[i] = A[i - 1] + A[i - 2];
    for (auto i : A)
        cout << i << " ";
}
int main()
{
    // vector<int> arr = {10, 3, 5, 0, 2};
    // productExceptSelf(arr);

    int n = 5;
    int M[n + 1] = {-1};
    for (int i = 0; i < n + 1; i++)
        M[i] = -1;
    cout << endl;
    F(n, M);

    for (auto i : M)
        cout << i << " ";
    //F();
    return 0;
}