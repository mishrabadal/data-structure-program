#include<iostream>
#include<string.h>
using namespace std;
int main(){
    char chrthjyj[] ="\0RAJ";
    char ch1[] = {'a','b','\0','c','d','e','h'};
    string str = "badal";
    cout<<str;
    int i=0;
    while(ch1[i] !='\0'){
        cout<<ch1[i]<<endl;
        i++;
    }
    return 0;
}