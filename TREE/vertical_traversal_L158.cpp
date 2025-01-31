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
int main()
{
    Node *root = default_bt();
    verticalOrder(root);
    return 0;
}