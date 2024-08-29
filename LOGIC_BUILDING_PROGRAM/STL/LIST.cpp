#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    list<int>l;
    l.push_back(20);
    l.push_back(22);
    l.push_back(14);
    l.push_front(50);
    l.push_back(40);
  //  cout<<l.back();

   // cout<<l.front()<<" "<<l.back();
   //print all elements of an array
   for (auto it = l.begin(); it !=l.end(); it++)
   {
    cout<<*it<<endl;;
   }
   




    return 0;
}