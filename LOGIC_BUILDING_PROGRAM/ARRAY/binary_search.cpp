#include<iostream>
using namespace std;
int BinarySearch(int arr[],int size,int key)
{
    int start =0;
    int end=size-1;
    int mid = start+(end-start)/2;
    while(start<=end){
        if(arr[mid]==key)
        {
            return mid;
        }

        if(key>arr[mid]){
            start=mid+1;
        }
        else{
            end=mid-1;
        }
        mid=start+(end-start)/2;
    }
    return -1;
}
int main(){
    int arr[]={2,3,4,65,7,8};
    int size = sizeof(arr)/sizeof(arr[0]);
    int key=8;
    int check =BinarySearch(arr,size,key);
if(check !=-1)
{
    cout<<"matched";
} 
else{
     cout<<"not matched";
}
    return 0;
}