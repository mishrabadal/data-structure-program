#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
// Reverse a String

// Brute force : using one extra string
string reverseString(string &s)
{
    string ans = "";
    for (int i = s.length() - 1; i >= 0; i--)
    {
        ans += s[i];
    }
    return ans;
}

// optimal : solve using two pointer concept
string reverseString(string &s)
{

    int i = 0;
    int j = s.size() - 1;
    while (i < j)
    {
        //here element at index i is swapped with element at index j 
        swap(s[i++], s[j--]);
    }
    return s;
}

int main()
{
    string s = "badal";
    cout << s[0];
    string ans = "";
    for (int i = s.length() - 1; i >= 0; i--)
    {
        ans += s[i];
    }
    s = ans;
    cout << s;
    return 0;
}