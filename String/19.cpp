#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;

// brute force
// 28. Find the Index of the First Occurrence in a String
// time complexity O(n.m) , space O(1)
int strStr(string haystack, string needle)
{

    int n = haystack.size(), m = needle.size();
    for (int i = 0; i <= n - m; i++)
    {
        int first = i, second = 0;
        while (second < m)
        {
            if (haystack[first] != needle[second])
            {
                break;
            }
            else
            {
                first++, second++;
            }
            if (second == m)
                return first - second;
        }
    }
    return -1;
}

// optimal solution
void lpsfind(vector<int> &lps, string &s)
{
    int n = s.size();
    int pre = 0, suf = 1;
    // Build LPS array
    while (suf < n)
    {
        // agr pre aur suff index me same charcter hai to lps[suf]=pre+1 auro dono ko increment kar de
        if (s[pre] == s[suf])
        {
            lps[suf] = pre + 1;
            pre++;
            suf++;
        }
        // agar charcter dono index me same na hai to pre-1 vale index in lps ka element  ko pre me dale .
        // phir pre aur suf vale index ka character ke match kare agr match na kare to phir se same step repeat hoga
        else
        {
            if (pre == 0)
            {
                lps[suf] = 0;
                suf++;
            }
            else
            {
                pre = lps[pre - 1];
            }
        }
    }
}

int strStr(string haystack, string needle)
{
    vector<int> lps(needle.size(), 0);
    lpsfind(lps, needle);
    int n = haystack.size(), m = needle.size();
    int first = 0, second = 0;
    while (first < n && second < m)
    {
        // match
        if (haystack[first] == needle[second])
        {
            first++, second++;
        }
        // not matched
        else
        {
            if (second == 0)
                first++;
            else
                second = lps[second - 1];
        }
    }
    // if answer exist
    if (second == m)
        return first - second;

    // if not matched
    return -1;
}
int main()
{
    strStr("sadbutsad", "sad");
    return 0;
}