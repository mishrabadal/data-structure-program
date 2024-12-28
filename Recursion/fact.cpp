#include<iostream>
using namespace std;
//factorial
void fact(int n){
    int res=1;
    for (int i = n; i >=1; i--)
    {
        res =res*i;
    }
    cout<<res;

}

int factorial(int n){
    if(n==1)
    return 1;
    return n*factorial(n-1);
}

int main(){
   cout<<factorial(4);
    return 0;
}