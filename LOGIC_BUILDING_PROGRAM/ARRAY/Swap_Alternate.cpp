#include <iostream>

using namespace std;
void swapAlternate(int arr[], int size){
for (int i = 0; i <size; i+=2)
{
   if(i+1<size)
   {
    swap(arr[i],arr[i+1]);
   }

}

}
void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}
int main()
{
    int arr[] = {2, 7, 89, 6, 17, 23};
    int size = 6;
    swapAlternate(arr,size);
    printArray(arr, size);
    cout<<"\n2nd array\n";
    int arr1[] = {12, 7, 89, 6, 17};
    int size1 = 5;
    swapAlternate(arr1,size1);
    printArray(arr, size);
    return 0;
}