#include <iostream>
#include <sstream>
#include <string>

#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
// terminate next all charcter by null character insert
void null_charcter()
{
    char name[] = "badal";
    name[2] = '\0';
    cout << name;
}

void print_string()
{
    char ch[] = " india";
    cout << ch;
}

void print_array_of_charcter()
{
    char ch[] = {'a', 'b', 'c', 'f', 's', '\0'};
    cout << ch;
}

void count_length_of_charcter()
{
    char ch[] = "india";
    int count = 0;
    for (int i = 0; ch[i] != '\0'; i++)
    {
        count++;
    }
    cout << "length is : " << count;
}

void reverse_charcter_or_string()
{
    char ch[] = "india";
    int start = 0, end = 5 - 1;
    while (start < end)
    {
        swap(ch[start++], ch[end--]);
    }
    cout << ch;
}

void palindrome_checker_for_character_and_string()
{
    char ch[] = "RADAR";
    int start = 0, end = 5 - 1;
    while (start < end)
    {
        if (ch[start++] != ch[end--])
        {
            cout << "not palindrome";
            return;
        }
    }
    cout << "yes palindrome";
}

void convert_into_lowercase()
{
    char ch[] = "BAdal";
    for (int i = 0; ch[i] != '\0'; i++)
    {
        if (ch[i] >= 'a' && ch[i] <= 'z')
        {
            ch[i] = ch[i];
        }
        else
        {
            ch[i] = ch[i] - 'A' + 'a';
        }
    }
    cout << ch;
}

void convert_into_uppercase()
{
    char ch[] = "BAdal";
    for (int i = 0; ch[i] != '\0'; i++)
    {
        if (ch[i] >= 'A' && ch[i] <= 'Z')
        {
            ch[i] = ch[i];
        }
        else
        {
            ch[i] = ch[i] - 'a' + 'A';
        }
    }
    cout << ch;
}

void convert_into_number()
{
    char ch = 'b';
    cout << int(ch - 'a' + 1);
}

void declaration_of_string()
{
    // 1st way of declare string
    string str = "geeksforgeeks";
    cout << str << endl;
    // 2nd way of declare string
    string str2("gfg");
    cout << str2;
}

void string_make_of_n_character()
{
    string str(5, 'a');
    cout << str;
}

void taking_user_input()
{
    cout << "Enter your name  ";
    string str;
    getline(cin, str);

    cout << "Your name is : " << str;
}

void print_words_of_sentence()
{
    string str = "I LOVE MY INDIA";
    stringstream obj(str);
    string temp;
    while (obj >> temp)
    {
        cout << temp << endl;
    }
}

void string_iterator_method()
{
    string ::iterator itr;
    string s = "geeksforgeeks";
    itr = s.begin(); // first character
    cout << *itr;
    itr = s.end() - 1; // last character
    cout << *itr;
    cout << endl;
    string ::reverse_iterator rit;
    string s2 = "INDIA";
    rit = s2.rbegin(); // last character
    cout << *rit;
    rit = s2.rend() - 1; // first character
    cout << *rit;
}

void max_occ_of_character()
{
    string s = "aBdBcB";
    int arr[26] = {0};
    int number = 0;
    for (int i = 0; i < s.length(); i++)
    {
        char ch = s[i];
        if (ch >= 'a' && ch <= 'z')
        {
            number = ch - 'a';
        }
        else
        {
            number = ch - 'A';
        }
        arr[number]++;
    }

    int max = INT_MIN;
    int ans;

    for (int i = 0; i < 26; i++)
    {
        if (max < arr[i])
        {
            ans = i;
            max = arr[i];
        }
    }

    char finalAns = 'a' + ans;
    cout << finalAns;
}

void addition_of_string()
{
    string s1 = "badal ";
    string s2 = " kumar";
    cout << s1 + s2 << endl; // concatination of string
    string s3 = s1.append(s2);
    cout << s3 << endl;

    string s5 = "this is \"india\"";
    cout << s5;
}

void string_push_pop()
{
    string s1 = "badal ";
    s1.push_back('k'); // add k end of s1;
    s1.pop_back();     // remove k from s1
    cout << s1;
}

void defanging_ip_address()
{
    string address = "1.1.1";
    int index = 0;
    string ans = "";
    cout << address.size() << endl;
    while (index < address.size())
    {
        if (address[index] == '.')
        {
            ans = ans + "[.]";
        }
        else
        {
            ans = ans + address[index];
        }
        index++;
    }
    cout << ans;
}

void rotate_clockwise_String()
{
    string s = "badal";
    char last_charcter = s[s.size() - 1];
    int index = s.size() - 2;
    while (index >= 0)
    {
        s[index + 1] = s[index];
        index--;
    }
    s[0] = last_charcter;
    cout << s << endl;
}

void rotate_anti_clockwise_String()
{
    string s = "badal";
    char first_charcter = s[0];
    int index = 1;
    while (index < s.size())
    {
        s[index - 1] = s[index];
        index++;
    }
    s[index - 1] = first_charcter;
    cout << s;
}

void panagram()
{
    string sentence = "thequickbrownfoxjumpsoverthelazydog";
    vector<bool> alpha(26, 0);
    for (int i = 0; i < sentence.size(); i++)
    {
        alpha[sentence[i] - 'a'] = 1;
    }
    for (int i = 0; i < 26; i++)
    {
        if (alpha[i] == 0)
        {
            cout << "not panagram !";
            return;
        }
    }

    cout << "yes panagram !";
    return;
}

void sort_string_alphabetically()
{
    string s = "badal";
    vector<int> alpha(26, 0);
    for (int i = 0; i < 26; i++)
    {
        alpha[s[i] - 'a']++;
    }
    for (int i = 0; i < 26; i++)
    {
        char ch = 'a' + i;
        while (alpha[i])
        {
            cout << ch;
            alpha[i]--;
        }
    }
}
int main()
{
    sort_string_alphabetically();
    return 0;
}