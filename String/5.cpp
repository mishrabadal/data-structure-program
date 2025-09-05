#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
// rotate a charatcter in string anti clockwise
string R_anti(string s)
{

    char first_charcter = s[0];
    int index = 1;
    while (index < s.size())
    {
        s[index - 1] = s[index];
        index++;
    }
    s[index - 1] = first_charcter;
    return s;
}

int main()
{

    return 0;
}