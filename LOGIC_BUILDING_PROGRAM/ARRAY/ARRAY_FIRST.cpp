#include<iostream>
using namespace std;
void printArray(int arr[],int size){
for (int i = 0; i < size; i++)
{
   cout<<"\n"<< arr[i]<<"\n";
}

}
int main(){
   int arr[10]={1,2,4,86,67,98,3,54,67,7};
   printArray(arr,10);
    return 0;
}