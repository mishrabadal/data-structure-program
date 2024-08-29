#include<iostream>
using namespace std;
int main(){
    int a=1;
    int b=2;
    if(a-- >0 || ++b>2)
    {
        cout<<"stage1- inside if\n";
      
    }
    else{
        cout<<"stage1- inside else\n";
    }
    cout<<a<<" "<<b<<endl;
    return 0;
}