#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;

// 11. Container With Most Water
int maxArea(vector<int> &height)
{
    int n = height.size();
    int i = 0, j = n - 1;

    // maxWater will keep  maximum amount of water a container can store between two lines.
    int maxWater = 0;

    while (i < j)
    {
        int w = j - i; // calculating witdth means distance between two (poles or lines or bars)

        // minimum height ko choose karna hai kyonki pani ko minimum height tak hi
        // hi fill kiya ja sakta hai . agar bara wala height choose karenge to pani gir jayega
        int h = min(height[i], height[j]);

        // calculating area to check how much unit square water will store
        int area = w * h;

        // yaha par agar area previous area jo ki maxWater me
        // store hai usse larger aata hai to maxWater me new area ko store kare
        maxWater = max(maxWater, area);

        // yaha par height change ho rha hai kyonki Area ko maximize karne ke do tarike hai
        // 1. height ko bara  karo ya phir width ko bara karo. but dono ko bara karna possible hi nhi hai

        // isliye yaha par bara height ko change na karke choote height ko change kar rhe hai
        // ho sakta hai ki aur bara height mil jaye
        if (height[i] > height[j])
        {
            j--;
        }
        else
        {
            i++;
        }
    }
    return maxWater;
}
int main()
{

    return 0;
}