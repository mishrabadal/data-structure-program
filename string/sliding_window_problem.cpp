#include <iostream>
#include <bits/stdc++.h>
using namespace std;
// longest substring without repeating character
// longest_substring_without_repeating_character()
void longest_substring()
{
    string s = "abcabcbb";
    vector<bool> count(256, 0);
    int first = 0, second = 0, len = 0;
    while (second < s.size())
    {
        while (count[s[second]])
        {
            count[s[first]] = 0;
            first++;
        }
        count[s[second]] = 1;
        len = max(len, second - first + 1);
        second++;
    }
    cout << len;
    return;
}

// smallest distinct window
void smallest_distinct_windows()
{
    string str = "AABBBCBBAC"; // OUTPUT-3
    vector<int> count(256, 0);
    int first = 0, second = 0, len = str.size(), diff = 0;
    // calculate all the unique character
    while (first < str.size())
    {
        if (count[str[first]] == 0)
        {
            diff++;
        }
        count[str[first]]++;
        first++;
    }
    // ab fir se count array ko 0 se kar rhe hai kyonki change ho chuka hahi vo
    for (int i = 0; i < 256; i++)
        count[i] = 0;

    first = 0;

    while (second < str.size())
    {
        // jab tak diff exist karta hai ya phir 0 na ho jaye
        while (diff && second < str.size())
        {
            if (count[str[second]] == 0)
                diff--;

            count[str[second]]++;
            second++;
        }
        len = min(len, second - first);

        // jab tak diff ki value 1 na ban jaye
        while (diff != 1)
        {
            len = min(len, second - first);
            count[str[first]]--;

            if (count[str[first]] == 0)
                diff++;

            first++;
        }
    }
    cout << len;
}
int main()
{
    smallest_distinct_windows();

    return 0;
}