#include<iostream>
using namespace std;
int main(){
   int  n=4;
   int count=1;
    for (int i = 0; i < n; i++)
    {
         int space;
        for (space = 1; space <= n - i; space++)
        {

            cout << " ";
        }

        for (int j = 0; j <=i; j++)
        {
            cout<<count<<" ";
            count++;
            
        }
        cout<<endl;
        
    }
    
    return 0;
}