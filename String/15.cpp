#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
// Factorials of large numbers

vector<int> factorial(int N)
{
    // ye factorial ke answer ko reverse order me store karke rakhega (reverse order में digits store होंगे)।
    // pahle se 1 rahega
    vector<int> ans(1, 1);

    // N to 2 tak ka number ka multiplication hoga
    while (N > 1)
    {
        int carry = 0, res, size = ans.size();
        // multiply N every time of ans
        for (int i = 0; i < size; i++)
        {
            res = ans[i] * N + carry; // multiplied answer(result) हर digit × N + carry = result
            ans[i] = res % 10;        // tens digit ko ko uske sahi position par store bhi kar rhe hai
            carry = res / 10;         // carry
        }
        // अगर carry बचा है तो उसके digits ans में push_back कर दो।
        while (carry)
        {
            ans.push_back(carry % 10);
            carry /= 10;
        }
        N--;
    }

    // handling final answer , ans reverse कर दो (क्योंकि digits उल्टे store थे)।
    reverse(ans.begin(), ans.end());
    return ans;
}
int main()
{

    return 0;
}