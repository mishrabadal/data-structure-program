#include <iostream>

#include <vector>
#include<stack>
#include<queue>
#include<bits/stdc++.h>
using namespace std;
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
Node *BST(int post[], int &index, int lower, int upper)
{
    if (index < 0 || post[index] < lower || post[index] > upper)
        return NULL;
    Node *root = new Node(post[index--]);

    root->right = BST(post, index, root->data, upper);
    root->left = BST(post, index, lower, root->data);
    return root;
}

Node *constructTree(int post[], int size)
{
    int index = size - 1;
    return BST(post, index, INT_MIN, INT_MAX);
}

void level_order_traversal(Node *root)
{
    queue<Node *> q;
    q.push(root);
    vector<int> ans;
    Node *temp;
    while (!q.empty())
    {
        temp = q.front();
        q.pop();
        ans.push_back(temp->data);
        if (temp->left)
            q.push(temp->left);
        if (temp->right)
            q.push(temp->right);
    }
    cout << endl;
    for (auto i : ans)
        cout << i << " ";
}
void inorder(Node *root)
{
    if(!root)
    return;
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}
int main()
{
    int post[] = {1 ,7 ,5, 50, 40 ,10};
    int index=0;
    Node *root= constructTree(post, 6);
    inorder(root);
    return 0;
}