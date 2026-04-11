#include <iostream>
using namespace std;

int main() {
    int num = 1010;
    int inverted = 0;
    int place = 1;

    while (num > 0) {
        int digit = num % 10;   // get last digit

        // invert the digit
        if (digit == 1)
            digit = 0;
        else
            digit = 1;

        inverted = inverted + digit * place;
        place = place * 10;

        num = num / 10;         // remove last digit
    }

    cout << inverted;
    return 0;
}
