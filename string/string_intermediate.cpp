#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void sort_string()
{
    string s = "badal";
    vector<int> alpha(26, 0);
    for (int i = 0; i < s.size(); i++)
    {
        alpha[s[i] - 'a']++;
    }
    string ans;
    for (int i = 0; i < 26; i++)
    {
        char c = 'a' + i;
        while (alpha[i])
        {
            ans += c;
            alpha[i]--;
        }
    }
    cout << "sorrted string is : " << ans;
}

void longest_palindrome_length()
{
    string s = "aabbcbadajj";
    vector<int> lower(26, 0), upper(26, 0);
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] >= 'a')
        {
            lower[s[i] - 'a']++;
        }
        else
        {
            lower[s[i] - 'A']++;
        }
    }
    int count = 0;
    bool odd = 0;
    for (int i = 0; i < 26; i++)
    {
        if (lower[i] % 2 == 0)
        {
            count += lower[i];
        }
        else
        {
            count += lower[i] - 1;
            odd = 1;
        }
        if (upper[i] % 2 == 0)
        {
            count += upper[i];
        }
        else
        {
            count += upper[i] - 1;
            odd = 1;
        }
    };
    cout << "maximum length of palindrome word : " << count + odd;
}

// ADDITION OF TWO STRING FOR CALCULATION
void addition_of_string()
{
    string num1 = "123456";
    string num2 = "123";
    int index1 = num1.size() - 1;
    int index2 = num2.size() - 1;
    string ans;
    int carry = 0, sum;

    while (index2 >= 0)
    {
        sum = (num1[index1] - '0') + (num2[index2] - '0') + carry;
        carry = sum / 10;
        char c = '0' + sum % 10;
        ans += c;
        index2--;
        index1--;
    }
    // agar index1 bachha hai to
    while (index1 >= 0)
    {
        sum = (num1[index1] - '0') + carry;
        carry = sum / 10;
        char c = '0' + sum % 10;
        ans += c;
        index1--;
    }
    if (carry)
    {
        ans += '1';
    }
    reverse(ans.begin(), ans.end());
    cout << "sum is : " << ans;
}

void sorting_sentence()
{
    string s = "badal3 mishra4 this1 is2";
    vector<string> ans(10);
    string temp;
    int count = 0, index = 0;
    while (index < s.size())
    {
        if (s[index] == ' ')
        {
            int pos = temp[temp.size() - 1] - '0';
            temp.pop_back();
            ans[pos] = temp;
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
    for (int i = 1; i <= count; i++)
    {
        temp += ans[i];
        temp += ' ';
    }
    temp.pop_back();
    cout << temp;
}

void sort_vowel_in_string()
{
    string s = "UBAUDALE";
    vector<int> lower(26, 0);
    vector<int> upper(26, 0);
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
    string vowel;
    // for uppercase
    for (int i = 0; i < 26; i++)
    {
        char c = 'A' + i;
        while (upper[i])
        {
            vowel += c;
            upper[i]--;
        }
    }

    // for lowercase
    for (int i = 0; i < 26; i++)
    {
        char c = 'a' + i;
        while (lower[i])
        {
            vowel += c;
            lower[i]--;
        }
    }
//inserting value
    int first = 0, second = 0;//second is pointng vowwel
    while (second < vowel.size())
    {
        if (s[first] == '#')
        {
            s[first] = vowel[second];
            second++;
        }
        first++;
    }
    cout <<"VOWEL ARRANGED IN SORTED ORDER : "<< s;
}

int main()
{
    sort_string();
    // longest_palindrome_length();
    // addition_of_string();
    // sorting_sentence();
    //sort_vowel_in_string();
    return 0;
}