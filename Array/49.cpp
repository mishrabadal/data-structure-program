#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
// Indexes of Subarray Sum

// BruteForce O(N^2)
vector<int> subarraySum(vector<int> &arr, int target)
{

    int n = arr.size();
    int j = 0;
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        int sum = 0;
        for (int j = i; j < n; j++)
        {
            sum += arr[j];
            if (sum == target)
                return {i + 1, j + 1};
        }
    }
    return {-1};
}

// Time Complexity Analysis
// Outer loop (for (int i = 0; i < n; i++)) हर element को एक बार traverse करता है → O(n).
// Inner while loop (while (sum > target && j < i)) भी मिलाकर हर element को अधिकतम एक बार ही हटाता है।
// यानी j pointer भी maximum n बार move होगा।

// इस तरह दोनों pointers (i और j) मिलकर array को at most 2n बार traverse करेंगे।
// 👉 Final Time Complexity = O(n)
// 👉 Space Complexity = O(1) (क्योंकि सिर्फ कुछ variables इस्तेमाल हो रहे हैं)।
vector<int> subarraySum(vector<int> &arr, int target)
{
    int n = arr.size();
    int j = 0;
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];

        while (sum > target && j < i)
        {
            sum -= arr[j++];
        }

        if (sum == target)
            return {j + 1, i + 1};
    }
    return {-1};
}

int main()
{

    return 0;
}