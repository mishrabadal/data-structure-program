#include <iostream>
using namespace std;
#include <queue>
// stl implementantion

int main()
{
    queue<int> q;
    for (int i = 0; i < 5; i++)
    {
        q.push(i + 10);
    }
    cout << q.front() << endl; // starting
    cout << q.back() << endl;  // ending
    cout << q.size() << endl;
    cout << q.empty();
    return 0;
}