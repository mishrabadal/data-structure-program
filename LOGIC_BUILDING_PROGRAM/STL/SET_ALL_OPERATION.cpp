#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
  //set<int> s;//for making acending order
  set<int, greater<int>> s;//for making desending order
  s.insert(10);
  s.insert(20);
  s.insert(30);
  s.insert(200);//duplicate not allowed
  s.insert(38);
   //delete
  s.erase(38);

  //printing the sets
  for (auto it = s.begin(); it != s.end(); it++)
  {
    cout << *it << endl;
  }
 
  //finding/searching the elements
  if (s.find(200) != s.end())
  {
    cout << "Present";
  }
  else
  {
    cout << "not Present";
  }

  //counting/searching the elements
  if(s.count(210))
  {
    cout<<"\navailable";
  }
  else{
       cout<<" \nnot available";
  }
  return 0;
}