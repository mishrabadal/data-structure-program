#include <iostream>
using namespace std;
#include <queue>
#include <bits/stdc++.h>
class node
{
public:
    int data;
    node *left, *right;

    node(int value)
    {
        data = value;
        left = right = NULL;
    }
};

void binary_tree_using_queue()
{

    int x, first, second;
    queue<node *> q;
    cout << "enter the root element : ";
    cin >> x;
    node *root = new node(x);
    q.push(root);

    while (!q.empty())
    {
        node *temp = q.front();
        q.pop();
        // left
        cout << "enter the left child of " << temp->data << " : ";
        cin >> first;
        if (first != -1)
        {
            temp->left = new node(first);
            q.push(temp->left);
        }
        // right
        cout << "enter the right child of " << temp->data << " : ";
        cin >> second;
        if (second != -1)
        {
            temp->right = new node(second);
            q.push(temp->right);
        }
    }
}

node *binary_tree()
{
    int x;
    cin >> x;

    if (x == -1)
        return NULL;
    node *temp = new node(x);
    cout << "enter the left child of " << x << " : ";
    temp->left = binary_tree();
    cout << "enter the right child of " << x << " : ";
    temp->right = binary_tree();
    return temp;
}

void preorder(node *root)
{
if(root==NULL)
return;
cout<<root->data<<" ";
preorder(root->left);
preorder(root->right);
}
int main()
{
    cout << "enter the root element : ";
    node *root = binary_tree();
    preorder(root);
    return 0;
}