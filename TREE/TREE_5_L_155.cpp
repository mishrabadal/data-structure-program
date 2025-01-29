#include <iostream>
using namespace std;
#include <bits/stdc++.h>
#include <queue>

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
    // cout << endl;
    //    cout << "enter the left child of " << x << " : " << arr.front();
    temp->left = binary_tree(arr);
    //  cout << endl;
    //   cout << "enter the right child of " << x << " : " << arr.front();
    temp->right = binary_tree(arr);
    return temp;
}
Node *default_bt()
{
    list<int> arr{10, 20, 40, -1, -1, 60, -1, -1, 30, 80, -1, -1, 90, -1, -1}; // primary tree
    // list<int> arr{10, 20, 40, -1, -1, 60, -1, -1, 30, -1, -1}; // balanced binary tree

    Node *root;
    root = binary_tree(arr);
    return root;
}

// left view of binary tree
//  using queue
vector<int> leftView(Node *root)
{
    // code here
    vector<int> ans;

    // queue me agar null hai to
    if (!root)
        return ans;
    queue<Node *> q;
    q.push(root);

    // level order traversal laga rhe hai
    while (!q.empty())
    {

        ans.push_back(q.front()->data);
        int n = q.size();
        while (n--)
        {
            Node *temp = q.front();
            q.pop();
            if (temp->left)
                q.push(temp->left);
            if (temp->right)
                q.push(temp->right);
        }
    }
    for (auto i : ans)
        cout << i << " ";
    return ans;
}

// using recursion : jab pahali baar kisi level pe jaye to fisst element ko  answer me push kar de
void L_view(Node *root, int level, vector<int> &ans)
{
    if (!root)
        return;
    if (level == ans.size())
        ans.push_back(root->data);
    L_view(root->left, level + 1, ans);
    L_view(root->right, level + 1, ans);
}

// right view

vector<int> RightView(Node *root)
{
    // code here
    vector<int> ans;

    // queue me agar null hai to
    if (!root)
        return ans;
    queue<Node *> q;
    q.push(root);

    // level order traversal laga rhe hai
    while (!q.empty())
    {

        ans.push_back(q.front()->data);
        int n = q.size();
        while (n--)
        {
            Node *temp = q.front();
            q.pop();
            if (temp->right)
                q.push(temp->right);
            if (temp->left)
                q.push(temp->left);
        }
    }
    for (auto i : ans)
        cout << i << " ";
    return ans;
}

// top view of binary tree
void find(Node *root, int pos, int &l, int &r)
{
    if (!root)
        return;
    l = min(l, pos);
    r = max(r, pos);
    find(root->left, pos - 1, l, r);
    find(root->right, pos + 1, l, r);
}

vector<int> TopView(Node *root)
{
    int l = 0, r = 0;
    find(root, 0, l, r);
    vector<int> ans(r - l + 1);
    ;
    vector<bool> filled(r - l + 1, 0);
    queue<Node *> q;
    queue<int> index;
    q.push(root);
    index.push(-1 * l);
    while (!q.empty())
    {
        Node *temp = q.front();
        q.pop();
        int pos = index.front();
        index.pop();
        if (!filled[pos])
        {
            filled[pos] = 1;
            ans[pos] = temp->data;
        }
        if (temp->left)
        {
            q.push(temp->left);
            index.push(pos - 1);
        }
        if (temp->right)
        {
            q.push(temp->right);
            index.push(pos + 1);
        }
    }

    for (auto i : ans)
        cout << i << "  ";
    return ans;
}
int main()
{

    Node *root = default_bt();
    // vector<int> ans;
    // int level = 0;
    // L_view(root, level, ans);
    // for(auto i : ans )
    // cout<<i<<"  ";
    // RightView(root);
    RightView(root);
    return 0;
}