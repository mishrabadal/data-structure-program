#include <iostream>
#include <stdlib.h>
#include <vector>
#include<stack>
using namespace std;
class Node
{
public:
    int data;
    Node *left, *right;
    Node(int dataue)
    {
        data = dataue;
        left = right = NULL;
    }
};
Node *insert(Node *root, int target)
{
    if (!root)
    {
        Node *temp = new Node(target);
        return temp;
    }
    // left side
    if (target < root->data)
    {
        root->left = insert(root->left, target);
    }
    // right side
    else
    {
        root->right = insert(root->right, target);
    }
    return root;
}
Node *BST(vector<int> &preorder, int &index, int lower, int upper)
{
    if (index == preorder.size() || preorder[index] < lower || preorder[index] > upper)
        return NULL;
    Node *root = new Node(preorder[index++]);
    root->left = BST(preorder, index, lower, root->data);
    root->right = BST(preorder, index, root->data, upper);
    return root;
}

//lowest common ancestor
Node* LCA(Node* root, Node* n1, Node* n2) {
    if(!root)
    return NULL;
    if(root->data>n1->data && root->data>n2->data)
    return LCA(root->left,n1,n2);

    if(root->data<n1->data && root->data<n2->data)
    return LCA(root->right,n1,n2);
    else
    return root;
}


//BST Keys in a Range
int n1,n2;
void find(Node *root, vector<int>&ans)
{
if(!root)
return;
if(root->data>n1 && root->data>n2)
find(root->left,ans);
else if(root->data<n1 && root->data<n2)
find(root->right,ans);
else{
    find(root->left,ans);
    ans.push_back(root->data);
    find(root->right,ans);
}
}
vector<int> printNearNodes(Node *root, int low, int high) {
   n1=low,n2=high;   
   vector<int>ans;
   find(root,ans);
   return ans;
}
// BST with Dead End
bool Dead(Node *root,int lower,int upper)
{
if(!root)
return 0;
if(!root->left && !root->right)
{
    if(root->data - lower ==1 && upper-root->data==1)
    return 1;
    else
    return 0;
}
return Dead(root->left,lower,root->data) ||Dead(root->right,root->data,upper);
}
void default_bst()
{
    int arr[] = {3, 7, 4, 1, 6, 8};
    int n = sizeof(arr) / sizeof(arr[0]);
    Node *root = NULL;
    for (int i = 0; i < n; i++)
    {
        root = insert(root, arr[i]);
    }
}

int main()
{

    default_bst();
    return 0;
}