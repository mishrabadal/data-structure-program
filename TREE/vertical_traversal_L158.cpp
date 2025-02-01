#include <iostream>
using namespace std;
#include <bits/stdc++.h>
#include <queue>
#include <stack>
#include <math.h>
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
// vertical traversal of binary tree
void find(Node *root, int pos, int &l, int &r)
{
    if (!root)
        return;
    l = min(l, pos);
    r = max(r, pos);
    find(root->left, pos - 1, l, r);
    find(root->right, pos + 1, l, r);
}
vector<int> verticalOrder(Node *root)
{

    int l = 0, r = 0;
    find(root, 0, l, r);
    vector<vector<int>> positive(r + 1);
    vector<vector<int>> negative(abs(l) + 1);
    queue<Node *> q;
    queue<int> index;
    q.push(root);
    index.push(0);

    while (!q.empty())
    {
        Node *temp = q.front();
        q.pop();
        int pos = index.front();
        index.pop();
        if (pos >= 0)
            positive[pos].push_back(temp->data);
        else
            negative[abs(pos)].push_back(temp->data);
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
    vector<int> ans;
    for (int i = negative.size() - 1; i > 0; i--)
        for (int j = 0; j < negative[i].size(); j++)
            ans.push_back(negative[i][j]);

    for (int i = 0; i < positive.size(); i++)
        for (int j = 0; j < positive[i].size(); j++)
            ans.push_back(positive[i][j]);

    for (auto i : ans)
        cout << i << "  ";

    return ans;
}

// diagonal binary tree traversal
void find(Node *root, int pos, int &l)
{
    if (!root)
        return;
    l = max(pos, l);
    find(root->left, pos + 1, l);
    find(root->right, pos, l);
}

void findDig(Node *root, int pos, vector<vector<int>> &ans)
{
    if (!root)
        return;
    ans[pos].push_back(root->data);
    findDig(root->left, pos + 1, ans);
    findDig(root->right, pos, ans);
}
vector<int> diagonal(Node *root)
{
    int l = 0;
    find(root, 0, l);
    vector<vector<int>> ans(l + 1);
    findDig(root, 0, ans);
    vector<int> temp;
    for (int i = 0; i < ans.size(); i++)
        for (int j = 0; j < ans[i].size(); j++)
            temp.push_back(ans[i][j]);

    for (auto i : temp)
        cout << i << "  ";

    return temp;
    // output : 10  30  90  20  60  80  40
}

// boundary order traversal
void LeftSub(Node *root, vector<int> &ans)
{
    // base case
    if (!root || (!root->left && !root->right))
        return;
    ans.push_back(root->data);
    if (root->left)
        LeftSub(root->left, ans);
    else
        LeftSub(root->right, ans);
}
void leaf(Node *root, vector<int> &ans)
{
    if (!root)
        return;
    if (!root->left && !root->right)
    {
        ans.push_back(root->data);
        return;
    }
    // left part
    leaf(root->left, ans);
    // right part
    leaf(root->right, ans);
}

void RightSub(Node *root, vector<int> &ans)
{
    if (!root || (!root->left && !root->right))
        return;

    // rightm part
    if (root->right)
        RightSub(root->right, ans);
    else
        RightSub(root->left, ans);

    ans.push_back(root->data);
}

vector<int> boundaryTraversal(Node *root)
{
    vector<int> ans;
    ans.push_back(root->data);
    LeftSub(root->left, ans);

    if (root->left || root->right)
        leaf(root, ans);

    RightSub(root->right, ans);

    for (auto i : ans)
        cout << i << " ";
    return ans;
}
int main()
{
    Node *root = default_bt();
    boundaryTraversal(root);
    return 0;
}