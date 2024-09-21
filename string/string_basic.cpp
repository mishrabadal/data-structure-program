#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void print()
{N
    char arr[] = {'a', 'b', 'c', 'd'};
    for (int i = 0; i < 4; i++)
    {
        cout << arr[i];
    }
    // user input
    char ch[10];
    cin >> ch;
    ch[2] = '\0';
    cout << ch;
}
void input()
{
    string str;
    getline(cin, str);
    cout << str << endl;
    cout << str.size();
}
void addition()
{
    string s1 = "badal";
    string s2 = " kumar";
    string s3 = s1 + s2;
    string s4 = s1.append(s2);
    cout << "concatination of string : " << s3 << endl;
    cout << "append string           : " << s4 << endl;
    cout << "size of string          : " << s1.size() << endl;

    string s5 = "this is \"india\"";
    cout << s5 << endl;

    string s6 = "\\";
    cout << s6 << endl;
}

void push_pop()
{
    string s1 = "badal";
    s1.push_back('s');
    s1.pop_back();
    cout << s1;
}

void reverse()
{
    string s = "rohit";
    // reverse string
    int start = 0, end = s.size() - 1;
    while (start < end)
    {
        swap(s[start], s[end]);
        start++;
        end--;
    }
    cout << s;
}

int palindrome()
{
    string s = "radar";
    int start = 0, end = s.size() - 1;
    while (start < end)
    {
        if (s[start] != s[end])
        {
            cout << "not palindrome";
            return 1;
        }
        start++;
        end--;
    }
    cout << "palindrome";
    return 0;
}
void defanging_ip_address()
{
    string address = "1.1.1";
    int index = 0;
    string ans;
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

void rotate_clockwise()
{
    string s = "badal";
    char last_character = s[s.size() - 1];
    int index = s.size() - 2;
    while (index >= 0)
    {
        s[index + 1] = s[index];
        index--;
    }
    s[0] = last_character;
    cout << s;
}

void rotate_anticlock_wise()
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
// rotate 2 place code
string R_clock(string &s)
{

    char last_character = s[s.size() - 1];
    int index = s.size() - 2;
    while (index >= 0)
    {
        s[index + 1] = s[index];
        index--;
    }
    s[0] = last_character;
    return s;
}

string R_anti(string &s)
{

    char first_charcter = s[0];
    int index = 1;
    while (index < s.size())
    {
        s[index - 1] = s[index];
        index++;
    }
    s[index - 1] = first_charcter;
    return s;
}

int rotate_by_2_place()
{
    string s = "badal";
    // string s2 = "albad";//clockwise
    string s2 = "dalba"; // ant clockwise
    string clockwise = s;
    string anticlockwise = s;
    R_clock(clockwise);
    R_clock(clockwise);
    if (clockwise == s2)
    {
        cout << "yes 2 place clock wise rotate matched" << endl;
        return 1;
    }
    R_anti(anticlockwise);
    R_anti(anticlockwise);
    if (anticlockwise == s2)
    {
        cout << "yes 2 place anti clock wise rotate matched" << endl;
        return 1;
    }

    cout << "not matched 2 place rotation" << endl;
    return 0;
}

int check_panagram()
{
    vector<bool> alpha(26, 0);
    string sentence = "thequickbrownfoxjumpsoverthelazydog";
    for (int i = 0; i < sentence.size(); i++)
    {
        alpha[sentence[i] - 'a'] = 1;
    }
    for (int i = 0; i < 26; i++)
    {

    

            if (alpha[i] == 0)
            {
                cout << "not pargram";
                return 0;
            }
        
    }
    cout << "yes pargram";
    return 1;
}



int main()
{
    // print();
    // input();
    // addition();
    // push_pop();
    // reverse();
    // palindrome();
    // defanging_ip_address();
    // rotate_clockwise();
    // rotate_anticlock_wise();
    cout << endl;
    // rotate_anticlock_wise();
    // rotate_by_2_place();
    check_panagram();
    return 0;
}