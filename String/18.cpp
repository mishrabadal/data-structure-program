#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
//Longest Prefix Suffix(KMP ALGORITHM)
int getLPSLength(string &s)
{
    int n = s.size();
    vector<int> lps(n, 0);
    int pre = 0, suf = 1;
    //Build LPS array
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
    // longest prefix suffix ka length lps ke last index me hoga
    return lps[n - 1];
}

int main()
{

    return 0;
}