#include <iostream>
#include <utility>
#include <vector>
using namespace std;

pair<int, int> countOddEven(vector<int> &arr)
{
    pair<int, int> ans;
    int odd = 0, even = 0;

    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] % 2 != 0)
            odd++;
        else
            even++;
    }

    ans.first = odd;
    ans.second = even;
    return ans;
}

vector<int> findUnion(vector<int> &a, vector<int> &b) {
        // Your code here
        // return vector with correct order of elements
    }


int main()
{
    vector<int> arr = {1, 2, 3, 4, 5};
    // defining a pair
    cout << countOddEven(arr).first << endl
         << countOddEven(arr).second;

    return 0;
}