#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
// 1859. Sorting the Sentence
string sortSentence(string s)
{
    // ans array words ko uske index par store karega
    vector<string> ans(10);
    // temporary words ko store karega space se pahle tak ka. taki Digit(number) jo last me likha hai usko nikala ja sake
    string temp;

    // count will store total Digit(number) of words
    // index charcter ka index batayega
    int count = 0, index = 0;
    while (index < s.size())
    {
        // agar space aa gaya to temp me sa Digit(number) nikal ke
        // us Digit(number) ko as a index manake ans array  me words yani temp ko store kare
        if (s[index] == ' ')
        {
            // pos words ke last me jo Digit(number) hai usko store karega
            int pos = temp[temp.size() - 1] - '0';
            // temp ke last me jo Digit(number) hai usko remove kar rhe hai taki sirf word ko ans array me store kar sake
            temp.pop_back();
            ans[pos] = temp;
            // words store ho jane ke baad temp ko khali kar de
            temp.clear();

            count++;
        }
        else
        {
            temp += s[index];
        }
        index++;
    }
    // last vale me space nhi hota hai isliye is code ko likhe
    int pos = temp[temp.size() - 1] - '0';
    temp.pop_back();
    ans[pos] = temp;
    temp.clear();
    count++;

    // ab yaha temp me pura words ko arrange karke rakh rhe hai Digit(number) wise
    for (int i = 1; i <= count; i++)
    {
        temp += ans[i];
        temp += ' ';
    }
    // last me space add ho gaya hai usko remove kar rhe hai
    temp.pop_back();
    return temp;
}

int main()
{

    return 0;
}