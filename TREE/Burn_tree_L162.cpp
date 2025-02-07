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

//burnning node
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

        // height of target node kiif we consider it as root
        Node *BurnNode = NULL;
        find(root, target, BurnNode);
        int high = Height(BurnNode) - 1;
        return max(timer, high);
    }
};


int main()
{
    Node *root = default_bt();

    return 0;
}