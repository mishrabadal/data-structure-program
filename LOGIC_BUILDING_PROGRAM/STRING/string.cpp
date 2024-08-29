#include <iostream>
using namespace std;
void null_character()
{
    char name[20];
    cout << "enter your name : ";
    cin >> name;
    name[2] = '\0';
    cout << "your name is : " << name;
}

void print_string()
{
    char ch[] = "INDIA";
    for (int i = 0; ch[i] != '\0'; i++)
    {
        cout << ch[i] << " ";
    }
}

void count_length()
{
    char ch[] = "INDIA";
    int count = 0;
    for (int i = 0; ch[i] != '\0'; i++)
    {
        count++;
    }
    cout << "length is : " << count;
}
void reverse_string()
{
    char ch[] = "INDIA";
    cout << "Before Reverse : " << ch << endl;
    int s = 0;
    int e = 4;
    while (s < e)
    {
        swap(ch[s++], ch[e--]);
    }
    cout << "AFTER Reverse : " << ch << endl;
}

void palindrome()
{
    char ch[] = "radar";
    string temp = ch;

    int s = 0;
    int e = temp.length() - 1;
    while (s < e)
    {
        swap(ch[s++], ch[e--]);
    }

    if (ch == temp)
    {
        cout << "Yes palindrome " << endl;
    }
    else
    {
        cout << "not palindrome " << endl;
    }
}
char toLowerCase(char ch)
{

    if (ch >= 'a' && ch <= 'z')
    {

        return ch;
    }
    else
    {

        char temp = ch - 'A' + 'a';
        return temp;
    }
}

bool palindrome_logic_2()
{
    char ch[] = "Radar";
    int s = 0;
    int e = 4;
    while (s <= e)
    {
        if (toLowerCase(ch[s]) != toLowerCase(ch[e]))
        {
            return 0; // not palindrome
        }
        else
        {
            s++;
            e--;
        }
    }
    return 1;
}

char toUpperCase()
{
    char ch = 'a';
    if (ch >= 'A' && ch <= 'Z')
    {
        return ch;
    }
    else
    {
        char temp = ch - 'a' + 'A';
        return temp;
    }
}

char toNumber()
{
    char ch = '1';
    if (ch >= '0' && ch <= '9')
    {
        return ch;
    }
    else
    {
        char temp = ch - '0';
        return temp;
    }
}

int main()
{
    // null_character();
    // print_string();
    // count_length();
    // reverse_string();
    // palindrome();
    cout << palindrome_logic_2();
    // cout <<toLowerCase();
    // cout << toUpperCase();
    // cout << toNumber();
    return 0;
}