#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "ENTER ANY NUMBER ";
    cin >> n;
    int number = n;
    int sum = 0;
    while (n > 0)
    {
        sum += (n % 10)*(n % 10)*(n % 10);
        n = n / 10;
    }
    if(sum==number)
    {
       cout<<number<<" IS ARMSTRONG NUMBER" ;
    }
   else{
     cout <<number<<" IS NOT ARMSTRONG NUMBER BECAUSE IT'S DIGIT CUBIC SUM IS "<< sum;
   }

    return 0;
}