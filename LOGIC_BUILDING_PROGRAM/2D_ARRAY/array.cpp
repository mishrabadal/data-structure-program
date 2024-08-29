#include<iostream>
using namespace std;

void create_2d_array(){
    //int arr[2][3]={1,2,3,4,5,6};
   int arr[3][3]={
    {11,82,99},
    {18,2,34},
    {28,42,94}
   };
    for (int i = 0; i <3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
           cout<<arr[i][j]<<" ";
        }
       cout<<endl; 
    }
    
}
void user_input(){
    //int arr[2][3]={1,2,3,4,5,6};
   int arr[3][3];
   //taking input
   for (int i = 0; i < 3; i++)
   {
       for (int j = 0; j < 3; j++)
   {
    cin>>arr[i][j];
   }
   }


     for (int i = 0; i <3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
           cout<<arr[i][j]<<" ";
        }
       cout<<endl; 
    }
   
}


int main(){
    //create_2d_array();
    user_input();
    return 0;
}