#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
// String Rotated by 2 Places

string R_clock(string &s)
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

string R_anti(string &s)
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
bool isRotated(string &s, string &s2)
{
    string clockwise = s;
    string anticlockwise = s;
    R_clock(clockwise);
    R_clock(clockwise);
    if (clockwise == s2)
    {
        return 1;
    }

    R_anti(anticlockwise);
    R_anti(anticlockwise);
    if (anticlockwise == s2)
    {

        return 1;
    }

    return 0;
}
int main()
{

    return 0;
}