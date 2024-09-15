#include <iostream>
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

void reverse_charcter()
{
    char ch[] = "india";
    int start = 0, end = 5 - 1;
    while (start < end)
    {
        swap(ch[start++], ch[end--]);
    }
    cout<<ch;
}

void palindrome_checker(){
    char ch[]="RADAR";
     int start = 0, end = 5 - 1;
    while(start<end){
        if(ch[start++] !=ch[end--])
        {
            cout<<"not palindrome";
            return;
        }
    }
    cout<<"yes palindrome";
}

void convert_into_lowercase(){
    char ch[] = "BAdal";
    for (int i = 0; ch[i] != '\0'; i++)
    {
        if(ch[i] >='a' && ch[i]<='z')
        {
            ch[i]=ch[i];
        }
        else{
            ch[i]=ch[i]-'A'+'a';
        }
    }
    cout<<ch;
}

void convert_into_uppercase(){
    char ch[] = "BAdal";
    for (int i = 0; ch[i] != '\0'; i++)
    {
        if(ch[i] >='A' && ch[i]<='Z')
        {
            ch[i]=ch[i];
        }
        else{
            ch[i]=ch[i]-'a'+'A';
        }
    }
    cout<<ch;
}

void convert_into_number(){
    char ch= '6';
    if(ch>='0' && ch<='9')
    {
        cout<<int(ch-'0')+2;
        }
    else{
        // char  = ;
        cout<<int(ch-'0');
    }
   // cout<<int('B');
}


int main()
{
   convert_into_number();
    
    return 0;
}