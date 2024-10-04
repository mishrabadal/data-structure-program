#include <iostream>
using namespace std;
void toh(int n, int sour, int help, int dest)
{
    if (n == 1)
    {
        cout << "move disk" << n << " from " << sour << " to " << dest << endl;
        return;
    }
    toh(n - 1, sour, dest, help);
    cout << "move disk" << n << " from " << sour << " to " << dest << endl;
    toh(n - 1, help, sour, dest);

    // output
    // move disk1 from 1 to 3
    // move disk2 from 1 to 2
    // move disk1 from 3 to 2
    // move disk3 from 1 to 3
    // move disk1 from 2 to 1
    // move disk2 from 2 to 3   
    // move disk1 from 1 to 3
}
int main()
{
    int n = 3;
    toh(n, 1, 2, 3);
    return 0;
}