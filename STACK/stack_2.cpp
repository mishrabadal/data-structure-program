#include <iostream>
#include <stack>
using namespace std;
int main()
{
   stack<char>st;
   string s="badal";
   for(int i=0;i<s.size();i++)
   {
    st.push(s[i]);
   }
   int i=0;
   while(!s.empty())
   {
    s[i]=st.top();
    i++;
    st.pop();d
   }
    return 0;
}