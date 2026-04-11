#include <iostream>
using namespace std;

int main() {
    string day="mon";
    int n=13, ans = 0;

    
    int daysToSunday;

    if (day == "mon") daysToSunday = 6;
    else if (day == "tue") daysToSunday = 5;
    else if (day == "wed") daysToSunday = 4;
    else if (day == "thu") daysToSunday = 3;
    else if (day == "fri") daysToSunday = 2;
    else if (day == "sat") daysToSunday = 1;
    else daysToSunday = 0;  // sun

    int remain = 7 -daysToSunday;
    if(remain<7)
    int count=0;

     while(remain+7<=n)
     {
        count++;
        remain =remain+7;
     }
     cout<<count+1;
    return 0;
}
