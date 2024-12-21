#include<iostream>
#include<stack>
using namespace std;
int main(){
   stack<int>s;
   s.push(6);   s.push(26);   s.push(65);   s.push(76);   s.push(62);
   cout<<s.size()<<endl;
  // s.pop();
  // cout<<s.size();
   //cout<<s.top();
   cout<<s.empty()<<endl;

    return 0;
}