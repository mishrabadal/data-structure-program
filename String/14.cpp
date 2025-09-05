#include <bits/stdc++.h>
using namespace std;

// Algorithm: Integer to Roman (LeetCode 12)

// Mapping तैयार करो:

// Numbers और उनके Roman symbols का pair बनाओ:
// {1000 → "M", 900 → "CM", 500 → "D", … , 1 → "I"}

// Result string बनाओ:

// res = ""

// हर pair (value, symbol) के लिए:

// जब तक num >= value:

// res में symbol जोड़ो

// num = num - value

// Final Answer:

// जब पूरा num convert हो जाए, res return कर दो।
// 12. Integer to Roman
string intToRoman(int num)
{
    // 1.Numbers और उनके Roman symbols का pair बनाओ
    const vector<pair<int, string>> valueSymbols{
        {1000, "M"},
        {900, "CM"},
        {500, "D"},
        {400, "CD"},
        {100, "C"},
        {90, "XC"},
        {50, "L"},
        {40, "XL"},
        {10, "X"},
        {9, "IX"},
        {5, "V"},
        {4, "IV"},
        {1, "I"}};
    // make result string for storing result
    string res;

    // हर pair (value, symbol) के लिए
    for (int i = 0; i < valueSymbols.size(); i++)
    {
        int value = valueSymbols[i].first;
        string symbol = valueSymbols[i].second;
        // jab tak num>=value result me uske symbol ko add karo aur num =num-value
        while (num >= value)
        {
            // symbol added
            res += symbol;
            // value subtracted of symbol
            num -= value;
        }
    }
    return res;
}

int main()
{
    int num = 513;
    // cout << "Enter an integer (1-3999): ";
    // cin >> num;

    if (num < 1 || num > 3999)
    {
        cout << "Number out of range!" << endl;
    }
    else
    {
        cout << "Roman numeral: " << intToRoman(num) << endl;
    }

    return 0;
}
