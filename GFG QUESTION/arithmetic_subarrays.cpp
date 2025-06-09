#include <iostream>
#include <cmath>
using namespace std;
#include <vector>
#include <algorithm>
#include <unordered_set>

// Brute force
bool check(vector<int> &arr)
{
    sort(arr.begin(), arr.end());
    int n = arr.size();
    int d = arr[1] - arr[0];
    for (int i = 2; i < n; i++)
    {
        if (arr[i] - arr[i - 1] != d)
            return false;
    }
    return true;
}

// optimized method

bool check(vector<int> &arr)
{
    int n = arr.size();
    int minE = INT_MAX;
    int maxE = INT_MIN;
    unordered_set<int> st;

    for (int &num : arr)
    {
        minE = min(minE, num);
        maxE = max(maxE, num);
        st.insert(num);
    }
    if ((maxE - minE) % (n - 1) != 0)
        return false;
    int d = (maxE - minE) / (n - 1);
    int curr = minE + d;
    while (curr < maxE)
    {
        if (st.find(curr) == st.end())
            return false;
            curr +=d;
    }

    return true;
}
vector<bool> checkArithmeticSubarrays(vector<int> &nums, vector<int> &l, vector<int> &r)
{

    int m = l.size();
    vector<bool> result;
    for (int i = 0; i < m; i++)
    {
        int start = l[i];
        int end = r[i];
        vector<int> arr(begin(nums) + start, begin(nums) + end + 1);
        bool isAP = check(arr);
        result.push_back(isAP);
    }
    return result;
}

int main()
{
    vector<int> arr = {3, 4, 5, 6, 7, 8};
    int start = 2;
    int end = 5;

    vector<int> arr2(begin(arr) + start, begin(arr) + end + 1);

    for (auto i : arr2)
        cout << i << " ";

    return 0;
}
