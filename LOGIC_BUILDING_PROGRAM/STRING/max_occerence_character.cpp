#include <iostream>
using namespace std;
char getMaxOccCharacter(string s)
{
    int arr[26] = {0};
    // create an array of count of character
    for (int i = 0; i < s.length(); i++)
    {
        char ch = s[i];
        // lowercase conversion
        int number = 0;
        if (ch >= 'a' && ch <= 'z')
        {
            number = ch - 'a';//getting index of character
        }
        else
        {
            number = ch - 'A';//getting index of character
        }
        arr[number]++;
    }
    int maxi = -1, ans = 0;
    for (int i = 0; i < 26; i++)
    {
        if (maxi < arr[i])
        {
            ans = i;
            maxi = arr[i];
        }
    }

    char finalAns ='a'+ans;
    return finalAns;
}
int main()
{
    string s = "Zdcd";
cout <<"Most repeated character is : "<<getMaxOccCharacter(s);
    return 0;
}