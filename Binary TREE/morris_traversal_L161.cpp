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
vector<int> inOrder(Node *root)
{
    vector<int> ans;
    while (root)
    {
        if (!root->left)
        {
            ans.push_back(root->data);
            root = root->right;
        }
        else
        {
            Node *curr = root->left;
            while (curr->right && curr->right != root)
                curr = curr->right;
            // left subtree not traverse
            if (curr->right == NULL)
            {
                curr->right = root;
                root = root->left;
            }
            else
            {
                curr->right = NULL;
                ans.push_back(root->data);
                root = root->right;
            }
        }
    }
    return ans;
}

vector<int> preorder(Node *root)
{

    vector<int> ans;
    while (root)
    {
        if (!root->left)
        {
            ans.push_back(root->data);
            root = root->right;
        }
        else
        {
            Node *curr = root->left;
            while (curr->right && curr->right != root)
                curr = curr->right;
            // left subtree not traverse
            if (curr->right == NULL)
            {
                ans.push_back(root->data);
                curr->right = root;
                root = root->left;
            }
            else // already traverse
            {
                curr->right = NULL;

                root = root->right;
            }
        }
    }
    return ans;
}


void traverse(Node *temp)
{
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->right;
    }
}

void pre_order(Node *root)
{

    if (root == NULL)
        return;
    cout << root->data << " ";
    pre_order(root->left);
    pre_order(root->right);
}
// Flatten binary tree to linked list
void flatten(Node *root)
{
    Node *temp = root;
    while (root)
    {
        if (!root->left)
            root = root->right;
        else
        {
            Node *curr = root->left;
            while (curr->right)
                curr = curr->right;
            curr->right = root->right;
            root->right = root->left;
            root->left = NULL;
            root = root->right;
        }
    }
    pre_order(temp);
}
int main()
{
    Node *root = default_bt();
    flatten(root);
    return 0;
}