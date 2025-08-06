#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;

//storing element and it's occurence in the same array
// by using storing two number at same iposition
void store(vector<int> &arr)
{
    int n = arr.size();
    int big_num = INT_MIN;

    // finding biggest number of array
    for (int i = 0; i < n; i++)
        big_num = max(arr[i], big_num);
    int index = -1;
    for (int i = 0; i < n - 1; i++)
    {
        if (arr[i] == -1)
            continue;
        int count = 1;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] == arr[j])
            {
                count++;
                arr[j] = -1;
            }
        }
        index++;
        arr[index] = arr[i] + count * (big_num + 1);
    }

    // printing num and it's occurence

    for (int i = 0; i <= index; i++)
    {
        int number = arr[i] % (big_num + 1);
        int occ = arr[i] / (big_num + 1);
        cout << number << " " << occ << endl;
    }
}

int main()
{
  vector<int> arr = {1,1,1, 2, 2, 2, 3, 4, 5};

  for(int i=0;i<arr.size();i++)
  {
    int num = arr[i];
    int count=0;
    if(num==arr[i])
    count++;
  }

    return 0;
}