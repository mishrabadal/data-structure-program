#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
// 409. Longest Palindrome

int longestPalindrome(string s)
{
    vector<int> lower(26, 0), upper(26, 0);

    //counting frequency of small and capital letter
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] >= 'a')
        {
            lower[s[i] - 'a']++;
        }
        else
        {
            upper[s[i] - 'A']++;
        }
    }
    //even time charcter ko count store karega
    int count = 0;

    //agar koi charcter odd times hai odd me 1 update karenge(means true kar denge)
    bool odd = 0;

    //building palindrome length
    for (int i = 0; i < 26; i++)
    {
        

        //for samll letter
        //jin charcter ka count even hai ho vo pura count me store ho jayega
        if (lower[i] % 2 == 0)
        {
            count += lower[i];
        }
         
        else
        {
            //jin charcter ka count odd hai vo pura store nhi hoga 1 kam store hoga 
            count += lower[i] - 1; 
            //odd ko 0 se 1 kar diye(kyonki palindrome ke bich me ek character aa sakta hai)
            odd = 1;
        }
        
        //for capital letter
         //jin charcter ka count even hai ho vo pura count me store ho jayega
        if (upper[i] % 2 == 0)
        {
            count += upper[i];
        }
        else
        {
            //jin charcter ka count odd hai vo pura store nhi hoga 1 kam store hoga 
            count += upper[i] - 1;
             //odd ko 0 se 1 kar diye(kyonki palindrome ke bich me ek character aa sakta hai)
            odd = 1;
        }
    };
    return count + odd;
}
int main()
{

    return 0;
}