#include <iostream>
#include <bits/stdc++.h>
#include <map>
#include <unordered_map>
using namespace std;

// simple map
// it gives result in sorted order
void simple_map()
{
    map<int, int> m;
    // inserting element
    m[2] = 3;
    m[1] = 2;

    m.insert({4, 5});
    m.erase(2);
    for (auto it : m)
        cout << it.first << "  " << it.second << endl;

    // find
    if (m.count(8))
        cout << "exist";
    else
        cout << "not exist";
}
// map
void simple_map2()
{
    map<int, string> myMap;
    myMap[1] = "Apple";
    myMap[2] = "Banana";
    myMap[3] = "Cherry";

    // Searching for key 2
    // myMap.erase(3);
    myMap.clear();
    auto it = myMap.find(4);
    if (it != myMap.end())
    {
        cout << "Found: " << it->first << std::endl;
    }
    else
    {
        cout << "Key not found." << endl;
        ;
    }
    if (myMap.empty())
        cout << "yes empty";
    else
        cout << "not empty";

    cout << myMap.size();
}

void unordered_map()
{
    unordered_map<int, int> m;
    m.insert({4, 51});
    m.insert({1, 6});
    m.insert({7, 5});
    m.insert({17, 5});

    for (auto it : m)
        cout << it.first << " " << it.second << " " << endl;

    if (m.count(2))
    {
        cout << "yes found";
    }
    else
        cout << "not found";

    auto it = m.find(7);
    if (it != m.end())
    {
        cout << "\nfound : " << it->second;
    }
    else
    {
        cout << "\nnot found  " << endl;
    }
    it = m.begin();
    cout << it->first << " " << it->second;
}
int main()
{

    return 0;
}