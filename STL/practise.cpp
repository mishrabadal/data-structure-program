#include <iostream>
using namespace std;
#include <bits/stdc++.h>
#include <map>
#include <unordered_map>
void stl_pair()
{
    // pair<int,string>p({5,"rani"});
    // cout<<p.first<<" "<<p.second;

    pair<string, pair<int, int>> p;
    p.first = "rohit";
    p.second.first = 19;
    p.second.second = 21;
    cout << p.first << " " << p.second.first << " " << p.second.second;
}

void vector_pair()
{
    vector<pair<int, int>> p;
    p.push_back({11, 5});
    p.push_back({2, 6});
    p.push_back({3, 4});

    sort(p.begin(), p.end());
    for (auto i : p)
        cout << i.first << " " << i.second << endl;
}

void stl_list()
{
    list<int> l;

    // 1. push_back() – last में add
    l.push_back(10);
    l.push_back(20);

    // 2. push_front() – start में add
    l.push_front(5);

    // 3. insert() – बीच में insert
    auto it = l.begin();
    advance(it, 1);  // 2nd position (after 5)
    l.insert(it, 7); // list: 5 7 10 20

    // 4. pop_back() – last element हटाना
    l.pop_back(); // removes 20

    // 5. pop_front() – first element हटाना
    l.pop_front(); // removes 5

    // 6. remove(value) – सभी matching elements हटाओ
    l.push_back(10);
    l.remove(10); // removes all 10

    // 7. sort() – ascending sort
    l.push_back(15);
    l.push_back(2);
    l.push_back(30);
    l.sort(); // list: 2 15 30

    // 8. reverse() – उल्टा कर देना
    l.reverse(); // list: 30 15 2

    // 9. size() – size बताता है
    cout << "Size: " << l.size() << endl;

    // 10. empty() – खाली है या नहीं?
    cout << (l.empty() ? "List is empty" : "List is not empty") << endl;

    // 11. clear() – पूरी list delete कर देता है
    l.clear();

    // 12. Again check empty
    cout << (l.empty() ? "List is empty" : "List is not empty") << endl;
}

int stl_vector()
{
    vector<int> v;

    // 1. push_back() – last में element डालना
    v.push_back(10);
    v.push_back(20);
    v.push_back(30); // v = [10, 20, 30]

    // 2. insert() – बीच में डालना
    auto it = v.begin();
    v.insert(it + 1, 15); // v = [10, 15, 20, 30]

    // 3. pop_back() – last element हटाना
    v.pop_back(); // v = [10, 15, 20]

    // 4. size() – vector का size
    cout << "Size: " << v.size() << endl;

    // 5. front() – पहला element
    cout << "Front: " << v.front() << endl;

    // 6. back() – आखिरी element
    cout << "Back: " << v.back() << endl;

    // 7. at(index) – index से access
    cout << "Element at index 1: " << v.at(1) << endl;

    // 8. empty() – check if vector is empty
    cout << (v.empty() ? "Empty" : "Not Empty") << endl;

    // 9. clear() – सब कुछ हटाना
    v.clear();

    // 10. Again check size
    cout << "Size after clear: " << v.size() << endl;

    return 0;
}

int stl_set()
{
    set<int> s;

    // Inserting elements
    s.insert(10);
    s.insert(20);
    s.insert(10); // Duplicate, won't be inserted

    // Printing elements
    cout << "Elements in set: ";
    for (int x : s)
    {
        cout << x << " "; // Output: 10 20
    }
    cout << endl;

    // Finding an element
    auto it = s.find(20);
    if (it != s.end())
    {
        cout << "Element 20 found!" << endl;
    }

    // Erasing an element
    s.erase(10); // Removes 10
    cout << "After removing 10, elements are: ";
    for (int x : s)
    {
        cout << x << " "; // Output: 20
    }
    cout << endl;

    // Checking size
    cout << "Size of set: " << s.size() << endl; // Output: 1

    // Checking if empty
    if (s.empty())
    {
        cout << "Set is empty!" << endl;
    }

    // Clearing the set
    s.clear();
    cout << "After clearing, set size: " << s.size() << endl; // Output: 0

    return 0;
}

#include <iostream>
#include <set>
using namespace std;

int stl_multiset()
{
    multiset<int> ms;

    // Insertion
    ms.insert(10);
    ms.insert(10);
    ms.insert(20);
    ms.insert(30);

    // Print all elements
    cout << "Multiset elements: ";
    for (int x : ms)
    {
        cout << x << " ";
    }
    cout << endl;

    // Count
    cout << "Count of 10: " << ms.count(10) << endl;

    // Erase only one 10
    auto it = ms.find(10);
    if (it != ms.end())
        ms.erase(it);

    cout << "After erasing one 10: ";
    for (int x : ms)
    {
        cout << x << " ";
    }
    cout << endl;

    return 0;
}

#include <iostream>
#include <unordered_set>
using namespace std;

int stl_unordered_set()
{
    unordered_set<int> uset;

    // Insert elements
    uset.insert(10);
    uset.insert(20);
    uset.insert(30);
    uset.insert(10); // duplicate, will not be inserted

    // Print all elements (no order)
    cout << "Elements in unordered_set: ";
    for (int x : uset)
    {
        cout << x << " ";
    }
    cout << endl;

    // Search element
    if (uset.count(20))
        cout << "20 is present\n";
    else
        cout << "20 is not present\n";

    // Erase element
    uset.erase(10);
    cout << "After erasing 10: ";
    for (int x : uset)
    {
        cout << x << " ";
    }
    cout << endl;

    return 0;
}

int stl_map()
{
    map<int, string> m;

    // Insert elements
    m[1] = "Apple";
    m[2] = "Banana";
    m[3] = "Cherry";
    m.insert({4, "Dates"});

    // Print all key-value pairs
    for (auto it : m)
    {
        cout << it.first << " => " << it.second << endl;
    }

    // Find
    if (m.count(2))
        cout << "Key 2 exists\n";

    // Erase
    m.erase(3);

    cout << "After erasing key 3:\n";
    for (auto it : m)
    {
        cout << it.first << " => " << it.second << endl;
    }

    return 0;
}

int stl_unordered_map()
{
    unordered_map<int, string> um;

    um[1] = "Ram";
    um[2] = "Shyam";
    um[3] = "Mohan";

    for (auto x : um)
    {
        cout << x.first << " => " << x.second << endl;
    }

    return 0;
}

int stl_multimap()
{
    multimap<int, string> mm;

    mm.insert({1, "Apple"});
    mm.insert({2, "Banana"});
    mm.insert({1, "Avocado"}); // duplicate key

    for (auto x : mm)
    {
        cout << x.first << " => " << x.second << endl;
    }

    return 0;
}

#include <iostream>
#include <stack>
using namespace std;

int main()
{
    stack<int> s;

    s.push(10);
    s.push(20);
    s.push(30);

    cout << "Top element: " << s.top() << endl; // 30

    s.pop(); // removes 30

    cout << "Top after pop: " << s.top() << endl; // 20

    return 0;
}
#include <iostream>
#include <queue>
using namespace std;

int main()
{
    queue<int> q;

    q.push(10);
    q.push(20);
    q.push(30);

    cout << "Front: " << q.front() << endl; // 10
    cout << "Back: " << q.back() << endl;   // 30

    q.pop(); // removes 10

    cout << "Front after pop: " << q.front() << endl; // 20

    return 0;
}

int main()
{

    return 0;
}