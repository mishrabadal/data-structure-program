#include <iostream>
#include <stack>
using namespace std;
int main()
{
    stack<int> s;
    s.push(6);
    s.push(7);
    s.push(8);

    cout << s.size() << endl;
   
    // cout<<s.size();
     cout<<s.top();
    cout << s.empty() << endl;
      s.pop();

    return 0;
}