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
void pre(Node *root)
{
    if (root == NULL)
        return;
   
    cout << root->data << " ";
     pre(root->left);
    pre(root->right);
    
}
// construct tree from inorder and preorder
int find(int in[], int target, int start, int end)
{
    for (int i = start; i <= end; i++)
    {
        if (in[i] == target)
            return i;
    }
    return -1;
}

// this tree will return the root element
Node *Tree(int *in, int *pre, int instart, int inend, int index)
{
    if (instart > inend)
        return NULL;

    Node *root = new Node(pre[index]);
    int pos = find(in, pre[index], instart, inend);
    // build left side
    root->left = Tree(in, pre, instart, pos - 1, index + 1);
    // build right side
    root->right = Tree(in, pre, pos + 1, inend, index + (pos - instart) + 1);
    return root;

    // main(){
    // int in[] = {1, 6, 8, 7};
    // int pre[] = {1, 6, 7, 8};
    // int n = 4; // size;
    // Node *root = Tree(in, pre, 0, n - 1, 0);
    // post(root);
    // //output 8 7 6 1 
    // }
}

// construct tree from inorder and post

// this tree will return the root element
Node *Tree(int *in, int *post, int instart, int inend, int index)
{
    if (instart > inend)
        return NULL;

    Node *root = new Node(post[index]);
    int pos = find(in, post[index], instart, inend);
        // build right side
    root->right = Tree(in, post, pos + 1, inend, index- 1);
    // build left side
    root->left = Tree(in, post, instart, pos - 1, index-(inend-pos) - 1);

    return root;
}

int main()
{
    int in[] = {1, 6, 8, 7};
    int post[] = {8, 7, 6, 1};
    int n = 4; // size;
   Node *root = Tree(in, post, 0, n - 1, n-1);
    pre(root);
    //output 8 7 6 1 
    return 0;
}