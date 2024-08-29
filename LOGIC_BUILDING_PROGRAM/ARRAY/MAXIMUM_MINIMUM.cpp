#include <iostream>
using namespace std;
void  maximum(int arr[],int size){
    int max=INT_MIN;
    for (int i = 0; i <size; i++)
    {
       if(arr[i]>max)
       {
        max=arr[i];
       }
    }
    cout<<"\nmaximum number is : "<<max;

}
void minimum(int arr[],int size){
int min=INT_MAX;
    for (int i = 0; i <size; i++)
    {
       if(arr[i]<min)
       {
        min=arr[i];
       }
    }
    cout<<"\nminimum number is : "<<min;
}
void printArray(int arr[],int size)
{
for (int i = 0; i < size; i++)
{
cout<<arr[i]<<" ";
}

}
int main()
{
    int arr[] = {2, 7, 89, 6, 17, 23};
    int size = 6;
    printArray(arr, size);
     maximum(arr, size);
      minimum(arr, size);
    return 0;
}