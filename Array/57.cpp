#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
// 4. Median of Two Sorted Arrays
// with extra space
double findMedianSortedArrays(vector<int> &a, vector<int> &b)
{
    vector<int> arr3;
    int n1 = a.size(), n2 = b.size();
    int i = 0;
    int j = 0;

    // jo chota hoga usko pahle arr3 me push karenge
    // Building new array store element in sorted array
    while (i < n1 && j < n2)
    {
        if (a[i] < b[j])
            arr3.push_back(a[i++]);
        else
            arr3.push_back(b[j++]);
    }

    while (i < n1)
        arr3.push_back(a[i++]);
    while (j < n2)
        arr3.push_back(b[j++]);
    int n = (n1 + n2);

    // odd number of element
    if (n % 2 == 1)
    {
        return arr3[n / 2];
    }
    // even number of element
    return (double)((double)(arr3[n / 2]) + (double)(arr3[n / 2 - 1])) / 2.0;
}

// without extra space
double findMedianSortedArrays(vector<int> &a, vector<int> &b)
{
    int n1 = a.size(), n2 = b.size();
    int i = 0;
    int j = 0;
    int n = (n1 + n2);
    // ind1 and ind2 will store index of two middle element
    int ind2 = n / 2;
    int ind1 = ind2 - 1;
    int cnt = 0;

    // ind1el and ind1e2 will store elemet at index1 and index2
    int ind1el = -1, ind2el = -1;

    // finding index1 element and index2 element
    while (i < n1 && j < n2)
    {
        if (a[i] < b[j])
        {
            if (cnt == ind1)
                ind1el = a[i];
            if (cnt == ind2)
                ind2el = a[i];
            cnt++;
            i++;
        }
        else
        {
            if (cnt == ind1)
                ind1el = b[j];
            if (cnt == ind2)
                ind2el = b[j];
            cnt++;
            j++;
        }
    }
    while (i < n1)
    {
        if (cnt == ind1)
            ind1el = a[i];
        if (cnt == ind2)
            ind2el = a[i];
        cnt++;
        i++;
    }

    while (j < n2)
    {
        if (cnt == ind1)
            ind1el = b[j];
        if (cnt == ind2)
            ind2el = b[j];
        cnt++;
        j++;
    }
    // odd number of element
    if (n % 2 == 1)
    {
        return ind2el;
    }
    // even number of element
    return (double)((double)(ind1el + ind2el)) / 2.0;
}
int main()
{

    return 0;
}
