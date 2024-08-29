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
        sum += n % 10;
        n = n / 10;
    }
    if(number%sum==0)
    {
        cout<<number<<" IS HARSHAD NUMBER";
    }
    else{
          cout<<number<<" IS NOT HARSHAD NUMBER";
    }

    return 0;
}