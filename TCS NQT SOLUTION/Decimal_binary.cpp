#include <iostream>
using namespace std;

void binary_to_decimal(){
     int num = 101;
    int rem, ans = 0, mul = 1;


    while (num > 0)
    {
        //finding last digit
        rem = num % 10;
        //decreasing the number after removing last digit
        num = num / 10;

        ans = rem * mul + ans;
        mul = mul * 2;
    }
    cout << ans;
}

void decimal_to_binary(){
     int num = 10;
    int rem, ans = 0, mul = 1;

    // formulas for converting decimal into binary is rem*10^i+ans but here 10^i repaced with mul
    while (num > 0)
    {
        // finding remainder
        // rem= num&1 it will also gives the remainder simply remember odd & 1 -> 1, even & 1->0 yahi to hame chahiye tha
        rem = num % 2;

        //calculating quotient
        num = num / 2;
        // converting into binary
        ans = rem * mul + ans;
        mul = mul * 10;
    }
    cout << ans;
}
int main()
{
     binary_to_decimal();
    return 0;
}
