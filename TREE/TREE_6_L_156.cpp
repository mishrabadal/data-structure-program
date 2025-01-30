#include <iostream>
using namespace std;
#include <bits/stdc++.h>
#include <queue>
#include <stack>
class Node
{
public:
    int data;
    Node *left, *right;
    Node(int value)
    {
        data = value;
        left = right = NULL;
    }
};

// tree coding start using recursion t(n)=n  ,s(n)=o(h) , wc s(n)=o(n)
Node *binary_tree(list<int> &arr)
{
    int x = arr.front();
    arr.pop_front();

    if (x == -1)
        return NULL;

    Node *temp = new Node(x);
    temp->left = binary_tree(arr);
    temp->right = binary_tree(arr);
    return temp;
}
Node *default_bt()
{
    list<int> arr{10, 20, 40, -1, -1, 60, -1, -1, 30, 80, -1, -1, 90, -1, -1}; // binary tree
    Node *root;
    root = binary_tree(arr);
    return root;
}

vector<int> preorder(Node *root)
{

    stack<Node *> s;
    s.push(root);
    vector<int> ans;
    while (!s.empty())
    {
        Node *temp = s.top();
        s.pop();
        ans.push_back(temp->data);
        if (temp->right)
            s.push(temp->right);

        if (temp->left)
            s.push(temp->left);
    }
    for (auto i : ans)
        cout << i << "  ";
    return ans;
}

vector<int> postorder(Node *root)
{
    stack<Node *> s;
    s.push(root);
    vector<int> ans;
    while (!s.empty())
    {
        Node *temp = s.top();
        s.pop();
        ans.push_back(temp->data);
        if (temp->left)
            s.push(temp->left);
        if (temp->right)
            s.push(temp->right);
    }
    reverse(ans.begin(), ans.end());
    for (auto i : ans)
        cout << i << "  ";
    return ans;
}

vector<int> inorder(Node *root)
{
    stack<Node *> s;
    stack<bool> visited;
    s.push(root);
    visited.push(0);
    vector<int> ans;
    while (!s.empty())
    {
        Node *temp = s.top();
        s.pop();
        bool flag = visited.top();
        visited.pop();

        if (!flag)
        {
            if (temp->right)
            {
                s.push(temp->right);
                visited.push(0);
            }
            s.push(temp);
            visited.push(1);
            if (temp->left)
            {
                s.push(temp->left);
                visited.push(0);
            }
        }
        else
        {
            ans.push_back(temp->data);
        }
    }

    for (auto i : ans)
        cout << i << "  ";
    return ans;
}

int main()
{

    Node *root = default_bt();
    preorder(root);
    return 0;
}