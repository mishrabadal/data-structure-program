#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
// rotate a charatcter in string clockwise
string R_clock(string s)
{

    char last_character = s[s.size() - 1];
    int index = s.size() - 2;
    while (index >= 0)
    {
        s[index + 1] = s[index];
        index--;
    }
    s[0] = last_character;
    return s;
}



int main()
{
 
    return 0;
}