#include <iostream>

using namespace std;
int  uniqueOccerence(int arr[], int size)
{
   int ans =0;
   for (int i = 0; i < size; i++)
   {
    
   ans = ans ^arr[i];
   }
   for (int i = 1; i < size; i++)
   {
   ans = ans^i;
   }
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
    int arr[] = {1,2,2,3,4};
    int size = 5;
   cout<<uniqueOccerence(arr, size);

    return 0;
}