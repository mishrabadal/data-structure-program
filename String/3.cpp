#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
// Palindrome String
//BruteForce : reverse and match with original string
bool isPalindrome(string &s)
{
    string s2 = s;
    reverse(s.begin(), s.end());
    if (s == s2)
        return 1;
    else
        return 0;
}

//optimal : solve using two pointer
bool isPalindrome(string &s)
{
    int i = 0;
    int j = s.size() - 1;
    while (i < j)
    {
        //agar kabhi me dono index ka element match nhi kiya to iska matlab palindrome nhi hai
        if (s[i++] != s[j--])
            return 0;
    }
    return 1;
}

int main()
{

    return 0;
}