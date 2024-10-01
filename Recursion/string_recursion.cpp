#include <iostream>
using namespace std;
#include <bits/stdc++.h>

//check palindrome
bool palindrome(string str,int start,int end){
    //base condition
if(start>=end)
return 1;

//not matched
if(str[start] !=str[end])
return 0;

//matched
else
return palindrome(str,start+1,end-1);
}

//count vowel
int count(string str,int index){
    if(index==-1)
    return 0;
    if(str[index]=='a' || str[index]=='e' || str[index]=='i' || str[index]=='o' || str[index]=='u')
       return 1+count(str,index-1); 
       else
       return count(str,index-1);
    

}

//reverse a string
void reverse(string &str,int start,int end){
    if(start>=end)
    return;
    char c = str[start];
    str[start]=str[end];
    str[end]=c;
    reverse(str,start+1,end-1);

}

//lower case to uppercase
void lower(string &str,int index){
    if(index==-1)
    return;
    str[index]=str[index]-'a'+'A';
    lower(str,index -1);

}
int main()
{
   string str = "badal";
 lower(str,4);
cout<<str;

    return 0;
}