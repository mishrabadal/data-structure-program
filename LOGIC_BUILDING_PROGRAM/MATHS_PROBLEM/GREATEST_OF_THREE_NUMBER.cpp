#include <iostream>
using namespace std;

int main()
{
    int n1, n2, n3;
    int big_number = 0;
    cout << "\nENTER THREE NUMBER FOR FINDING GREATER NUMBERS ";

    cin >> n1 >> n2 >> n3;

    if (n1 > n2)
    {
        big_number = n1;
    }
    else
    {
        big_number = n2;
    }
    if(big_number>n3)
    {
        big_number=big_number;
    }
    else{
        big_number=n3;
    }

    cout<<"\nGREATER  NUMBER IS  "<<big_number;
    return 0;
}