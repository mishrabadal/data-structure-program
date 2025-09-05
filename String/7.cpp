#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
// 1832. Check if the Sentence Is Pangram
bool checkIfPangram(string sentence)
{
    // alpha array charcter present hai ya nhi iska record store karta hai
    // agar present hai to uske index ko 1 kar deta. yaha par index of a is 0,b=1,z=25;
    vector<bool> alpha(26, 0);
    for (int i = 0; i < sentence.size(); i++)
    {
        alpha[sentence[i] - 'a'] = 1;
    }

    for (int i = 0; i < 26; i++)
    {
        // agar koi character absent hua alpha array me to iska matlab panagram nhi hai
        if (alpha[i] == 0)
        {

            return 0;
        }
    }

    return 1;
}

int main()
{

    return 0;
}