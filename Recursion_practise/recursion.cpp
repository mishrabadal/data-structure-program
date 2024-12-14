#include <iostream>
using namespace std;

void print_1_to_n(int n)
{
    if (n == 0)
        return ;
  
    print_1_to_n(n - 1);
    cout << n << "  " ;
  
    
}

void print_n_to_1(int n)
{
    if (n == 0)
        return ;
   cout << n << "  " ;
    print_n_to_1(n - 1);
   
  
    
}

int fact(int n){
    if(n==1)
    return 1;
    return n*fact(n-1);

}
int main()
{
     cout<<fact(8);
    
    return 0;
}