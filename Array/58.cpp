#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;

//134. Gas Station
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
       int totalGas =0,totalCost=0;
       //unique solution always exist
       //start is the positin of gas station from where journey start
       int start=0,currGas=0;
       for(int i=0;i<gas.size();i++)
       {
        totalGas +=gas[i];
        totalCost+=cost[i];
        currGas +=(gas[i]-cost[i]);
        if(currGas<0)
        {
            start=i+1;
            currGas=0;
        }
       }
       return totalGas<totalCost ?-1:start;
    }
int main()
{
    
    return 0;
}