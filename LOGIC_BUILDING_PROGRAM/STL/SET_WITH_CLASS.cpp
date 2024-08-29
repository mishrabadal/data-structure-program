#include <iostream>
#include <bits/stdc++.h>
using namespace std;
class person
{
public:
  int age;
  string name;
  bool operator<(const person &other) const
  {
    return age < other.age; // ascending order
  }
};
int main()
{

  set<person> s;
  person p1, p2, p3;
  p1.age = 10, p1.name = "mohit";
  p2.age = 11, p2.name = "pohit";
  p3.age = 12, p3.name = "rohit";

  s.insert(p1);
  s.insert(p2);
  s.insert(p3);

  // //printing the sets
  for (auto it = s.begin(); it != s.end(); it++)
  {
    cout << it->age << " " << it->name << endl;
  }

  return 0;
}