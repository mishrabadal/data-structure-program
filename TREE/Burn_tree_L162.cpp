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

// burnning node
class Solution
{
public:
    int Burn(Node *root, int &timer, int target)
    {
        if (!root)
            return 0;
        if (root->data == target)
            return -1;
        int left = Burn(root->left, timer, target);
        int right = Burn(root->right, timer, target);
        if (left < 0)
        {
            timer = max(timer, abs(left) + right);
            return left - 1;
        }
        if (right < 0)
        {
            timer = max(timer, left + abs(right));
            return right - 1;
        }
        // height ko return karna hai
        return 1 + max(left, right);
    }

    void find(Node *root, int target, Node *&BurnNode)
    {
        if (!root)
            return;
        if (root->data == target)
        {
            BurnNode = root;
            return;
        }
        find(root->left, target, BurnNode);
        find(root->right, target, BurnNode);
    }
    int Height(Node *root)
    {
        if (!root)
            return 0;
        return 1 + max(Height(root->left), Height(root->right));
    }
    int minTime(Node *root, int target)
    {
        int timer = 0;
        Burn(root, timer, target);

        // height of target node ki if we consider it as root
        Node *BurnNode = NULL;
        find(root, target, BurnNode);
        int high = Height(BurnNode) - 1;
        return max(timer, high);
    }
};

// Max Path Sum 2 Special Nodes
int PathSum(Node *root, int &sum)
{
    if (!root)
        return 0;
    // leaf Node
    if (!root->left && !root->right)
        return root->data;

    int left = PathSum(root->left, sum);
    int right = PathSum(root->right, sum);

    // left and right both exist
    if (root->left && root->right)
    {
        sum = max(sum, root->data + left + right);
        return root->data + max(left, right);
    }
    // only left exist
    if (root->left)
        return root->data + left;
    // only right exist
    if (root->right)
        return root->data + right;
}
int maxPathSum(Node *root)
{
    // code here
    int sum = INT_MIN;
    int val = PathSum(root, sum);
    // root node ho special node ho sakta hai
    if (root->left && root->right)

        return sum;
    return max(sum, val);
}
int main()
{
    Node *root = default_bt();

    return 0;
}