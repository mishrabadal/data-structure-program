#include <iostream>
using namespace std;
int main()
{
    int a, b;
    a = 12;
    b = 25;
    //cout<<sizeof(a);
    int c = a & b;
    int d = a | b;
    int e = a ^ b;

    cout << "\n BITWISE AND " << c; // 8
    cout << "\n BITWISE OR " << d;  // 29
    cout << "\n BITWISE XOR " << e; // 21

    int x = 14;
    int f = x << 2;
    int g = x >> 1;
    cout << "\n BITWISE LEFT SHIFT " << f;//56
    cout << "\n BITWISE RIGHT SHIFT " << g;//7


    return 0;
}