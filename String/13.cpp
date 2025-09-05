#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
// 13. Roman to Integer
// approach : 1
int romanToInt(string s)
{
    unordered_map<char, int> mp;
    mp['I'] = 1, mp['V'] = 5, mp['X'] = 10, mp['L'] = 50, mp['C'] = 100, mp['D'] = 500, mp['M'] = 1000;
    int n = s.size();
    int ans = 0;
    for (int i = 0; i < n - 1; i++)
    {
        if (mp[s[i]] < mp[s[i + 1]])
        {
            // agar pichhle charcater ka decimal value chhota hai(<) hai next character ke decimal value se to negative treat kare
            ans -= mp[s[i]];
        }
        // agar pichhle charcater ka decimal value bara hai(>) hai next character ke decimal value se to positive treat kare
        else
        {
            ans += mp[s[i]];
        }
    }
    // adding last character kyonki iska koi next character nhi hai
    ans += mp[s[n - 1]];
    return ans;
}

// approach : 2
//  Helper Function:Num(ch) it will give roman of integeral value
int Num(char ch)
{
    if (ch == 'I')
        return 1;
    if (ch == 'V')
        return 5;
    if (ch == 'X')
        return 10;
    if (ch == 'L')
        return 50;
    if (ch == 'C')
        return 100;
    if (ch == 'D')
        return 500;
    else
        return 1000;
}

int romanToInt(string s)
{
    int size = s.size();
    int ans = 0;
    for (int i = 0; i < size - 1; i++)
    {
        // agar pichhle charcater ka decimal value chhota hai(<) hai next character ke decimal value se to negative treat kare

        if (Num(s[i]) < Num(s[i + 1]))
        {
            ans -= Num(s[i]);
        }

        // agar pichhle charcater ka roman bara ha(>) hai next character ke roman se to positive treat kare
        else
        {
            ans += Num(s[i]);
        }
    }
    // adding last character kyonki iska koi next character nhi hai
    ans += Num(s[size - 1]);

    return ans;
}

int main()
{

    return 0;
}