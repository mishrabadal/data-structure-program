#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
// 26. Remove Duplicates from Sorted Array
//  APPROACH 1 time : O(log.n)
int removeDuplicates(vector<int> &nums)
{
    set<int> st;
    int n = nums.size();
    for (int i = 0; i < n; i++)
    {
        st.insert(nums[i]);
    }
    int index = 0;
    //updating original array with unique element 
    for (auto it : st)
    {
        nums[index] = it;
        index++;
    }

    return index;
}

// APPROACH 2 time : O(n)
int _removeDuplicates(vector<int> &nums)
{
    int n = nums.size();
    int i = 0;
    for (int j = 1; j < n; j++)
    {
        if (nums[i] != nums[j])
        {
            //yaha par jis index par elemnt store ho rha hai hum next line usi index par ja rhe hai. lekin jab length return karna hai to index+1 return hoga because length har index se ek jayda hota hai
            nums[i + 1] = nums[j];
            i++;
        }
    }
    return i + 1;
}
// APPROACH 3 time :
int main()
{

    vector<int>arr={
        1,2,3,3,4,4,4,5
    };
    cout<<removeDuplicates(arr);

    return 0;
}