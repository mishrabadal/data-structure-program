#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;

// 415. Add Strings
string add(string num1, string num2)
{
    //size of num1>num2
    int index1 = num1.size() - 1;
    int index2 = num2.size() - 1;

    string ans;
    int carry = 0, sum;

    //Add digits from right to left (jab tak num2 ke digits khatam na ho):
    while (index2 >= 0)
    {
        sum = (num1[index1] - '0') + (num2[index2] - '0') + carry;
        carry = sum / 10;
        char c = '0' + sum % 10;
        ans += c;
        index2--;
        index1--;
    }
    // Add remaining digits of num1:
    while (index1 >= 0)
    {
        sum = (num1[index1] - '0') + carry;
        carry = sum / 10;
        char c = '0' + sum % 10;
        ans += c;
        index1--;
    }
    //Handle final carry:
    if (carry)
    {
        ans += '1';
    }
    //reveerse result string क्योंकि हमने digits पीछे से जोड़े हैं → answer को reverse करके return करो।
    reverse(ans.begin(), ans.end());
    return ans;
}
string addStrings(string num1, string num2)
{

    if (num1.size() < num2.size())
        return add(num2, num1);
    else
        return add(num1, num2);
}
int main()
{

    return 0;
}