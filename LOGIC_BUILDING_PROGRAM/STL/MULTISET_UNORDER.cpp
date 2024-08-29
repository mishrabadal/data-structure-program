#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
//multiset 
  // multiset<int>s;//acending order duplicate allowed
  // s.insert(23);
  // s.insert(25);
  // s.insert(28);
  // s.insert(39);
  // s.insert(10);
  // s.insert(28);

  //unorder set
  // unordered_set<int>s; //unique
  // s.insert(23);
  // s.insert(25);
  // s.insert(28);
  // s.insert(39);
  // s.insert(10);
  // s.insert(28);


//unordered set
  unordered_multiset<int>s;//acending order duplicate allowed
  s.insert(23);
  s.insert(25);
  s.insert(28);
  s.insert(39);
  s.insert(10);
  s.insert(28);

//for print
  for (auto it = s.begin(); it !=s.end(); it++)
  {
    cout<<*it<<endl;
  }
  



  return 0;
}