#include <iostream>

using namespace std;
int  findUnique(int arr[], int size)
{
    int ans = 0;//2//1
    for (int i = 0; i < size; i++)
    {
        int ans_prev=ans;
       ans =ans^arr[i];
       cout<<endl<<ans_prev<<" ^ "<<arr[i]<<" is : "<<ans <<endl;
    }
    cout<<"unique element is : ";
    return ans;
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
    int arr[] = {8,2,1,3,3,1,2};
    int size = 7;
   cout<<findUnique(arr, size);

    return 0;
}