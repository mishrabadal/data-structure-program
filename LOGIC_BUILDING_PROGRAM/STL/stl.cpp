#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
//MAP
//map<int, int>m;//ascending order,unique
// m.insert(make_pair(20,110));
// m.insert(make_pair(34,76));
// m.insert(make_pair(30,30));
// m.insert(make_pair(14,76));
// m.insert(make_pair(67,31));
// m[12]=18;
// //delete
// m.erase(20);
// //search
// if(m.count(34))
// cout<<m[34]<<endl;

// //-----------------multi map ----------------------
// multimap<int,int>m;//duplicate allow
// m.insert(make_pair(20,110));
// m.insert(make_pair(34,76));
// m.insert(make_pair(20,30));
// m.insert(make_pair(14,76));
// m.insert(make_pair(67,31));


//-----------------unordered map ----------------------
// unordered_map<int,int>m;//duplicate allow
// m.insert(make_pair(20,110));
// m.insert(make_pair(34,76));
// m.insert(make_pair(20,30));
// m.insert(make_pair(14,76));
// m.insert(make_pair(67,31));


//-----------------unordered multimap map ----------------------
unordered_multimap<int,int>m;//duplicate allow
m.insert(make_pair(20,110));
m.insert(make_pair(34,76));
m.insert(make_pair(20,30));
m.insert(make_pair(14,76));
m.insert(make_pair(67,31));
//for print
  for (auto it = m.begin(); it !=m.end(); it++)
  {
    cout<<it->first<<" "<<it->second<<endl;;
  }
  



  return 0;
}