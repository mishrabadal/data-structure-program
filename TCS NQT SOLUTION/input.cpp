#include <iostream>
#include <bits/stdc++.h>
using namespace std;
// case 1 : when size of array is given using older method arr

void input1()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

// case 1 : when size of array is given using modern method vector
void input2()
{
    int n;
    cin >> n;
    vector<int> arr;
    for (int i = 0; i < n; i++)
    {
        int num;
        cin >> num;
        arr.push_back(num);
    }

    for (int a : arr)
    {
        cout << a << " ";
    }
}

// size of array is not mentioned
// case : 2 space separated value
void input3()
{
    string s;
    getline(cin, s);
    vector<int> arr;
    stringstream ss(s);
    string num;
    while (getline(ss, num, ' '))
    {
        arr.push_back(stoi(num));
    }
    for (int ans : arr)
    {
        cout << ans << " ";
    }
}

// case : 2 comma separated value
void input4()
{
    string s;
    getline(cin, s);
    vector<int> arr;
    stringstream ss(s);
    string num;
    while (getline(ss, num, ','))
    {
        arr.push_back(stoi(num));
    }
    for (int ans : arr)
    {
        cout << ans + 1 << " ";
    }
}

// case : 3 space separated value or commma separated value but inside bracket
void input5()
{
    string s;
    getline(cin, s);
    vector<int> arr;

    string num;

    if (s.front() == '[' && s.back() == ']')
    {
        s = s.substr(1, s.length() - 2);
    }
    stringstream ss(s);
    while (getline(ss, num, ','))
    {
        arr.push_back(stoi(num));
    }
    for (int ans : arr)
    {
        cout << ans << " ";
    }
}

// string input related code
void input6()
{
    int n;
    cin >> n;
    cin.ignore();
    string s;
    getline(cin, s);

    cout << endl
         << s;
}
int main()
{

    return 0;
}