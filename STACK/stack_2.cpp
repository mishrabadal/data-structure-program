#include <iostream>
#include <stack>
using namespace std;
int main()
{
   stack<char>st;
   string s="badal";

   cout<<s<<endl;
   
   for(int i=0;i<s.size();i++)
   {
    st.push(s[i]);
   }
   int i=0;
   while(!st.empty())
   {
    s[i]=st.top();
    i++;
    st.pop();
   }
   cout<<s;
    return 0;
}