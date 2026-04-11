#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int N;
    cin >> N;

    int bits = 0;
    int temp = N;

    // Count number of bits
    while (temp > 0) {
        bits++;
        temp = temp / 2;
    }

    // Create maximum number with 'bits' bits
    int maxValue = pow(2, bits) - 1;

    // Get toggled result
    int result = maxValue - N;

    cout << result;
    return 0;
}
