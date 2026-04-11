#include <iostream>
#include <string>
#include <vector>

using namespace std;

void count_sunday()
{
    //if starting days ins included in the month
    string day;
    int n;
    cin >> day >> n;

    int index;

    // Assign index (sun = 0)
    if (day == "sun") index = 0;
    else if (day == "mon") index = 1;
    else if (day == "tue") index = 2;
    else if (day == "wed") index = 3;
    else if (day == "thu") index = 4;
    else if (day == "fri") index = 5;
    else index = 6; // sat

    int sundayCount = 0;

    // Count days from day 1 to day n
    for (int i = 0; i < n; i++) {
        if (index == 0) {
            sundayCount++;
        }
        index = (index + 1) % 7;
    }

    cout << sundayCount;
}
int main()
{
    //given day is not included in the month
    string day = "sun";
    int n = 13;

    // List of days to help find the index
    int index;

    if (day == "mon")
        index = 0;
    else if (day == "tue")
        index = 1;
    else if (day == "wed")
        index = 2;
    else if (day == "thu")
        index = 3;
    else if (day == "fri")
        index = 4;
    else if (day == "sat")
        index = 5;
    else
        index = 6; // sun

    // checking after how many days first sunday will come
    int val = 6 - index;
    n = n - val; // checking after first sunday how many days

    // if n is negative means not any sunday will come
    if (n < 0)
    {
        cout << 0;
    }
    else
    {
        int sunday = 1 + n / 7;
        cout << sunday;
    }

    return 0;
}