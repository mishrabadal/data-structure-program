#include <iostream>
#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
// store number and its occurence at single index
// count frequency of element
void store_number_occurence()
{
    int arr[] = {1, 2, 1, 1, 1, 2, 2, 2, 3, 1, 2};
    int n = sizeof(arr) / sizeof(arr[0]); // size of array
    int big_num = INT_MIN;

    int count;
    int index = -1;
    // putting maximum number into the big num
    for (int i = 0; i < n; i++)
    {
        big_num = max(big_num, arr[i]);
    }

    for (int i = 0; i < n - 1; i++)
    {
        if (arr[i] == -1)
        {
            continue;
        }
        count = 1;
        for (int j = i + 1; j < n; j++)
        {

            if (arr[i] == arr[j])
            {
                arr[j] = -1;
                count++;
            }
        }

        // storing into the same array
        index++;
        arr[index] = arr[i] + count * (big_num + 1);
    }
    // printing occurence and number

    for (int i = 0; i <= index; i++)
    {
        // cout<<arr[i]<<endl;
        int number = arr[i] % (big_num + 1), occurence = arr[i] / (big_num + 1);

        cout << number << " " << occurence << endl;
    }
}

// missing and repeating

void missing_and_repeating()
{
    int arr[] = {3, 1, 5, 6, 2, 6};
    int n = sizeof(arr) / sizeof(arr[0]); // Calculate the size of the array
    // cout << n << endl;
    // cout << arr + n;
    // Sorting the array
    // sort(arr, arr + n);
    // for (int i = 0; i < n; i++)
    // {
    //     cout << arr[i] << " ";
    // }
    vector<int> count(n, 0);
    for (int i = 0; i < n; i++)
    {
        count[arr[i] - 1]++;
    }
    // missing
    for (int i = 0; i < n; i++)
    {
        if (count[i] == 0)
        {
            cout << " Missing : " << i + 1;
        }
    }
    // repeated
    for (int i = 0; i < n; i++)
    {
        if (count[i] == 2)
        {
            cout << " Repeated : " << i + 1;
            break;
        }
    }
}

int Boyer_Moore_Majority_Voting_Algorithm()
{
    // moore voting algorithm : isme winner ko aadhe se jyada vote milte hai
    int arr[] = {3, 3, 2, 3, 1, 3, 2, 2, 1, 3, 3};
    int n = sizeof(arr) / sizeof(arr[0]);
    int candidate, count = 0;
    for (int i = 0; i < n; i++)
    {
        if (count == 0)
        {
            count = 1;
            candidate = arr[i];
        }
        else
        {
            if (candidate == arr[i])
            {
                count++;
            }
            else
            {
                count--;
            }
        }
    }

    count = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == candidate)
        {
            count++;
        }
    }
    // cout<<count;
    if (count > n / 2)
    {
        cout << " winner is : " << candidate << " , total vote is : " << count;
        return candidate;
    }
    else
    {
        cout << " sorry winner can not predict ";
        return -1;
    }
}

int main()
{
    //store_number_occurence()
    missing_and_repeating();
    //Boyer_Moore_Majority_Voting_Algorithm();
    return 0;
}