#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
// 42. Trapping Rain Water
// time O(n), space O(n)
int trap(vector<int> &height)
{
    int n = height.size();
    // yaha par leftMax and rightMax harek element ke liye left side and right side ka maximum store karega
    // taki kitna unit water store particular index par ye pata lag sake
    // kisi particular element ke left and right side ke maximum ka minimum nikalana hai
    // aur minimum - height[i] agar 0 ke barabar ya bara aata hai water me add kardenge
    vector<int> leftMax(n);
    vector<int> rightMax(n);
    leftMax[0] = 0;
    for (int i = 1; i < n; i++)
        leftMax[i] = max(leftMax[i - 1], height[i - 1]);
    rightMax[n - 1] = 0;
    for (int i = n - 2; i >= 0; i--)
        rightMax[i] = max(rightMax[i + 1], height[i + 1]);

    int water = 0;
    for (int i = 0; i < n; i++)
    {
        int minHeight = min(leftMax[i], rightMax[i]);
        if (minHeight - height[i] >= 0)
            water += minHeight - height[i];
    }
    return water;
}

// time O(n), space O(1)
int _trap(vector<int> &height)
{
    int n = height.size();
    int leftMax = 0, rightMax = 0, water = 0;
    int maxHeight = height[0];
    int index = 0;

    // height array ka maximum element and uska index store kar ke rakh rahe hai
    for (int i = 1; i < n; i++)
    {
        if (height[i] > maxHeight)
        {
            maxHeight = height[i];
            index = i;
        }
    }
    // yaha par 0 se right side ke maximum height vale index tak loop chalayenge because yaha par min leftMax hi hoga
    for (int i = 0; i < index; i++)
    {

        if (leftMax > height[i])
            water += leftMax - height[i];
        else
            leftMax = height[i];
    }
    // yaha par last element se left side ke maximum height,initially rightMax=0
    for (int i = n - 1; i > index; i--)
    {
        if (rightMax > height[i])
            water += rightMax - height[i];
        else
            rightMax = height[i];
    }
    return water;
}
int main()
{
   vector<int> height = {4,2,0,5,2,6,2,3};
    cout<<trap(height);
    return 0;
}