#include <iostream>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;

void pointer_concept_of_variable()
{
    int x = 8;
    int *ptr = &x;
    cout << "address of x : " << &x << endl;
    cout << "printing stored address in ptr : " << ptr << endl;

    cout << "ptr pointing value : " << *ptr << endl;
    cout << "value of x : " << x << endl;
}

void pointer_of_int_array()
{

    int arr[4] = {1, 2, 3, 4};
    int *ptr = arr;
    cout << "printng base address of arr: " << arr << endl; // printing base address
    cout << "printng base address of arr: " << &arr << endl;
    cout << "value of ptr is  base address : " << ptr << endl;

    cout << "printng base value of arr: " << *arr << endl;
    cout << "ptr pointing value : " << *ptr << endl;

    cout << "address of ptr " << &ptr << endl;
}

void pointer_of_character_array(){
    char char_arr[6] = "12345";
    char *ptr1 = char_arr;

    cout << "printing base address of char_array : " << (void *)char_arr << endl; // printing all value
    cout << "printing stored address/value of ptr : " << (void *)ptr1 << endl;

    cout << "printing pointing value of ptr : " << ptr1 << endl;

    cout << "printing address of ptr : " << &ptr1 << endl;
}

void double_pointer()
{
    int x = 4;
    int *ptr1 = &x;
    int **ptr2 = &ptr1;
    cout << "value of x : " << **ptr2 << endl; // printing value of x;

    cout << "address of x : " << &x << endl;
    cout << "value of ptr1 : " << ptr1 << endl;
    cout << "pointing value of ptr2 : " << *ptr2 << endl;

    cout << "address of ptr1 : " << &ptr1 << endl;
    cout << "address of ptr2 : " << &ptr2 << endl;
}

void multi_pointer()
{
    int x = 4;
    int *ptr1 = &x;
    int **ptr2 = &ptr1;
    int ***ptr3 = &ptr2;
    cout << "value of x : " << ***ptr3;
}

// call by refrence
void swapping(int &first, int &second)
{
    int temp = first;
    first = second;
    second = temp;

    // main()
    // {
    //     int first = 10, second = 15;
    //     swapping(first, second);
    //     cout << first << " " << second;
    // }
}

void changing_to_default_value(vector<int> &num)
{
    for (int i = 0; i < 5; i++)
    {
        num[i] = 10;
    }

    // main()
    // {
    //     vector<int> num(5);
    //     for (int i = 0; i < 5; i++)
    //     {
    //         num[i] = i * 2 + 2;
    //     }

    //     changing_to_default_value(num);

    //     for (int i = 0; i < 5; i++)
    //     {
    //         cout << num[i] << " ";
    //     }
    // }
}

int main()
{

    return 0;
}