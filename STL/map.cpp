#include <iostream>
using namespace std;
#include <map>
#include <unordered_map>
#include <unordered_set>
void demo()
{
    map<int, string> m;
    m.insert({1, "badal"});
    m.insert({2, "badal"});
    m.insert({3, "badal"});
    m[4] = "rajan";
    for (auto it = m.begin(); it != m.end(); it++)
    {
        cout << it->first << " " << it->second << endl;
    }
    cout << endl;
    cout << m.count(8);
}

// Pythagorean triplet exists or not
bool checkTriplet(int arr[], int n)
{
    unordered_map<int, int> mp;
    for (int i = 0; i < n; i++)
    {
        arr[i] = (arr[i] * arr[i]);
        mp[arr[i]]++;
    }
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            int l = arr[i] + arr[j];
            if (mp[l])
            {
                return true;
            }
        }
    }
    return false;
}
int main()
{
    unordered_set<int> m;
    m.insert(1);
    m.insert(2);
    m.insert(3);
    if (m.find(4) != m.end())
        cout << " true";
    else
        cout << "false" ;
        return 0;
}
