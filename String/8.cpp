#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
//Sort a String
string sort(string s)
{
    // ss
    sort(s.begin(), s.end());
    return s;
}

//optimal approach using two pointer
string sort(string s)
{
    // ss
    vector<int> alpha(26, 0);
    for (char ch : s)
    {
        alpha[ch - 'a']++;
    }
    string ans;
    for (int i = 0; i < 26; i++)
    {
        char ch = i + 'a';

        while (alpha[i])
        {
            ans += ch;
            alpha[i]--;
        }
    }
    return ans;
}
int main()
{

    return 0;
}