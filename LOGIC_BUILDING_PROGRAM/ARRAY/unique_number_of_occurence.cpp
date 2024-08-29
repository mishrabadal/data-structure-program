#include <iostream>
using namespace std;
void printArray(int arr[], int size)
{
    cout<<endl<<"your array"<<endl;;
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
     cout<<endl;
}
void duplicateCheck(int arr[], int size)
{
    
    int flag = 0;
    for (int i = 0; i <=size; i++)
    {
        for (int j = i + 1; j <=size; j++)
        {

            if (arr[j] == arr[i])
            {
                flag = 1;
               
                break;
            }
        }
    }
    if (flag == 0)
    {
        cout << "TRUE, UNIQUE number of occurence";
    }
    else{
 cout << "FALSE, NOT UNIQUE number of occurence";
    }
}

void countElements(int arr[], int size)
{

    int array1[100000] = {};

    int index = -1;
    int count;
    for (int i = 0; i < size; i++)
    {

        if (arr[i] == 0)
        {
            continue;
        }
        count = 1;
        for (int j = i + 1; j < size; j++)
        {
            if (arr[j] == arr[i])
            {
                arr[j] = 0;
                count++;
            }
        }
        arr[i] = 0;
        index++;

        array1[index] = count;
        
     
    }

    duplicateCheck(array1, index);
}


int main()
{
    int arr[] = {1,2, 2, 3, 3, 3,7,7,7,7,7,7};
    int size = sizeof(arr) / sizeof(arr[0]);
    cout<<size;
    printArray(arr,size);
    countElements(arr, size);

    return 0;
}