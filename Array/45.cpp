#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
//Equilibrium Point
int findEquilibrium(vector<int> &arr)
{

    int n = arr.size(), left = 0, right = 0;
    //here right array will store sum of all array
    for (int x : arr)
        right += x;

    for (int i = 0; i < n; i++)
    {
        //pahle right se element ko minus kare
        //phir left aur right agar match karega return i
        //phir left me element ko add karna hai
        right -= arr[i];
        if (left == right)
            return i;
        left += arr[i];
    }
    return -1;
}

int main()
{

    return 0;
}