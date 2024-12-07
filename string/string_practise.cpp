#include <iostream>
using namespace std;
#include<bits/stdc++.h>
void print()
{
    char ch[] = {'a', 'b', 'c', '\0'};
    int i = 0;
    while (ch[i] != '\0')
    {
        cout << ch[i] << " ";
        i++;
    }
}

void input()
{
    string str;
    getline(cin, str);
    cout << "data is  " << str;
}

void addition()
{
    string s1 = " badal";
    string s2 = " kumar";
    string s3 = s1.append(s2);
    s2.pop_back();
    s2.push_back('7');
    cout << s2;
}

void reverse()
{
    string s = "rohit";
    int start = 0, end = 4;
    while (start < end)
    {
        swap(s[start++], s[end--]);
    }
    cout << s;
}

void pailindrome()
{
    string s = "radar";
    string original = s;
    int start = 0, end = 4;
    while (start < end)
    {
        if (s[start++] != s[end--])
        {
            cout << "not palindrome ";
            return;
        }
    }
    cout << "palindrome";
    return;
}

void defaging_ip_address()
{
    string address = "1.1.1";

    int index = 0;
    string ans;
    while (index < address.size())
    {
        if (address[index] != '.')
        {
            ans = ans + address[index];
        }
        else
        {
            ans = ans + "[.]";
        }
        index++;
    }
    cout << ans;
}

void rotate_clock_wise()
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
    char first_character = s[0];
    int index = 0;
    while (index < s.size() - 1)
    {
        s[index] = s[index + 1];
        index++;
    }
    s[s.size() - 1] = first_character;
    cout << s;
}

bool check_panagram(){
    vector<bool>alpha(26,0);
    string senetence = "thequickbrownfoxjumpsoverthelazydog";
    for (int i = 0; i < senetence.size(); i++)
    {
       alpha[senetence[i]-'a']=1;
    }
    for(int i=0;i<26;i++){
        if(alpha[i]==0){
            cout<<"not panagram";
            return 0;
        }
    }
    cout<<"yes panagram";
    return 1;
}
int main()
{
    check_panagram();
    return 0;
}