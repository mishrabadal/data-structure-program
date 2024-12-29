#include <iostream>
#include <bits/stdc++.h>
#include <stack>
using namespace std;
void reverse_string(string s)
{
    stack<char> st;
    for (int i = 0; i < s.size(); i++)
    {
        st.push(s[i]);
    }
    int i = 0;
    while (!st.empty())
    {
        s[i] = st.top();
        i++;
        st.pop();
    }
    cout << s;
}

void print_stack(stack<string> s)
{
    while (!s.empty())
    {
        cout << s.top() << endl;
        s.pop();
    }
}

void print_stack(stack<int> s)
{
    while (!s.empty())
    {
        cout << s.top() << endl;
        s.pop();
    }
}

void ins_bottom()
{
    stack<int> st;
    for (int i = 1; i <= 5; i++)
    {
        st.push(i);
    }
    stack<int> temp;
    int x = 13;
    while (!st.empty())
    {
        temp.push(st.top());
        st.pop();
    }
    st.push(x);
    while (!temp.empty())
    {
        st.push(temp.top());
        temp.pop();
    }
    print_stack(st);
}

void make_beautiful()
{
    vector<int> arr = {2, 3, 5, -4, 6, -2, -8, 9};
    stack<int> s;
    for (int i = 0; i < arr.size(); i++)
    {
        if (s.empty())
            s.push(arr[i]);

        else if (arr[i] > 0)
        {
            if (s.top() >= 0)
                s.push(arr[i]);
            else
                s.pop();
        }

        else
        {
            if (s.top() < 0)
                s.push(arr[i]);
            else
                s.pop();
        }
    }
    vector<int> ans(s.size());
    int i = s.size() - 1;
    while (!s.empty())
    {
        ans[i] = s.top();
        i--;
        s.pop();
    }

    // cout << ans[0] << " " << ans[1];
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
}

// string manipulation
void Remove_consecutive_same()
{
    vector<string> v = {"ab", "ac", "da", "da", "ac", "db", "ea"};
    stack<string> s;
    for (int i = 0; i < v.size(); i++)
    {
        if (s.empty())
            s.push(v[i]);
        else if (s.top() == v[i])
            s.pop();
        else
            s.push(v[i]);
    }
    cout << s.size() << endl;
    print_stack(s);
}

bool check_Valid_Parenthesis(string str)
{
    stack<char> s;
    for (int i = 0; i < str.size(); i++)
    {
        if (str[i] == '(')
            s.push(str[i]);
        else
        {
            if (s.empty())
                return 0;
            else
                s.pop();
        }
    }

    return s.empty();
}

// method 2 of check valid parenthesis
bool checks_Valid_Parenthesis(string str)
{
    int left = 0;
    for (int i = 0; i < str.size(); i++)
    {
        if (str[i] == '(')
            left++;
        else
        {
            if (left == 0)
                return 0;
            else
                left--;
        }
    }
    return left == 0;
}

int min_add_to_make_valid(string s)
{
    stack<char> st;
    int count = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == '(')
            st.push(s[i]);
        else
        {
            if (st.empty())
                count++;
            else
                st.pop();
        }
    }
    return count + st.size();
}

bool isValid(string s)
{
    stack<char> st;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == '(' || s[i] == '{' || s[i] == '[')
            st.push(s[i]);
        else
        {
            if (st.empty())
                return 0;
            else if (s[i] == ')')
            {
                if (st.top() != '(')
                    return 0;
                else
                    st.pop();
            }

            else if (s[i] == '}')
            {
                if (st.top() != '{')
                    return 0;
                else
                    st.pop();
            }
            else
            {
                if (st.top() != '[')
                    return 0;
                else
                    st.pop();
            }
        }
    }
    return st.empty();
}

vector<int> Print_Bracket_number(string s)
{
    int count = 0;
    stack<int> st;
    vector<int> ans;
    for (int i = 0; i < s.size(); i++)
    {
        // opening bracket
        if (s[i] == '(')
        {
            count++;
            st.push(count);
            ans.push_back(count);
        }
        // closing bracket
        else if (s[i] == ')')
        {
            ans.push_back(st.top());
            st.pop();
        }
    }
    return ans;
    // output
    //  1 2 2 1 3 3
    //  main(){
    //      vector<int>s=   Print_Bracket_number("(aa(bdc))p(dee)");
    //  for (int i = 0; i < s.size(); i++)
    //  {
    //      cout<<s[i]<<" ";
    //  }
    //  }
}

void get_minimum_at_pop(int arr[], int n)
{
    stack<int> st;
    for (int i = 0; i < n; i++)
    {
        if (i == 0)
            st.push(arr[i]);
        else
            st.push(min(arr[i], st.top()));
    }

    print_stack(st);
    // output : 0 0 1 1 1 2
    //  main(){
    //      int arr[]={2,1,3,5,0,6};
    //      get_minimum_at_pop(arr,6);
    //  }
}
int main()
{

    int arr[] = {2, 1, 3, 5, 0, 6};
    get_minimum_at_pop(arr, 6);

    return 0;
}