#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
// 1108. Defanging an IP Address
string defangIPaddr(string address)
{
    string ans = "";
    for (int i = 0; i < address.size(); i++)
    {
        // jab jab '.' dikhega  ans me [.] ko  dalenge
        if (address[i] == '.')
            ans += "[.]";
        else
            ans += address[i];
    }
    return ans;
}


int main()
{

    return 0;
}