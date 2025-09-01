#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
// Frogs and Jumps

int unvisitedLeaves(int N, int leaves, int frogs[])
{
    // Code here
    vector<bool> vis(leaves + 1, false);
    for (int i = 0; i < N; i++)
    {
        //here j will store frog strength
        int j = frogs[i];
        if (vis[j] == false)
        {
            while (j <= leaves)
            {
                
                vis[j] = true;
                //for next leaves visiting
                j += frogs[i];
            }
        }
    }
    int ans = 0;
    //calculating unvisited leaves
    for (int i = 1; i <= leaves; i++)
    {
        if (vis[i] == false)
            ans++;
    }
    return ans;
}

int main()
{

    return 0;
}