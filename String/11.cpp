#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;

// 2785. Sort Vowels in a String
string sortVowels(string s)
{
    //initialize two array for storing frequency of vowel
    vector<int> lower(26, 0);
    vector<int> upper(26, 0);

    //counting frequency of vowel
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u')
        {
            lower[s[i] - 'a']++;
            s[i] = '#';
        }
        else if (s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U')
        {
            upper[s[i] - 'A']++;
            s[i] = '#';
        }
    }

    //vowel string is used to collect all vowels in sorted array
    string vowel;

    //collecting uppercase vowel
    for (int i = 0; i < 26; i++)
    {
        char c = 'A' + i;
        while (upper[i])
        {
            vowel += c;
            upper[i]--;
        }
    }

    //collecting lowercase vowel
    for (int i = 0; i < 26; i++)
    {
        char c = 'a' + i;
        while (lower[i])
        {
            vowel += c;
            lower[i]--;
        }
    }
    
    // re inserting vowels in original string 
    int first = 0, second = 0; // second is pointng vowel
    while (second < vowel.size())
    {
        if (s[first] == '#')
        {
            s[first] = vowel[second];
            second++;
        }
        first++;
    }
    return s;
}
int main()
{

    return 0;
}