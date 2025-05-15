
#include <vector>
#include <iostream>
#include <cmath>

using namespace std;

void reverse()
{
    int n = 123;
    // reverse
    int rev = 0;
    while (n > 0)
    {
        rev = rev * 10 + n % 10;
        n /= 10;
    }
    cout << rev;
}
void sum_of_digit()
{
    int n = 123;
    // reverse
    int sum = 0;
    while (n > 0)
    {
        sum += n % 10;
        n /= 10;
    }
    cout << sum;
}

int wateringPlants(vector<int> &plants, int capacity)
{
    int n = plants.size();
    int capi = capacity;
    int step = 0;
    for (int i = 0; i < n; i++)
    {
        if (capi >= plants[i])
        {
            capi -= plants[i];
            step++;
        }
        else
        {
            capi = capacity;
            step = step + i + i + 1;
            capi -= plants[i];
        }
    }
    return step;
}

int reverse(int num)
{
    int n = abs(num); // Make the number positive for digit reversal
    int rev = 0;

    while (n > 0)
    {
        rev = rev * 10 + n % 10; // Add last digit to reversed number
        n /= 10;                 // Remove last digit
    }

    return (num > 0) ? rev : -rev; // Restore original sign
}

int main()
{
    cout<<reverse(-56);
int x =2;
cout<<-x+3;
    return 0;
}
