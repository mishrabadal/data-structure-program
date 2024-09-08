#include <iostream>
using namespace std;
void second_largest_element(int arr[], int n)
{
    int ans = INT_MIN;
    for (int i = 0; i < n; i++)
    {

        if (arr[i] > ans)
        {
            ans = arr[i];
        }
    }
    int j = 0;
    int second = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] != ans)
        {
            second = max(second, arr[i]);
        }
    }

    cout << "Second Largest element is : " << second;
}

void fibonacci_series_print(){
    int arr[1000];
    int n=10; //means 9th index 
    arr[0]=0;
    arr[1]=1;
    for (int i = 2; i < n; i++)
    {
        arr[i]=arr[i-1]+arr[i-2];
    }
    for (int i = 0; i < n; i++)
    {
      cout<<arr[i]<<" ";
    }

cout<<endl;
cout<<"number at  10th position is : "<<arr[9];
    
    
}

void rotate_array_by_one(int arr[],int n){
    int last = arr[n-1];
    for (int i = n; i >0; i--)
    {
       arr[i]=arr[i-1];
    }
    arr[0]=last;

    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    
}

void missing_number(){
     int arr[] = {1,3,4,5,6};
    int n = 6;
    int sum =0;
    for (int i = 0; i < n-1; i++)
    {
        sum +=arr[i];
    }
    int missing_num = n*(n+1)/2 - sum;
    cout<<"missing number is : "<<missing_num;
}


int main()
{
    int arr[] = {2, 15, 18, 4, 1};
    int n = 5;
    //second_largest_element(arr, n);
   // fibonacci_series_print();
  // rotate_array_by_one( arr,n);
  missing_number();
    return 0;
}