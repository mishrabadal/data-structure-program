#include <iostream>
using namespace std;
int main()
{
    int x=1;
   while(x==1)
   {
     int n1, n2;
    char ch;
    cout << "Enter first number : ";
    cin >> n1;
    cout << "Enter first number : ";
    cin >> n2;
    cout << "Enter operatorn +, -, *, /, %  : ";
    cin >> ch;
    switch (ch)
    {
    case '+':
        cout << n1 + n2;
        exit(2);
    case '-':
        cout << n1 - n2;
        break;
    case '*':
        cout << n1 * n2;
        break;
    case '/':
        cout << n1 / n2;
        break;
    case '%':
        cout << n1 % n2;
        break;
    default:
        cout << "Invalid option";
    }
   }
    return 0;
}