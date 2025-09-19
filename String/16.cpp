#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
// 3. Longest Substring Without Repeating Characters

// solving using sliding window
int lengthOfLongestSubstring(string s)
{
    // count array sare character jo ko 256 hai agar usko
    // dekh chuke hai to uske ascii value vale index ko 1 kar dega lekin wo character window ka part hona chahiye.
    // agar part nhi hai to uska ascii index 0 rahega
    vector<bool> count(256, 0);

    // first window size ko kam karega aur second character traverse karega
    int first = 0, second = 0, len = 0;
    while (second < s.size())
    {
        // agar charcter hamare window me hai aur usko pahle dekh chuke hai to
        // uske ascii index ko  0 karenge first ko increment karenge
        while (count[s[second]])
        {
            count[s[first]] = 0; // us charcter ke pahle ka sare charater ko window se remove karenge
            first++;
        }
        count[s[second]] = 1;
        len = max(len, second - first + 1);
        second++;
    }

    return len;
}

// solve using map
int lengthOfLongestSubstring(string s)
{
    int n = s.size();
    unordered_map<char, bool> mp;
    int first = 0, second = 0, len = 0;
    while (second < n)
    {
        while (mp[s[second]])
        {
            mp[s[first]] = 0;
            first++;
        }
        mp[s[second]] = 1;
        len = max(len, second - first + 1);
        second++;
    }
    return len;
}
int main()
{
    lengthOfLongestSubstring("abcabcbb");
    return 0;
}