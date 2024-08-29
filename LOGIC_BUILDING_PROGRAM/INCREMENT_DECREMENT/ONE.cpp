#include<iostream>
using namespace std;
int main(){
    int a, b=1;
    a=10;
    if(++a)
   {
    cout<<b;//1
    cout<<endl;
   } 
  else{
      
    cout<<++b;//2
  }
    return 0;
}