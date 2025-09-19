#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
// Smallest distinct window
int findSubString(string &str)
{
    vector<int> count(256, 0);
    int first = 0, second = 0, len = str.size(), diff = 0;
    // calculate all the unique character
    while (first < str.size())
    {
        if (count[str[first]] == 0)
        {
            diff++;
        }
        count[str[first]]++;
        first++;
    }
    // ab fir se count array ko 0 se kar rhe hai kyonki change ho chuka hahi vo
    for (int i = 0; i < 256; i++)
        count[i] = 0;

    first = 0;

    while (second < str.size())
    {
        // jab tak diff exist karta hai ya phir 0 na ho jaye tab tak window ka size increase karo
        while (diff && second < str.size()) // ye condition isliye hai ki ho sakta hai diff exist karta rah jaye but second string ke size bahar ho jaye
        {
            if (count[str[second]] == 0)
                diff--;

            count[str[second]]++;
            second++;
        }
        len = min(len, second - first);

        // jab tak diff ki value 1 na ban jaye

        // jab tak diff ka value 0 (diff==0 ye bhi condition ho sakta hai)rahega matlab sare character window mme present hai to window ka size chhota karo
        while (diff != 1)
        {
            len = min(len, second - first);
            count[str[first]]--;

            // agar 0 hoga gaya matlab 1 charcter missing hogaya window se diff++ kar do
            if (count[str[first]] == 0)
                diff++;

            first++;
        }
    }
    return len;
}
int main()
{

    return 0;
}