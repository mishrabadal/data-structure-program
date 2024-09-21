#include <iostream>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;

void heap()
{
    // variable ke liye heap memory allocate karo
    int *ptr = new int;
    *ptr = 5; // value assign;
    cout << *ptr << endl;

    float *ptr2 = new float;
    *ptr2 = 3.6;
    cout << *ptr2 << endl;

    int n;
    cout << "Enter the size of array : ";
    cin >> n;
    int *p = new int[n];
    // value dalo
    for (int i = 0; i < n; i++)
        p[i] = i + 1;

    // print karwa do
    for (int i = 0; i < n; i++)
        cout << p[i] << " ";

    // delete karke free kar do
    delete ptr;
    cout << "\ngarabage value : " << *ptr << endl; // delete ho chuka hai isliye garbage value de rha hai
    delete ptr2;
    delete[] p;

    // output
    // 5
    // 3.6
    // Enter the size of array : 4
    // 1 2 3 4
    // garabage value : 16194640
}
int main()
{
    heap();
    return 0;
}