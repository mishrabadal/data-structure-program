#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "\nenter any number : ";
    cin >> n;
    int sum=0;
   for (int i = 1; i <=n; i++)
   {
    sum +=i;
   }
   cout<<"\n sum is :"<<sum;

    return 0;
}