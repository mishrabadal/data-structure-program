#include<iostream>
using namespace std;
int main(){
   int n1=2,n2=2,n3=7;
   if(n1+n2>n3 && n2+n3>n1 && n1+n3>n2)
   {
    cout<<"VALID TRIANGLE";
   }
   else{
    cout<<" NOT VALID TRIANGLE";
   }
    return 0;
}