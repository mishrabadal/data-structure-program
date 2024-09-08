#include<iostream>
#include <bits/stdc++.h>
using namespace std;
int num(char c){
if(c=='I')
    return 1;
else if(c=='V')
return 5;
else if(c=='X')
return 10;
else if(c=='L')
return 50;
else if(c=='C')
return 100;
else if(c=='D')
return 500;
else
return 1000;
}
int roman_to_integer(){
    string s="XL";
    int sum=0,index=0;
    while (index<s.size()-1)
    {
        if(num(s[index])<num(s[index+1])){
            sum -=num(s[index]);
        }
        else{
            sum +=num(s[index]);
        }
        index++;
    }
    sum +=num(s[s.size()-1]);

    cout<<"integer is : "<<sum;
    return sum;
}

void integer_to_roman(){

}

void factorial(){
    vector<int>ans(1,1);
    int N=8;
    int ans;
    while (N>1)
    {
      int carry =0,res,size=ans.size();
      for (int i = 0; i < size; i++)
      {
       res = ans[i]*N+carry;
       ans[i]=res%10;
       carry = res/10;
      }
      while (carry)
      {
       ans.push_back(carry%10);
       carry /=10;
      }
      N--;
      
    }
    reverse(ans.begin(),ans.end());

    cout<<ans;
}

int main(){
  roman_to_integer();
    return 0;
}