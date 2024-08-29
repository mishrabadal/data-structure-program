#include <iostream>
using namespace std;
int main()
{
    int x = 2;
    switch (x)
    {
    case 1:
        cout << "one ";
        break;
    case 2:
        cout << "two ";
        break;
    case 3:
        cout << "three ";
        break;
    default:
        cout << "Invalid option";
    }
    return 0;
}