#include <iostream>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;

void question_1()
{
    // output 2024
    char c[] = "GATE2024";
    char *p = c;
    cout << p + p[3] - p[1];
}

void second(int *p1, int *p2)
{
    // output 0 2
    p1 = p2;
    *p1 = 2;
    // main()
    // {
    //     int i = 0, j = 1;
    //     second(&i, &j);
    //     cout << i << " " << j;
    // }
}

void question_3()
{
    // output 1 0
    int *ptr;
    int x = 0;
    ptr = &x;
    int y = *ptr;
    *ptr = 1;
    cout << x << " " << y;
}

void question_4()
{
    // output 11 15
    int a = 5, b = 10;
    int &name = a;
    int *ptr = &a;
    (*ptr)++;
    ptr = &b;
    *ptr = *ptr + 5;
    name += 5;
    cout << a << " " << b;
}

void four(int x, int *py, int **ppz)
{
    // output 19
    int y, z;
    **ppz += 1;
    z = **ppz;
    *py += 2;
    y = *py;
    x += 3;
    cout << x + y + z;

    //  main()
    // {
    //     int c,*b,**a;
    //     c=4,b=&c,a=&b;
    //     four(c,b,a);
    //     return 0;
    // }
}

// code for copying string from 1 array to another array
void five(char *str1, char *str2)
{
    // output rohan
    while ((*str1 = *str2))
    {
        str1++, str2++;
    }

    // int main()
    // {
    //    char first[]="mohit";
    //    char second[] = "rohan";
    //    five(first,second);
    //    cout<<first;
    //     return 0;
    // }
}
int main()
{
    char first[] = "mohit";
    char second[] = "rohan";
    five(first, second);
    cout << first;
    return 0;
}