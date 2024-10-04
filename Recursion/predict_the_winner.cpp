#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int winner(vector<bool> &person, int n, int index, int person_left, int k)
{

    if (person_left == 1)
    {
        for (int i = 0; i < n; i++)
        {
            if (person[i] == 0)
                return i;
        }
    }

    int kill = (k - 1) % person_left;
    while (kill--)
    {
        index = (index + 1) % n;
        while (person[index] == 1)
            index = (index + 1) % n;
    }
    person[index] = 1;
    while (person[index] == 1)
    {
        index = (index + 1) % n;
    }
    return winner(person, n, index, person_left - 1, k);
    // output 3
}

int main()
{
    int n = 5; // total no of element {0,1,2,3,4}
    int k = 3; // kill at 3rd index
    vector<bool> person(n, 0);
    cout << winner(person, n, 0, n, k);
    return 0;
}